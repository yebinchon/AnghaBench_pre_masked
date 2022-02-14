
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;

void FUNC_7(void)
{
 const char *VAR_1 = "config-repeated";
 git_config *VAR_2;
 git_buf VAR_3 = VAR_0;
 const char *VAR_4 = "[sample \"prefix\"]\n\tsetting1 = someValue1\n\tsetting2 = someValue2\n\tsetting3 = someValue3\n\tsetting4 = someValue4\n";





 FUNC_1(FUNC_4(&VAR_2, VAR_1));
 FUNC_1(FUNC_5(VAR_2, "sample.prefix.setting1", "someValue1"));
 FUNC_1(FUNC_5(VAR_2, "sample.prefix.setting2", "someValue2"));
 FUNC_1(FUNC_5(VAR_2, "sample.prefix.setting3", "someValue3"));
 FUNC_1(FUNC_5(VAR_2, "sample.prefix.setting4", "someValue4"));
 FUNC_3(VAR_2);

 FUNC_1(FUNC_4(&VAR_2, VAR_1));

 FUNC_1(FUNC_6(&VAR_3, VAR_1));
 FUNC_0(VAR_4, VAR_3.ptr);
 FUNC_2(&VAR_3);

 FUNC_3(VAR_2);
}
