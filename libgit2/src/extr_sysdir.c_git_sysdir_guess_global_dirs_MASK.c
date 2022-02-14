
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_1)
{



 int VAR_2;
 uid_t VAR_3, VAR_4;
 const char *VAR_5;

 VAR_3 = FUNC_3();
 VAR_4 = FUNC_2();





 VAR_5 = FUNC_1("APP_SANDBOX_CONTAINER_ID");
 if (!VAR_5 && VAR_3 == VAR_4)
     VAR_2 = FUNC_4(VAR_1, "HOME");
 else
     VAR_2 = FUNC_0(VAR_1, VAR_4);

 if (VAR_2 == VAR_0) {
  FUNC_5();
  VAR_2 = 0;
 }

 return VAR_2;

}
