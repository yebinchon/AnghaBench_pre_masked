
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {int dummy; } ;


 int FUNC_0 (struct file_list*,char*,int) ;

void
FUNC_1(struct file_list *VAR_0, int VAR_1, char **VAR_2, bool VAR_3)
{

 if (VAR_0 && VAR_2) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(VAR_0, VAR_2[VAR_4], VAR_3);
 }
}
