
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int max_pfn; } ;
struct TYPE_3__ {int prt_warning; } ;
struct amdgpu_device {TYPE_2__ vm_manager; TYPE_1__ gmc; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_16, bool VAR_17)
{
 u32 VAR_18;

 if (VAR_17 && !VAR_16->gmc.prt_warning) {
  FUNC_3(VAR_16->dev, "Disabling VM faults because of PRT request!\n");
  VAR_16->gmc.prt_warning = 1;
 }

 VAR_18 = FUNC_1(VAR_15);
 VAR_18 = FUNC_0(VAR_18, VAR_6,
       VAR_2,
       VAR_17);
 VAR_18 = FUNC_0(VAR_18, VAR_6,
       VAR_5,
       VAR_17);
 VAR_18 = FUNC_0(VAR_18, VAR_6,
       VAR_4,
       VAR_17);
 VAR_18 = FUNC_0(VAR_18, VAR_6,
       VAR_3,
       VAR_17);
 FUNC_2(VAR_15, VAR_18);

 if (VAR_17) {
  uint32_t VAR_19 = VAR_1 >> VAR_0;
  uint32_t VAR_20 = VAR_16->vm_manager.max_pfn -
   (VAR_1 >> VAR_0);

  FUNC_2(VAR_8, VAR_19);
  FUNC_2(VAR_10, VAR_19);
  FUNC_2(VAR_12, VAR_19);
  FUNC_2(VAR_14, VAR_19);
  FUNC_2(VAR_7, VAR_20);
  FUNC_2(VAR_9, VAR_20);
  FUNC_2(VAR_11, VAR_20);
  FUNC_2(VAR_13, VAR_20);
 } else {
  FUNC_2(VAR_8, 0xfffffff);
  FUNC_2(VAR_10, 0xfffffff);
  FUNC_2(VAR_12, 0xfffffff);
  FUNC_2(VAR_14, 0xfffffff);
  FUNC_2(VAR_7, 0x0);
  FUNC_2(VAR_9, 0x0);
  FUNC_2(VAR_11, 0x0);
  FUNC_2(VAR_13, 0x0);
 }
}
