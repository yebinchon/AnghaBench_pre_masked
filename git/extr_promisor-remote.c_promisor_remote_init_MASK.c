
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promisor_remote {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct promisor_remote* FUNC_1 (scalar_t__,struct promisor_remote**) ;
 int FUNC_2 (struct promisor_remote*,struct promisor_remote*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_0)
  return;
 VAR_0 = 1;

 FUNC_0(VAR_1, ((void*)0));

 if (VAR_2) {
  struct promisor_remote *VAR_3, *VAR_4;

  VAR_3 = FUNC_1(VAR_2,
        &VAR_4);
  if (VAR_3)
   FUNC_2(VAR_3, VAR_4);
  else
   FUNC_3(VAR_2);
 }
}
