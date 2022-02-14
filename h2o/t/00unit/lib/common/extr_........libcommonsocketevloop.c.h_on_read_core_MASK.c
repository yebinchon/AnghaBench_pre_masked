
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_6__ {int len; int * base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_7__ {int size; } ;
typedef TYPE_2__ h2o_buffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ FUNC_0 (TYPE_2__**,int) ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 int FUNC_1 (int,int *,int) ;

__attribute__((used)) static const char *FUNC_2(int VAR_7, h2o_buffer_t **VAR_8)
{
    int VAR_9 = 0;

    while (1) {
        ssize_t VAR_10;
        h2o_iovec_t VAR_11 = FUNC_0(VAR_8, 4096);
        if (VAR_11.base == ((void*)0)) {

            return VAR_6;
        }
        while ((VAR_10 = FUNC_1(VAR_7, VAR_11.base, VAR_11.len <= VAR_2 / 2 ? VAR_11.len : VAR_2 / 2 + 1)) == -1 && VAR_3 == VAR_1)
            ;
        if (VAR_10 == -1) {
            if (VAR_3 == VAR_0)
                break;
            else
                return VAR_5;
        } else if (VAR_10 == 0) {
            if (!VAR_9)
                return VAR_4;
            break;
        }
        (*VAR_8)->size += VAR_10;
        if (VAR_11.len != VAR_10)
            break;
        VAR_9 = 1;
    }
    return ((void*)0);
}
