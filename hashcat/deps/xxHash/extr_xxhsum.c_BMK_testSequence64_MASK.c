
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XXH64_state_t ;
typedef int U64 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void FUNC_5(void* VAR_0, size_t VAR_1, U64 VAR_2, U64 VAR_3)
{
    XXH64_state_t VAR_4;
    U64 VAR_5;
    size_t VAR_6;

    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_0(VAR_5, VAR_3);

    FUNC_3(&VAR_4, VAR_2);
    FUNC_4(&VAR_4, VAR_0, VAR_1);
    VAR_5 = FUNC_2(&VAR_4);
    FUNC_0(VAR_5, VAR_3);

    FUNC_3(&VAR_4, VAR_2);
    for (VAR_6=0; VAR_6<VAR_1; VAR_6++)
        FUNC_4(&VAR_4, ((char*)VAR_0)+VAR_6, 1);
    VAR_5 = FUNC_2(&VAR_4);
    FUNC_0(VAR_5, VAR_3);
}
