
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_iso_context {int dummy; } ;
struct firedtv {int device; int demux; struct fdtv_ir_context* ir_context; } ;
struct fdtv_ir_context {int current_packet; char** pages; int context; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fdtv_ir_context*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct fw_iso_context *VAR_6, u32 VAR_7,
         size_t VAR_8, void *VAR_9, void *VAR_10)
{
 struct firedtv *VAR_11 = VAR_10;
 struct fdtv_ir_context *VAR_12 = VAR_11->ir_context;
 __be32 *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17 = VAR_12->current_packet;
 char *VAR_18, *VAR_19;

 for (VAR_13 = VAR_9, VAR_14 = VAR_13 + VAR_8 / 4; VAR_13 < VAR_14; VAR_13++) {
  VAR_15 = FUNC_0(VAR_13) >> 16;
  if (FUNC_5(VAR_15 > VAR_1)) {
   FUNC_1(VAR_11->device, "length = %d\n", VAR_15);
   VAR_15 = VAR_1;
  }

  VAR_18 = VAR_12->pages[VAR_17 / VAR_5]
    + (VAR_17 % VAR_5) * VAR_1;
  VAR_19 = VAR_18 + VAR_15;

  for (VAR_18 += VAR_0 + VAR_2; VAR_18 < VAR_19;
       VAR_18 += VAR_3)
   FUNC_2(&VAR_11->demux, VAR_18, 1);

  VAR_16 = FUNC_4(VAR_12, VAR_17);
  if (FUNC_5(VAR_16))
   FUNC_1(VAR_11->device, "requeue failed\n");

  VAR_17 = (VAR_17 + 1) & (VAR_4 - 1);
 }
 FUNC_3(VAR_12->context);
 VAR_12->current_packet = VAR_17;
}
