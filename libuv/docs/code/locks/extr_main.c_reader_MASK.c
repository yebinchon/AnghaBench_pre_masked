
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void *VAR_3)
{
    int VAR_4 = *(int *)VAR_3;
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < 20; VAR_5++) {
        FUNC_2(&VAR_1);
        FUNC_0("Reader %d: acquired lock\n", VAR_4);
        FUNC_0("Reader %d: shared num = %d\n", VAR_4, VAR_2);
        FUNC_3(&VAR_1);
        FUNC_0("Reader %d: released lock\n", VAR_4);
    }
    FUNC_1(&VAR_0);
}
