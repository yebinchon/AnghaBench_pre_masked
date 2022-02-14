
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {char* scheme; char* inner_scheme; scalar_t__ app_ctx_intptr; int * app_ctx; } ;
typedef TYPE_2__ Context ;
typedef int AVDictionary ;
typedef int AVApplicationContext ;


 int FUNC_0 (TYPE_1__*,char const*,int,int **) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, const char *VAR_1, int VAR_2, AVDictionary **VAR_3)
{
    Context *VAR_4 = VAR_0->priv_data;
    int VAR_5 = 0;

    VAR_4->app_ctx = (AVApplicationContext *)(intptr_t)VAR_4->app_ctx_intptr;
    VAR_4->scheme = "ijktcphook:";
    VAR_4->inner_scheme = "tcp:";
    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_5)
        goto fail;

    VAR_5 = FUNC_1(VAR_0, ((void*)0));
    if (VAR_5)
        goto fail;

fail:
    return VAR_5;
}
