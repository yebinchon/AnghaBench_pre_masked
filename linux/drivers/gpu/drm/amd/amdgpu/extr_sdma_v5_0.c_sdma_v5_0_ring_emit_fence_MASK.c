
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
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_ring *VAR_4, u64 VAR_5, u64 VAR_6,
          unsigned VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_4->adev;
 bool VAR_9 = VAR_7 & VAR_0;

 FUNC_4(VAR_4, FUNC_2(VAR_2) |
     FUNC_1(0x3));

 FUNC_0(VAR_5 & 0x3);
 FUNC_4(VAR_4, FUNC_5(VAR_5));
 FUNC_4(VAR_4, FUNC_6(VAR_5));
 FUNC_4(VAR_4, FUNC_5(VAR_6));


 if (VAR_9) {
  VAR_5 += 4;
  FUNC_4(VAR_4, FUNC_2(VAR_2) |
      FUNC_1(0x3));

  FUNC_0(VAR_5 & 0x3);
  FUNC_4(VAR_4, FUNC_5(VAR_5));
  FUNC_4(VAR_4, FUNC_6(VAR_5));
  FUNC_4(VAR_4, FUNC_6(VAR_6));
 }


 if ((VAR_7 & VAR_1) && VAR_8->pdev->device != 0x50) {

  FUNC_4(VAR_4, FUNC_2(VAR_3));
  FUNC_4(VAR_4, FUNC_3(0));
 }
}
