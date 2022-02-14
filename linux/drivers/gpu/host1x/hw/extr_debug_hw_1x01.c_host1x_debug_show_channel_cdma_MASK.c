
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct output {int dummy; } ;
struct TYPE_2__ {int mapped; } ;
struct host1x_cdma {TYPE_1__ push_buffer; } ;
struct host1x_channel {struct host1x_cdma cdma; int dev; int id; } ;
struct host1x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct host1x_channel*,int ) ;
 int FUNC_8 (struct output*,char*,...) ;
 int FUNC_9 (struct host1x*,int ) ;
 int FUNC_10 (struct output*,struct host1x_cdma*) ;

__attribute__((used)) static void FUNC_11(struct host1x *VAR_6,
        struct host1x_channel *VAR_7,
        struct output *VAR_8)
{
 struct host1x_cdma *VAR_9 = &VAR_7->cdma;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17;

 VAR_10 = FUNC_7(VAR_7, VAR_2);
 VAR_11 = FUNC_7(VAR_7, VAR_1);
 VAR_12 = FUNC_7(VAR_7, VAR_0);
 VAR_14 = FUNC_9(VAR_6, FUNC_1(VAR_7->id));
 VAR_13 = FUNC_9(VAR_6, FUNC_2(VAR_7->id));

 FUNC_8(VAR_8, "%u-%s: ", VAR_7->id, FUNC_6(VAR_7->dev));

 if (FUNC_0(VAR_12) ||
     !VAR_7->cdma.push_buffer.mapped) {
  FUNC_8(VAR_8, "inactive\n\n");
  return;
 }

 if (FUNC_3(VAR_13) == VAR_3 &&
     FUNC_4(VAR_13) ==
   VAR_4)
  FUNC_8(VAR_8, "waiting on syncpt %d val %d\n",
        VAR_14 >> 24, VAR_14 & 0xffffff);
 else if (FUNC_3(VAR_13) ==
    VAR_3 &&
   FUNC_4(VAR_13) ==
    VAR_5) {
  VAR_16 = (VAR_14 >> 16) & 0xff;
  VAR_17 =
   FUNC_9(VAR_6, FUNC_5(VAR_16));
  VAR_15 = VAR_14 & 0xffff;
  FUNC_8(VAR_8, "waiting on syncpt %d val %d (base %d = %d; offset = %d)\n",
        VAR_14 >> 24, VAR_17 + VAR_15, VAR_16,
        VAR_17, VAR_15);
 } else
  FUNC_8(VAR_8, "active class %02x, offset %04x, val %08x\n",
        FUNC_3(VAR_13),
        FUNC_4(VAR_13),
        VAR_14);

 FUNC_8(VAR_8, "DMAPUT %08x, DMAGET %08x, DMACTL %08x\n",
       VAR_10, VAR_11, VAR_12);
 FUNC_8(VAR_8, "CBREAD %08x, CBSTAT %08x\n", VAR_14, VAR_13);

 FUNC_10(VAR_8, VAR_9);
 FUNC_8(VAR_8, "\n");
}
