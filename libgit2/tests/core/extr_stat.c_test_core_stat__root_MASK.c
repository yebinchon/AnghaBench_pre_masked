
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,struct stat*) ;

void FUNC_8(void)
{
 const char *VAR_1 = FUNC_3();
 git_buf VAR_2 = VAR_0;
 int VAR_3;
 struct stat VAR_4;

 VAR_3 = FUNC_6(VAR_1);
 FUNC_1(VAR_3 >= 0);

 FUNC_5(&VAR_2, VAR_1, VAR_3+1);

 FUNC_2(FUNC_7(VAR_2.ptr, &VAR_4));
 FUNC_1(FUNC_0(VAR_4.st_mode));

 FUNC_4(&VAR_2);
}
