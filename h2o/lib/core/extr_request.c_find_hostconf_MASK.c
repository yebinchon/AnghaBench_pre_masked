
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int len; int base; } ;
typedef TYPE_3__ h2o_iovec_t ;
struct TYPE_9__ {char* base; int len; } ;
struct TYPE_10__ {int port; TYPE_1__ host; } ;
struct TYPE_12__ {TYPE_2__ authority; } ;
typedef TYPE_4__ h2o_hostconf_t ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,char*,size_t) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (int ,int,TYPE_3__*,int*) ;
 scalar_t__ FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static h2o_hostconf_t *FUNC_6(h2o_hostconf_t **VAR_0, h2o_iovec_t VAR_1, uint16_t VAR_2)
{
    h2o_iovec_t VAR_3;
    uint16_t VAR_4;
    char *VAR_5;


    if (VAR_1.len >= 65536)
        return ((void*)0);


    if (FUNC_3(VAR_1.base, VAR_1.len, &VAR_3, &VAR_4) == ((void*)0))
        return ((void*)0);
    if (VAR_4 == 65535)
        VAR_4 = VAR_2;


    VAR_5 = FUNC_0(VAR_3.len);
    FUNC_5(VAR_5, VAR_3.base, VAR_3.len);
    FUNC_2(VAR_5, VAR_3.len);

    do {
        h2o_hostconf_t *VAR_6 = *VAR_0;
        if (VAR_6->authority.port == VAR_4 || (VAR_6->authority.port == 65535 && VAR_4 == VAR_2)) {
            if (VAR_6->authority.host.base[0] == '*') {

                size_t VAR_7 = VAR_6->authority.host.len - 1;
                if (VAR_7 < VAR_3.len &&
                    FUNC_4(VAR_6->authority.host.base + 1, VAR_5 + VAR_3.len - VAR_7, VAR_7) == 0)
                    return VAR_6;
            } else {

                if (FUNC_1(VAR_6->authority.host.base, VAR_6->authority.host.len, VAR_5, VAR_3.len))
                    return VAR_6;
            }
        }
    } while (*++VAR_0 != ((void*)0));

    return ((void*)0);
}
