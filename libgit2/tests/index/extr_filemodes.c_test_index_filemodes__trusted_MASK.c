
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (char*,char*,int) ;

void FUNC_10(void)
{
 git_index *VAR_7;




 if (!FUNC_4())
  return;

 FUNC_5(VAR_6, "core.filemode", 1);

 FUNC_2(FUNC_8(&VAR_7, VAR_6));
 FUNC_1((FUNC_6(VAR_7) & VAR_2) == 0);


 FUNC_9("exec_off", "filemodes/exec_off.0", 0644);
 FUNC_0(VAR_7, "exec_off", VAR_0);


 FUNC_9("exec_on", "filemodes/exec_on.0", 0644);
 FUNC_0(VAR_7, "exec_on", VAR_0);


 FUNC_9("exec_off", "filemodes/exec_off.1", 0755);
 FUNC_0(VAR_7, "exec_off", VAR_1);


 FUNC_9("exec_on", "filemodes/exec_on.1", 0755);
 FUNC_0(VAR_7, "exec_on", VAR_1);


 FUNC_3("filemodes/new_off", "blah", 0,
  VAR_5 | VAR_3 | VAR_4, 0644);
 FUNC_0(VAR_7, "new_off", VAR_0);


 FUNC_3("filemodes/new_on", "blah", 0,
  VAR_5 | VAR_3 | VAR_4, 0755);
 FUNC_0(VAR_7, "new_on", VAR_1);

 FUNC_7(VAR_7);
}
