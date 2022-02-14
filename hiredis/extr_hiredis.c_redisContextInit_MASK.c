
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int redisOptions ;
struct TYPE_5__ {int * reader; int * obuf; int fd; int * funcs; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;

__attribute__((used)) static redisContext *FUNC_4(const redisOptions *VAR_2) {
    redisContext *VAR_3;

    VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_3->funcs = &VAR_1;
    VAR_3->obuf = FUNC_3();
    VAR_3->reader = FUNC_2();
    VAR_3->fd = VAR_0;

    if (VAR_3->obuf == ((void*)0) || VAR_3->reader == ((void*)0)) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }
    (void)VAR_2;
    return VAR_3;
}
