
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int sz; int addr; int cpu_count; int data; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void *VAR_0)
{
 struct patch *VAR_1 = VAR_0;

 if (FUNC_2(&VAR_1->cpu_count) == 1) {
  FUNC_5(VAR_1->addr, VAR_1->data, VAR_1->sz);
  FUNC_1(&VAR_1->cpu_count);
 } else {
  while (FUNC_3(&VAR_1->cpu_count) <= FUNC_6())
   FUNC_4();
  FUNC_0(VAR_1->addr, VAR_1->sz);
 }
 return 0;
}
