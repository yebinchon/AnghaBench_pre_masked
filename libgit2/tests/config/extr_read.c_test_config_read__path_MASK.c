
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_13__ {struct TYPE_13__* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,char*) ;
 int FUNC_8 (int **,char*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,char*,int *) ;
 int FUNC_12 (char*,int) ;

void FUNC_13(void)
{
 git_config *VAR_4;
 git_buf VAR_5 = VAR_0;
 git_buf VAR_6 = VAR_0;
 git_buf VAR_7 = VAR_0;
 git_buf VAR_8 = VAR_0;

 FUNC_3(FUNC_12("fakehome", 0777));
 FUNC_3(FUNC_11(&VAR_7, "fakehome", ((void*)0)));
 FUNC_3(FUNC_9(VAR_2, VAR_1, &VAR_6));
 FUNC_3(FUNC_9(VAR_3, VAR_1, VAR_7.ptr));
 FUNC_2("./testconfig", "[some]\n path = ~/somefile");
 FUNC_3(FUNC_10(&VAR_8, "somefile", VAR_7.ptr, ((void*)0)));

 FUNC_3(FUNC_8(&VAR_4, "./testconfig"));
 FUNC_3(FUNC_7(&VAR_5, VAR_4, "some.path"));
 FUNC_0(VAR_8.ptr, VAR_5.ptr);
 FUNC_4(&VAR_5);

 FUNC_2("./testconfig", "[some]\n path = ~/");
 FUNC_3(FUNC_10(&VAR_8, "", VAR_7.ptr, ((void*)0)));

 FUNC_3(FUNC_7(&VAR_5, VAR_4, "some.path"));
 FUNC_0(VAR_8.ptr, VAR_5.ptr);
 FUNC_4(&VAR_5);

 FUNC_2("./testconfig", "[some]\n path = ~");
 FUNC_3(FUNC_5(&VAR_8, VAR_7.ptr));

 FUNC_3(FUNC_7(&VAR_5, VAR_4, "some.path"));
 FUNC_0(VAR_8.ptr, VAR_5.ptr);
 FUNC_4(&VAR_5);

 FUNC_2("./testconfig", "[some]\n path = ~user/foo");
 FUNC_1(FUNC_7(&VAR_5, VAR_4, "some.path"));

 FUNC_3(FUNC_9(VAR_3, VAR_1, VAR_6.ptr));
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
 FUNC_4(&VAR_8);
 FUNC_6(VAR_4);
}
