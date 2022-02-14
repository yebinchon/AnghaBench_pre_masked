
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_daemon_done {int add_wildcards; int add_error; int add_id; } ;
typedef int add ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct autofs_daemon_done*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct autofs_daemon_done*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(int VAR_3, bool VAR_4)
{
 struct autofs_daemon_done VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.add_id = VAR_2;
 VAR_5.add_wildcards = VAR_4;
 VAR_5.add_error = VAR_3;

 FUNC_1("completing request %d with error %d",
     VAR_2, VAR_3);

 VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (VAR_6 != 0)
  FUNC_2("AUTOFSDONE");
}
