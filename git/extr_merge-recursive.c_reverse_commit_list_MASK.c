
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; } ;



__attribute__((used)) static struct commit_list *FUNC_0(struct commit_list *VAR_0)
{
 struct commit_list *VAR_1 = ((void*)0), *VAR_2, *VAR_3;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  VAR_2->next = VAR_1;
  VAR_1 = VAR_2;
 }
 return VAR_1;
}
