
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (struct file*,char*,int) ;
 int FUNC_2 (struct file*) ;
 struct file* FUNC_3 (struct mm_struct*) ;
 struct mm_struct* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_1)
{
 char *VAR_2 = ((void*)0);
 struct mm_struct *VAR_3;
 struct file *VAR_4;
 char VAR_5[VAR_0];

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3)
  goto done;

 VAR_4 = FUNC_3(VAR_3);
 FUNC_5(VAR_3);

 if (VAR_4) {
  VAR_2 = FUNC_1(VAR_4, VAR_5, VAR_0-1);
  FUNC_2(VAR_4);
 }

done:
 FUNC_6("Path: %s\n", !FUNC_0(VAR_2) ? VAR_2 : "?");
}
