
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb ;
struct TYPE_3__ {char* id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(void)
{
 git_oid VAR_2, VAR_3;
 git_odb *VAR_4;

 FUNC_10(&VAR_1);
 FUNC_2(FUNC_6(&VAR_4, "test-objects"));

 FUNC_2(FUNC_7(&VAR_2, VAR_1.id));
 FUNC_0(FUNC_3(VAR_4, &VAR_2));

 FUNC_2(FUNC_8(&VAR_2, "8b137891"));
 FUNC_2(FUNC_4(&VAR_3, VAR_4, &VAR_2, 8));
 FUNC_1(0, FUNC_9(&VAR_3, VAR_1.id));


 FUNC_2(FUNC_7(&VAR_2, "8b137891791fe96927ad78e64b0aad7bded08baa"));
 FUNC_0(!FUNC_3(VAR_4, &VAR_2));

 FUNC_2(FUNC_8(&VAR_2, "8b13789a"));
 FUNC_1(VAR_0, FUNC_4(&VAR_3, VAR_4, &VAR_2, 8));

 FUNC_5(VAR_4);
}
