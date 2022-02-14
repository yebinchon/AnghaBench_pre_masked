
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int wbuf_small ;
typedef int uint8_t ;
struct TYPE_22__ {int off; int base; } ;
typedef TYPE_5__ ptls_buffer_t ;
struct TYPE_18__ {int * write; } ;
struct TYPE_23__ {TYPE_4__* ssl; TYPE_1__ _cb; } ;
typedef TYPE_6__ h2o_socket_t ;
struct TYPE_19__ {scalar_t__ size; } ;
struct TYPE_20__ {TYPE_2__ bufs; } ;
struct TYPE_21__ {int * ossl; TYPE_3__ output; int * ptls; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 void FUNC_3 (TYPE_6__*,char const*) ;
 int FUNC_4 (TYPE_6__*,void (*) (TYPE_6__*,char const*)) ;
 int FUNC_5 (TYPE_6__*,void (*) (TYPE_6__*,char const*)) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int *,int) ;
 int FUNC_9 (int *,TYPE_5__*,int ,int ) ;
 int FUNC_10 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static void FUNC_11(h2o_socket_t *VAR_3, const char *VAR_4)
{
    int VAR_5;

    if (VAR_4 != ((void*)0))
        goto Close;

    if (VAR_3->_cb.write != ((void*)0)) {


        VAR_3->_cb.write = ((void*)0);
        goto Close;
    }

    if (VAR_3->ssl->ptls != ((void*)0)) {
        ptls_buffer_t VAR_6;
        uint8_t VAR_7[32];
        FUNC_8(&VAR_6, VAR_7, sizeof(VAR_7));
        if ((VAR_5 = FUNC_9(VAR_3->ssl->ptls, &VAR_6, VAR_1, VAR_0)) != 0)
            goto Close;
        FUNC_10(VAR_3, VAR_6.base, VAR_6.off);
        FUNC_7(&VAR_6);
        VAR_5 = 1;
    } else if (VAR_3->ssl->ossl != ((void*)0)) {
        FUNC_0();
        if ((VAR_5 = FUNC_2(VAR_3->ssl->ossl)) == -1)
            goto Close;
    } else {
        goto Close;
    }

    if (VAR_3->ssl->output.bufs.size != 0) {
        FUNC_6(VAR_3);
        FUNC_4(VAR_3, VAR_5 == 1 ? FUNC_3 : FUNC_11);
    } else if (VAR_5 == 2 && FUNC_1(VAR_3->ssl->ossl, VAR_5) == VAR_2) {
        FUNC_5(VAR_3, FUNC_11);
    } else {
        goto Close;
    }

    return;
Close:
    FUNC_3(VAR_3, VAR_4);
}
