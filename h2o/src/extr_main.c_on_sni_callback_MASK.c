
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listener_ssl_config_t {scalar_t__ ctx; } ;
struct listener_config_t {int dummy; } ;
typedef int SSL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 struct listener_ssl_config_t* FUNC_3 (struct listener_config_t*,char const*,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_2, int *VAR_3, void *VAR_4)
{
    struct listener_config_t *VAR_5 = VAR_4;
    const char *VAR_6 = FUNC_1(VAR_2, VAR_1);

    if (VAR_6 != ((void*)0)) {
        struct listener_ssl_config_t *VAR_7 = FUNC_3(VAR_5, VAR_6, FUNC_4(VAR_6));
        if (VAR_7->ctx != FUNC_0(VAR_2))
            FUNC_2(VAR_2, VAR_7->ctx);
    }

    return VAR_0;
}
