
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct TYPE_3__ {int * name; } ;
typedef TYPE_1__ ide_proc_entry_t ;


 int FUNC_0 (int *,struct proc_dir_entry*) ;

__attribute__((used)) static void FUNC_1(struct proc_dir_entry *VAR_0, ide_proc_entry_t *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;
 while (VAR_1->name != ((void*)0)) {
  FUNC_0(VAR_1->name, VAR_0);
  VAR_1++;
 }
}
