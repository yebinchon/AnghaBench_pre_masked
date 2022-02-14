
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,char*) ;
 int FUNC_7 (int **,char*) ;

void FUNC_8(void)
{
 git_buf VAR_2 = VAR_0;
 git_config *VAR_3;

 FUNC_3(&VAR_1, ((void*)0));
 FUNC_1("./testconfig", "[some]\r\n var = value\r\n\r\n");
 FUNC_2(FUNC_7(&VAR_3, "./testconfig"));
 FUNC_2(FUNC_6(&VAR_2, VAR_3, "some.var"));
 FUNC_0(VAR_2.ptr, "value");

 FUNC_5(VAR_3);
 FUNC_4(&VAR_2);
}
