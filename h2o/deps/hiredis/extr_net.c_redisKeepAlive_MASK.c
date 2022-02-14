
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (int,int ,int ,int*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(redisContext *VAR_11, int VAR_12) {
    int VAR_13 = 1;
    int VAR_14 = VAR_11->fd;

    if (FUNC_1(VAR_14, VAR_4, VAR_5, &VAR_13, sizeof(VAR_13)) == -1){
        FUNC_0(VAR_11,VAR_2,FUNC_2(VAR_10));
        return VAR_1;
    }

    VAR_13 = VAR_12;
    return VAR_3;
}
