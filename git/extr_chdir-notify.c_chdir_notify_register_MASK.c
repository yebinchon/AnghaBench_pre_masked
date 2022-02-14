
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chdir_notify_entry {char const* name; int list; void* data; int cb; } ;
typedef int chdir_notify_callback ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct chdir_notify_entry* FUNC_1 (int) ;

void FUNC_2(const char *VAR_1,
      chdir_notify_callback VAR_2,
      void *VAR_3)
{
 struct chdir_notify_entry *VAR_4 = FUNC_1(sizeof(*VAR_4));
 VAR_4->name = VAR_1;
 VAR_4->cb = VAR_2;
 VAR_4->data = VAR_3;
 FUNC_0(&VAR_4->list, &VAR_0);
}
