
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int err; char const* errstr; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (char*) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;

__attribute__((used)) static const char *FUNC_1(const redisAsyncContext *VAR_5)
{
    switch (VAR_5->err) {
    case 128:
        return ((void*)0);
    case 132:

        if (VAR_1 == VAR_0) {
            return VAR_2;
        } else {
            return VAR_3;
        }
    case 133:
        return VAR_3;
    case 129:
        return VAR_4;
    case 131:
    case 130:
        return VAR_5->errstr;
    default:
        FUNC_0("FIXME");
    }
}
