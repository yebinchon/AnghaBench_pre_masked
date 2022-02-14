
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
 int FUNC_7 (TYPE_1__*,char const*) ;

void FUNC_8(void)
{
 const char *VAR_1 = "config-empty-value";
 git_config *VAR_2;
 git_buf VAR_3 = VAR_0;


 FUNC_1(VAR_1, "[section \"foo\"]\n\tname\n");
 FUNC_2(FUNC_5(&VAR_2, VAR_1));
 FUNC_2(FUNC_6(VAR_2, "newsection.newname", "new_value"));
 FUNC_2(FUNC_6(VAR_2, "section.foo.other", "otherval"));

 FUNC_2(FUNC_7(&VAR_3, VAR_1));
 FUNC_0("[section \"foo\"]\n\tname\n\tother = otherval\n[newsection]\n\tnewname = new_value\n", VAR_3.ptr);

 FUNC_3(&VAR_3);
 FUNC_4(VAR_2);
}
