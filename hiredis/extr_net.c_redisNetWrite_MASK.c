
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int obuf; int fd; } ;
typedef TYPE_1__ redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

int FUNC_3(redisContext *VAR_5) {
    int VAR_6 = FUNC_2(VAR_5->fd, VAR_5->obuf, FUNC_1(VAR_5->obuf), 0);
    if (VAR_6 < 0) {
        if ((VAR_4 == VAR_1 && !(VAR_5->flags & VAR_2)) || (VAR_4 == VAR_0)) {

        } else {
            FUNC_0(VAR_5, VAR_3, ((void*)0));
            return -1;
        }
    }
    return VAR_6;
}
