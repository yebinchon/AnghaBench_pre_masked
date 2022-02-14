
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {int fns; int count; } ;


 int FUNC_0 (int ,int ,char const*) ;
 scalar_t__ FUNC_1 (struct file_list*) ;

void
FUNC_2(struct file_list *VAR_0, const char *VAR_1)
{

 if (VAR_0 && VAR_1) {
  while (FUNC_1(VAR_0));

  FUNC_0(VAR_0->count, VAR_0->fns, VAR_1);
 }
}
