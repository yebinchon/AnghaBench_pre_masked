
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static int FUNC_3(redisContext *VAR_5, int VAR_6) {
    int VAR_7;
    if ((VAR_7 = FUNC_2(VAR_6, VAR_4, 0)) == -1) {
        FUNC_0(VAR_5,VAR_2,((void*)0));
        return VAR_1;
    }
    VAR_5->fd = VAR_7;
    if (VAR_6 == VAR_0) {
        if (FUNC_1(VAR_5) == VAR_1) {
            return VAR_1;
        }
    }
    return VAR_3;
}
