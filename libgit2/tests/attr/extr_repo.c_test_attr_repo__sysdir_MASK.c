
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (char const**,int ,int ,char*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

void FUNC_12(void)
{
 git_buf VAR_3 = VAR_0;
 const char *VAR_4;

 FUNC_1(FUNC_9("system", 0777));
 FUNC_2("system/gitattributes", "file merge=foo");
 FUNC_1(FUNC_7(&VAR_3, FUNC_4(), "system"));
 FUNC_1(FUNC_8(VAR_1, VAR_3.ptr));
 VAR_2 = FUNC_3();

 FUNC_1(FUNC_5(&VAR_4, VAR_2, 0, "file", "merge"));
 FUNC_0(VAR_4, "foo");

 FUNC_1(FUNC_11("system/gitattributes"));
 FUNC_1(FUNC_10("system"));
 FUNC_6(&VAR_3);
}
