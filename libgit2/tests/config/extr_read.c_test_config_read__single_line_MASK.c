
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,char*) ;
 int FUNC_8 (int **,char*) ;

void FUNC_9(void)
{
 git_buf VAR_2 = VAR_0;
 git_config *VAR_3;

 FUNC_3(&VAR_1, ((void*)0));
 FUNC_1("./testconfig", "[some] var = value\n[some \"OtheR\"] var = value");
 FUNC_2(FUNC_8(&VAR_3, "./testconfig"));
 FUNC_2(FUNC_7(&VAR_2, VAR_3, "some.var"));
 FUNC_0(VAR_2.ptr, "value");

 FUNC_4(&VAR_2);
 FUNC_2(FUNC_7(&VAR_2, VAR_3, "some.OtheR.var"));
 FUNC_0(VAR_2.ptr, "value");

 FUNC_6(VAR_3);
 FUNC_1("./testconfig", "[some] var = value\n[some \"OtheR\"]var = value");
 FUNC_2(FUNC_8(&VAR_3, "./testconfig"));
 FUNC_4(&VAR_2);
 FUNC_2(FUNC_7(&VAR_2, VAR_3, "some.var"));
 FUNC_0(VAR_2.ptr, "value");

 FUNC_4(&VAR_2);
 FUNC_2(FUNC_7(&VAR_2, VAR_3, "some.OtheR.var"));
 FUNC_0(VAR_2.ptr, "value");

 FUNC_6(VAR_3);
 FUNC_5(&VAR_2);
}
