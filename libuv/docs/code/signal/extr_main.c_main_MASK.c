
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_thread_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4()
{
    FUNC_1("PID %d\n", FUNC_0());

    uv_thread_t VAR_2, VAR_3;

    FUNC_2(&VAR_2, VAR_0, 0);
    FUNC_2(&VAR_3, VAR_1, 0);

    FUNC_3(&VAR_2);
    FUNC_3(&VAR_3);
    return 0;
}
