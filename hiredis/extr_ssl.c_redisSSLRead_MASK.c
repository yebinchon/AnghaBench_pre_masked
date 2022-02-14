
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ssl; } ;
typedef TYPE_1__ redisSSLContext ;
struct TYPE_7__ {int flags; TYPE_1__* privdata; } ;
typedef TYPE_2__ redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(redisContext *VAR_6, char *VAR_7, size_t VAR_8) {
    redisSSLContext *VAR_9 = VAR_6->privdata;

    int VAR_10 = FUNC_1(VAR_9->ssl, VAR_7, VAR_8);
    if (VAR_10 > 0) {
        return VAR_10;
    } else if (VAR_10 == 0) {
        FUNC_2(VAR_6, VAR_3, "Server closed the connection");
        return -1;
    } else {
        int VAR_11 = FUNC_0(VAR_9->ssl, VAR_10);
        if (VAR_6->flags & VAR_2) {






            if (VAR_5 == VAR_1) {
                return 0;
            } else {
                const char *VAR_12 = ((void*)0);
                if (VAR_5 == VAR_0) {
                    VAR_12 = "Resource temporarily unavailable";
                }
                FUNC_2(VAR_6, VAR_4, VAR_12);
                return -1;
            }
        }




        if (FUNC_3(VAR_9, VAR_11)) {
            return 0;
        } else {
            FUNC_2(VAR_6, VAR_4, ((void*)0));
            return -1;
        }
    }
}
