
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_attr_session ;


 int FUNC_0 (char const**) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (char const**,int ,int *,int ,char*,int ,char const**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

void FUNC_15(void)
{
 const char *VAR_3[2], *VAR_4[2] = { "foo", "bar" };
 git_buf VAR_5 = VAR_0;
 git_attr_session VAR_6;

 FUNC_2(FUNC_12("system", 0777));
 FUNC_3("system/gitattributes", "file foo=1 bar=2");
 FUNC_2(FUNC_10(&VAR_5, FUNC_5(), "system"));
 FUNC_2(FUNC_11(VAR_1, VAR_5.ptr));
 VAR_2 = FUNC_4();

 FUNC_2(FUNC_8(&VAR_6, VAR_2));
 FUNC_2(FUNC_6(VAR_3, VAR_2, &VAR_6, 0, "file", FUNC_0(VAR_4), VAR_4));

 FUNC_1(VAR_3[0], "1");
 FUNC_1(VAR_3[1], "2");

 FUNC_2(FUNC_14("system/gitattributes"));
 FUNC_2(FUNC_13("system"));
 FUNC_9(&VAR_5);
 FUNC_7(&VAR_6);
}
