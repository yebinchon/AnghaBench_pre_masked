
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char const*) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;

void FUNC_8(void)
{
 git_config *VAR_1;
 const char *VAR_2 = "config-file";
 git_buf VAR_3 = VAR_0;

 FUNC_1(VAR_2, "");
 FUNC_2(FUNC_5(&VAR_1, VAR_2));
 FUNC_2(FUNC_6(VAR_1, "section.name", "value"));
 FUNC_4(VAR_1);

 FUNC_2(FUNC_7(&VAR_3, "config-file"));
 FUNC_0("[section]\n\tname = value\n", VAR_3.ptr);

 FUNC_3(&VAR_3);
}
