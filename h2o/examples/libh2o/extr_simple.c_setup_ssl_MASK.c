
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ssl_ctx; int * libmemcached_receiver; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_10 (int ,char*,char const*) ;
 int FUNC_11 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (char*,int,int ,int,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_16(const char *VAR_8, const char *VAR_9, const char *VAR_10)
{
    FUNC_8();
    FUNC_7();
    FUNC_0();

    VAR_3.ssl_ctx = FUNC_1(FUNC_9());
    FUNC_4(VAR_3.ssl_ctx, VAR_1);

    if (VAR_2) {
        VAR_3.libmemcached_receiver = &VAR_6;
        FUNC_11(FUNC_12("127.0.0.1", 11211, 0, 1, "h2o:ssl-resumption:"),
                                                  86400);
        FUNC_13(VAR_3.ssl_ctx);
    }






    if (FUNC_6(VAR_3.ssl_ctx, VAR_8) != 1) {
        FUNC_10(VAR_7, "an error occurred while trying to load server certificate file:%s\n", VAR_8);
        return -1;
    }
    if (FUNC_5(VAR_3.ssl_ctx, VAR_9, VAR_0) != 1) {
        FUNC_10(VAR_7, "an error occurred while trying to load private key file:%s\n", VAR_9);
        return -1;
    }

    if (FUNC_2(VAR_3.ssl_ctx, VAR_10) != 1) {
        FUNC_10(VAR_7, "ciphers could not be set: %s\n", VAR_10);
        return -1;
    }
    return 0;
}
