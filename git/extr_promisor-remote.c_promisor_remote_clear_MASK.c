
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promisor_remote {struct promisor_remote* next; } ;


 int FUNC_0 (struct promisor_remote*) ;
 struct promisor_remote* VAR_0 ;
 struct promisor_remote** VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 while (VAR_0) {
  struct promisor_remote *VAR_2 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_2);
 }

 VAR_1 = &VAR_0;
}
