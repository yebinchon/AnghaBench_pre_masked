
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int buf ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,int const*,void* (*) (void*),void*) ;

void FUNC_3(pthread_t *VAR_0, const pthread_attr_t *VAR_1, void *(*VAR_2)(void *), void *VAR_3)
{
    int VAR_4;
    if ((VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3)) != 0) {
        char VAR_5[128];
        FUNC_0("pthread_create: %s", FUNC_1(VAR_4, VAR_5, sizeof(VAR_5)));
    }
}
