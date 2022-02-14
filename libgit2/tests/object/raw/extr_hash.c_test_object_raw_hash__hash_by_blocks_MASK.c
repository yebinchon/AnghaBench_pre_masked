
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_hash_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_hash_ctx VAR_4;
 git_oid VAR_5, VAR_6;

 FUNC_1(FUNC_3(&VAR_4));


 FUNC_1(FUNC_6(&VAR_4, VAR_3, FUNC_9(VAR_3)));
 FUNC_1(FUNC_4(&VAR_6, &VAR_4));
 FUNC_1(FUNC_8(&VAR_5, VAR_2));
 FUNC_0(FUNC_7(&VAR_5, &VAR_6) == 0);


 FUNC_1(FUNC_5(&VAR_4));
 FUNC_1(FUNC_6(&VAR_4, VAR_1, FUNC_9(VAR_1)));
 FUNC_1(FUNC_4(&VAR_6, &VAR_4));
 FUNC_1(FUNC_8(&VAR_5, VAR_0));
 FUNC_0(FUNC_7(&VAR_5, &VAR_6) == 0);

 FUNC_2(&VAR_4);
}
