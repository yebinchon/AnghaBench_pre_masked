
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ssl; int * ssl_ctx; } ;
typedef TYPE_1__ redisSSLContext ;
struct TYPE_7__ {int flags; scalar_t__ err; int fd; TYPE_1__* privdata; int * funcs; } ;
typedef TYPE_2__ redisContext ;
typedef int err ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 () ;
 unsigned long FUNC_1 () ;
 char* FUNC_2 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_2__*,int ,char*) ;
 TYPE_1__* FUNC_9 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (char*,int,char*,char*) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(redisContext *VAR_11, SSL_CTX *VAR_12, SSL *VAR_13) {
    if (VAR_11->privdata) {
        FUNC_8(VAR_11, VAR_3, "redisContext was already associated");
        return VAR_1;
    }
    VAR_11->privdata = FUNC_9(1, sizeof(redisSSLContext));

    VAR_11->funcs = &VAR_10;
    redisSSLContext *VAR_14 = VAR_11->privdata;

    VAR_14->ssl_ctx = VAR_12;
    VAR_14->ssl = VAR_13;

    FUNC_7(VAR_14->ssl, VAR_8);
    FUNC_6(VAR_14->ssl, VAR_11->fd);
    FUNC_5(VAR_14->ssl);

    FUNC_0();
    int VAR_15 = FUNC_3(VAR_14->ssl);
    if (VAR_15 == 1) {
        return VAR_4;
    }

    VAR_15 = FUNC_4(VAR_14->ssl, VAR_15);
    if (((VAR_11->flags & VAR_0) == 0) &&
        (VAR_15 == VAR_6 || VAR_15 == VAR_7)) {
        return VAR_4;
    }

    if (VAR_11->err == 0) {
        char VAR_16[512];
        if (VAR_15 == VAR_5)
            FUNC_10(VAR_16,sizeof(VAR_16)-1,"SSL_connect failed: %s",FUNC_11(VAR_9));
        else {
            unsigned long VAR_17 = FUNC_1();
            FUNC_10(VAR_16,sizeof(VAR_16)-1,"SSL_connect failed: %s",
                    FUNC_2(VAR_17));
        }
        FUNC_8(VAR_11, VAR_2, VAR_16);
    }
    return VAR_1;
}
