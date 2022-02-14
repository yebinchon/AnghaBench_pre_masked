
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int cpuset_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(cpuset_t VAR_0, u_long VAR_1, u_long VAR_2, u_long VAR_3)
{
 u_int VAR_4;

 while ((VAR_4 = FUNC_1(&VAR_0)) != 0) {
  VAR_4--;
  FUNC_0(VAR_4, &VAR_0);
  FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 }
}
