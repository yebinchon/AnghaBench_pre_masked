
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
typedef TYPE_1__ redisContext ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(redisContext *VAR_5) {
    int VAR_6 = 1;
    if (FUNC_2(VAR_5->fd, VAR_3, VAR_4, &VAR_6, sizeof(VAR_6)) == -1) {
        FUNC_0(VAR_5,VAR_1,((void*)0));
        FUNC_1(VAR_5);
        return VAR_0;
    }
    return VAR_2;
}
