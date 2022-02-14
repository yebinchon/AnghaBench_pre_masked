
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_vgpu {int dummy; } ;
typedef int scic ;
typedef int parm ;
struct TYPE_4__ {int hypervisor_type; } ;
struct TYPE_3__ {int* gfn; scalar_t__ va; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;


 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 TYPE_2__ VAR_8 ;
 int FUNC_3 (struct intel_vgpu*,int,int*,int) ;
 int FUNC_4 (struct intel_vgpu*,int,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int* FUNC_8 (struct intel_vgpu*) ;
 TYPE_1__* FUNC_9 (struct intel_vgpu*) ;

int FUNC_10(struct intel_vgpu *VAR_9, u32 VAR_10)
{
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u64 VAR_15 = 0, VAR_16 = 0;
 int VAR_17;

 switch (VAR_8.hypervisor_type) {
 case 128:
  VAR_11 = *((u32 *)FUNC_9(VAR_9)->va +
     VAR_2);
  VAR_12 = *((u32 *)FUNC_9(VAR_9)->va +
     VAR_1);
  break;
 case 129:
  VAR_15 = (FUNC_9(VAR_9)->gfn[0] << VAR_5) +
     VAR_2;
  VAR_16 = (FUNC_9(VAR_9)->gfn[0] << VAR_5) +
     VAR_1;

  VAR_17 = FUNC_3(VAR_9, VAR_15,
          &VAR_11, sizeof(VAR_11));
  if (VAR_17) {
   FUNC_2("guest opregion read error %d, gpa 0x%llx, len %lu\n",
    VAR_17, VAR_15, sizeof(VAR_11));
   return VAR_17;
  }

  VAR_17 = FUNC_3(VAR_9, VAR_16,
          &VAR_12, sizeof(VAR_12));
  if (VAR_17) {
   FUNC_2("guest opregion read error %d, gpa 0x%llx, len %lu\n",
    VAR_17, VAR_15, sizeof(VAR_11));
   return VAR_17;
  }

  break;
 default:
  FUNC_2("not supported hypervisor\n");
  return -VAR_0;
 }

 if (!(VAR_10 & VAR_6)) {
  FUNC_2("requesting SMI service\n");
  return 0;
 }

 if ((FUNC_8(VAR_9)[VAR_3]
    & VAR_7) ||
   !(VAR_10 & VAR_7)) {
  return 0;
 }

 VAR_13 = FUNC_0(VAR_11);
 VAR_14 = FUNC_1(VAR_11);
 if (!FUNC_7(VAR_11)) {
  FUNC_2("requesting runtime service: func \"%s\","
    " subfunc \"%s\"\n",
    FUNC_5(VAR_13),
    FUNC_6(VAR_14));




  VAR_11 &= ~VAR_4;
  goto out;
 }

 VAR_11 = 0;
 VAR_12 = 0;

out:
 switch (VAR_8.hypervisor_type) {
 case 128:
  *((u32 *)FUNC_9(VAR_9)->va +
     VAR_2) = VAR_11;
  *((u32 *)FUNC_9(VAR_9)->va +
     VAR_1) = VAR_12;
  break;
 case 129:
  VAR_17 = FUNC_4(VAR_9, VAR_15,
          &VAR_11, sizeof(VAR_11));
  if (VAR_17) {
   FUNC_2("guest opregion write error %d, gpa 0x%llx, len %lu\n",
    VAR_17, VAR_15, sizeof(VAR_11));
   return VAR_17;
  }

  VAR_17 = FUNC_4(VAR_9, VAR_16,
          &VAR_12, sizeof(VAR_12));
  if (VAR_17) {
   FUNC_2("guest opregion write error %d, gpa 0x%llx, len %lu\n",
    VAR_17, VAR_15, sizeof(VAR_11));
   return VAR_17;
  }

  break;
 default:
  FUNC_2("not supported hypervisor\n");
  return -VAR_0;
 }

 return 0;
}
