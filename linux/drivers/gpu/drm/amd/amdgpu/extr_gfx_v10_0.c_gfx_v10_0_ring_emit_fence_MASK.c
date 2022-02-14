
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct amdgpu_ring *VAR_8, u64 VAR_9,
         u64 VAR_10, unsigned VAR_11)
{
 struct amdgpu_device *VAR_12 = VAR_8->adev;
 bool VAR_13 = VAR_11 & VAR_0;
 bool VAR_14 = VAR_11 & VAR_1;


 if (VAR_12->pdev->device == 0x50)
  VAR_14 = 0;


 FUNC_7(VAR_8, FUNC_1(VAR_3, 6));
 FUNC_7(VAR_8, (VAR_7 |
     VAR_4 |
     VAR_5 |
     VAR_6 |
     FUNC_2(3) |
     FUNC_5(VAR_2) |
     FUNC_4(5)));
 FUNC_7(VAR_8, (FUNC_3(VAR_13 ? 2 : 1) |
     FUNC_6(VAR_14 ? 2 : 0)));





 if (VAR_13)
  FUNC_0(VAR_9 & 0x7);
 else
  FUNC_0(VAR_9 & 0x3);
 FUNC_7(VAR_8, FUNC_8(VAR_9));
 FUNC_7(VAR_8, FUNC_9(VAR_9));
 FUNC_7(VAR_8, FUNC_8(VAR_10));
 FUNC_7(VAR_8, FUNC_9(VAR_10));
 FUNC_7(VAR_8, 0);
}
