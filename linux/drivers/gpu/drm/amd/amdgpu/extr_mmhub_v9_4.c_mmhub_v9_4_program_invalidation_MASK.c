
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_4,
         int VAR_5)
{
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < 18; ++VAR_6) {
  FUNC_0(VAR_0, 0,
    VAR_3,
    VAR_5 * VAR_1 + 2 * VAR_6,
    0xffffffff);
  FUNC_0(VAR_0, 0,
    VAR_2,
    VAR_5 * VAR_1 + 2 * VAR_6,
    0x1f);
 }
}
