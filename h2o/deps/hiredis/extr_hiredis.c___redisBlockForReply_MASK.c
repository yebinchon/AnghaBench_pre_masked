
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,void**) ;

__attribute__((used)) static void *FUNC_1(redisContext *VAR_2) {
    void *VAR_3;

    if (VAR_2->flags & VAR_0) {
        if (FUNC_0(VAR_2,&VAR_3) != VAR_1)
            return ((void*)0);
        return VAR_3;
    }
    return ((void*)0);
}
