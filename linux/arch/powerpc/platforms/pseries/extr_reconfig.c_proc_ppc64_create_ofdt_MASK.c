
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (char*,int,int *,int *) ;
 int FUNC_1 (struct proc_dir_entry*,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct proc_dir_entry *VAR_1;

 VAR_1 = FUNC_0("powerpc/ofdt", 0200, ((void*)0), &VAR_0);
 if (VAR_1)
  FUNC_1(VAR_1, 0);

 return 0;
}
