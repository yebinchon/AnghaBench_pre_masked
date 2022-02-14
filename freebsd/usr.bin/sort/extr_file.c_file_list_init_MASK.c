
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {int tmp; int * fns; scalar_t__ sz; scalar_t__ count; } ;



void
FUNC_0(struct file_list *VAR_0, bool VAR_1)
{

 if (VAR_0) {
  VAR_0->count = 0;
  VAR_0->sz = 0;
  VAR_0->fns = ((void*)0);
  VAR_0->tmp = VAR_1;
 }
}
