
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct intel_gvt_mmio_info {int offset; int node; void* write; void* read; scalar_t__ device; scalar_t__ ro_mask; } ;
struct TYPE_2__ {int num_tracked_mmio; int mmio_info_table; int * mmio_attribute; } ;
struct intel_gvt {TYPE_1__ mmio; } ;
typedef void* gvt_mmio_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 struct intel_gvt_mmio_info* FUNC_4 (struct intel_gvt*,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct intel_gvt*,scalar_t__) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_7 (struct intel_gvt_mmio_info*) ;
 struct intel_gvt_mmio_info* FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct intel_gvt *VAR_6,
  u32 VAR_7, u8 VAR_8, u32 VAR_9,
  u32 VAR_10, u32 VAR_11, u32 VAR_12,
  gvt_mmio_func VAR_13, gvt_mmio_func VAR_14)
{
 struct intel_gvt_mmio_info *VAR_15, *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;

 if (!FUNC_6(VAR_6, VAR_12))
  return 0;

 if (FUNC_3(!FUNC_1(VAR_7, 4)))
  return -VAR_1;

 VAR_17 = VAR_7;
 VAR_18 = VAR_7 + VAR_9;

 for (VAR_19 = VAR_17; VAR_19 < VAR_18; VAR_19 += 4) {
  VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_3);
  if (!VAR_15)
   return -VAR_2;

  VAR_15->offset = VAR_19;
  VAR_16 = FUNC_4(VAR_6, VAR_15->offset);
  if (VAR_16) {
   FUNC_2(1, "dup mmio definition offset %x\n",
    VAR_15->offset);
   FUNC_7(VAR_15);





   return -VAR_0;
  }

  VAR_15->ro_mask = VAR_11;
  VAR_15->device = VAR_12;
  VAR_15->read = VAR_13 ? VAR_13 : VAR_4;
  VAR_15->write = VAR_14 ? VAR_14 : VAR_5;
  VAR_6->mmio.mmio_attribute[VAR_15->offset / 4] = VAR_8;
  FUNC_0(&VAR_15->node);
  FUNC_5(VAR_6->mmio.mmio_info_table, &VAR_15->node, VAR_15->offset);
  VAR_6->mmio.num_tracked_mmio++;
 }
 return 0;
}
