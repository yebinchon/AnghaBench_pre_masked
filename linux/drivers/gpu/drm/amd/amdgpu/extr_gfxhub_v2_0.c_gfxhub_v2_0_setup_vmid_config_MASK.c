
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_level; int block_size; scalar_t__ max_pfn; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_19)
{
 int VAR_20;
 uint32_t VAR_21;

 for (VAR_20 = 0; VAR_20 <= 14; VAR_20++) {
  VAR_21 = FUNC_1(VAR_3, 0, VAR_14, VAR_20);
  VAR_21 = FUNC_0(VAR_21, VAR_4, VAR_1, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4, VAR_6,
        VAR_19->vm_manager.num_level);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_8, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_0, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_7, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_11, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_9, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_12, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_2, 1);
  VAR_21 = FUNC_0(VAR_21, VAR_4,
    VAR_5,
    VAR_19->vm_manager.block_size - 9);

  VAR_21 = FUNC_0(VAR_21, VAR_4,
        VAR_10,
        !VAR_13);
  FUNC_2(VAR_3, 0, VAR_14, VAR_20, VAR_21);
  FUNC_2(VAR_3, 0, VAR_18, VAR_20*2, 0);
  FUNC_2(VAR_3, 0, VAR_17, VAR_20*2, 0);
  FUNC_2(VAR_3, 0, VAR_16, VAR_20*2,
   FUNC_3(VAR_19->vm_manager.max_pfn - 1));
  FUNC_2(VAR_3, 0, VAR_15, VAR_20*2,
   FUNC_4(VAR_19->vm_manager.max_pfn - 1));
 }
}
