
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_pvt {int F2; int F1; int F6; int F0; scalar_t__ umc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amd64_pvt *VAR_0)
{
 if (VAR_0->umc) {
  FUNC_0(VAR_0->F0);
  FUNC_0(VAR_0->F6);
 } else {
  FUNC_0(VAR_0->F1);
  FUNC_0(VAR_0->F2);
 }
}
