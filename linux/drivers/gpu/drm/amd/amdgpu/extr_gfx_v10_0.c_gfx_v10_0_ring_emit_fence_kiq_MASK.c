
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_ring *VAR_6, u64 VAR_7,
       u64 VAR_8, unsigned int VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_6->adev;


 FUNC_0(VAR_9 & VAR_0);


 FUNC_5(VAR_6, FUNC_1(VAR_3, 3));
 FUNC_5(VAR_6, (FUNC_4(0) |
     FUNC_3(5) | VAR_4));
 FUNC_5(VAR_6, FUNC_6(VAR_7));
 FUNC_5(VAR_6, FUNC_7(VAR_7));
 FUNC_5(VAR_6, FUNC_6(VAR_8));

 if (VAR_9 & VAR_1) {

  FUNC_5(VAR_6, FUNC_1(VAR_3, 3));
  FUNC_5(VAR_6, (FUNC_4(0) |
      FUNC_3(0) | VAR_4));
  FUNC_5(VAR_6, FUNC_2(VAR_2, 0, VAR_5));
  FUNC_5(VAR_6, 0);
  FUNC_5(VAR_6, 0x20000000);
 }
}
