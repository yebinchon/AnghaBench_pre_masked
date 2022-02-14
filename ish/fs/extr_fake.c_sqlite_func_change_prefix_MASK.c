
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,void const*,size_t) ;
 int VAR_0 ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int *,char*,size_t,int ) ;
 void* FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3) {
    FUNC_0(VAR_2 == 3);
    const void *VAR_4 = FUNC_4(VAR_3[0]);
    size_t VAR_5 = FUNC_5(VAR_3[0]);
    size_t VAR_6 = FUNC_6(VAR_3[1]);
    const void *VAR_7 = FUNC_4(VAR_3[2]);
    size_t VAR_8 = FUNC_5(VAR_3[2]);
    size_t VAR_9 = VAR_5 - VAR_6 + VAR_8;
    char *VAR_10 = FUNC_2(VAR_9);
    FUNC_1(VAR_10, VAR_7, VAR_8);
    FUNC_1(VAR_10 + VAR_8, VAR_4 + VAR_6, VAR_5 - VAR_6);
    FUNC_3(VAR_1, VAR_10, VAR_9, VAR_0);
}
