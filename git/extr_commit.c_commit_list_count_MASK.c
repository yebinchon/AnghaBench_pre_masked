
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; } ;



unsigned FUNC_0(const struct commit_list *VAR_0)
{
 unsigned VAR_1 = 0;
 for (; VAR_0; VAR_0 = VAR_0->next )
  VAR_1++;
 return VAR_1;
}
