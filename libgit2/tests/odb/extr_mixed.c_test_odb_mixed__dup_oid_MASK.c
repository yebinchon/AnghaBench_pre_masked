
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int short_hex ;
typedef int git_oid ;
typedef int git_odb_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char const*,int) ;

void FUNC_6(void) {
 const char VAR_2[] = "ce013625030ba8dba906f756967f9e9ca394464a";
 const char VAR_3[] = "ce01362";
 git_oid VAR_4;
 git_odb_object *VAR_5;

 FUNC_0(FUNC_4(&VAR_4, VAR_2));
 FUNC_0(FUNC_3(&VAR_5, VAR_1, &VAR_4, VAR_0));
 FUNC_2(VAR_5);

 FUNC_0(FUNC_1(((void*)0), VAR_1, &VAR_4, VAR_0));

 FUNC_0(FUNC_5(&VAR_4, VAR_3, sizeof(VAR_3) - 1));
 FUNC_0(FUNC_3(&VAR_5, VAR_1, &VAR_4, sizeof(VAR_3) - 1));
 FUNC_2(VAR_5);

 FUNC_0(FUNC_1(((void*)0), VAR_1, &VAR_4, sizeof(VAR_3) - 1));
}
