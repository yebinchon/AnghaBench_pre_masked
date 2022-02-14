
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ redisContext ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int*,int*) ;

int FUNC_2(redisContext *VAR_6) {
    int VAR_7 = 0;
    socklen_t VAR_8 = sizeof(VAR_7);

    if (FUNC_1(VAR_6->fd, VAR_3, VAR_4, &VAR_7, &VAR_8) == -1) {
        FUNC_0(VAR_6,VAR_1,"getsockopt(SO_ERROR)");
        return VAR_0;
    }

    if (VAR_7) {
        VAR_5 = VAR_7;
        FUNC_0(VAR_6,VAR_1,((void*)0));
        return VAR_0;
    }

    return VAR_2;
}
