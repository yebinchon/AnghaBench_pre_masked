
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 int FUNC_0 (int (*) (struct efivar_entry*,void*),struct list_head*,void*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(int (*VAR_0)(struct efivar_entry *, void *),
        struct list_head *VAR_1, void *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_1();
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));
 FUNC_2();

 return VAR_3;
}
