
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ssl_ctx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 (int ,char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(const char *VAR_4, const char *VAR_5)
{
    FUNC_6();
    FUNC_5();
    FUNC_0();

    VAR_2.ssl_ctx = FUNC_1(FUNC_7());
    FUNC_2(VAR_2.ssl_ctx, VAR_1);


    if (FUNC_4(VAR_2.ssl_ctx, VAR_4) != 1) {
        FUNC_8(VAR_3, "an error occurred while trying to load server certificate file:%s\n", VAR_4);
        return -1;
    }
    if (FUNC_3(VAR_2.ssl_ctx, VAR_5, VAR_0) != 1) {
        FUNC_8(VAR_3, "an error occurred while trying to load private key file:%s\n", VAR_5);
        return -1;
    }

    return 0;
}
