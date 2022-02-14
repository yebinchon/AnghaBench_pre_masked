
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* reader; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_6__ {int errstr; int err; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void**) ;

int FUNC_2(redisContext *VAR_2, void **VAR_3) {
    if (FUNC_1(VAR_2->reader,VAR_3) == VAR_0) {
        FUNC_0(VAR_2,VAR_2->reader->err,VAR_2->reader->errstr);
        return VAR_0;
    }
    return VAR_1;
}
