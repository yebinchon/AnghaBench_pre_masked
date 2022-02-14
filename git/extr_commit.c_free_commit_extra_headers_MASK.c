
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_extra_header {struct commit_extra_header* value; struct commit_extra_header* key; struct commit_extra_header* next; } ;


 int FUNC_0 (struct commit_extra_header*) ;

void FUNC_1(struct commit_extra_header *VAR_0)
{
 while (VAR_0) {
  struct commit_extra_header *VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->key);
  FUNC_0(VAR_0->value);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
