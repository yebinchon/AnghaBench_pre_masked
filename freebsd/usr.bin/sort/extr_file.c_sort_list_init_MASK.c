
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list {int memsize; int * list; scalar_t__ size; scalar_t__ count; } ;



void
FUNC_0(struct sort_list *VAR_0)
{

 if (VAR_0) {
  VAR_0->count = 0;
  VAR_0->size = 0;
  VAR_0->memsize = sizeof(struct sort_list);
  VAR_0->list = ((void*)0);
 }
}
