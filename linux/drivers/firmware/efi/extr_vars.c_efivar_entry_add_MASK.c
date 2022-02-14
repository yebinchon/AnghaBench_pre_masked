
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct efivar_entry {int list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct efivar_entry *VAR_2, struct list_head *VAR_3)
{
 if (FUNC_0(&VAR_1))
  return -VAR_0;
 FUNC_1(&VAR_2->list, VAR_3);
 FUNC_2(&VAR_1);

 return 0;
}
