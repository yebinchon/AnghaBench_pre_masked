
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_29__ ;
typedef struct TYPE_33__ TYPE_24__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int ptls_t ;
typedef int ptls_context_t ;
struct TYPE_42__ {scalar_t__ off; int base; } ;
typedef TYPE_9__ ptls_buffer_t ;
struct TYPE_37__ {int * write; } ;
struct TYPE_30__ {unsigned int _skip_tracing; TYPE_29__* ssl; TYPE_4__ _cb; } ;
typedef TYPE_10__ h2o_socket_t ;
struct TYPE_31__ {size_t len; int base; int * member_0; } ;
typedef TYPE_11__ h2o_iovec_t ;
typedef int X509 ;
struct TYPE_41__ {TYPE_24__* encrypted; } ;
struct TYPE_36__ {int server_name; } ;
struct TYPE_38__ {int state; } ;
struct TYPE_39__ {TYPE_5__ async_resumption; } ;
struct TYPE_40__ {TYPE_3__ client; TYPE_6__ server; } ;
struct TYPE_32__ {scalar_t__ size; } ;
struct TYPE_35__ {TYPE_1__ bufs; } ;
struct TYPE_34__ {TYPE_8__ input; TYPE_7__ handshake; int * ossl; TYPE_2__ output; int * ptls; int ssl_ctx; } ;
struct TYPE_33__ {size_t size; int bytes; } ;





 int FUNC_0 () ;



 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 long FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 long VAR_1 ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (long) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_29__*) ;
 int FUNC_13 (TYPE_10__*) ;
 int FUNC_14 (TYPE_10__*,void (*) (TYPE_10__*,char const*)) ;
 int FUNC_15 (TYPE_24__**,size_t) ;
 int FUNC_16 (TYPE_24__**,size_t) ;
 int FUNC_17 (char*) ;
 TYPE_11__ FUNC_18 (int ,int) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_19 (TYPE_10__*,void (*) (TYPE_10__*,char const*)) ;
 int FUNC_20 (TYPE_10__*) ;
 int * FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,size_t) ;
 void FUNC_23 (TYPE_10__*,char const*) ;
 void FUNC_24 (TYPE_10__*,char const*) ;
 int FUNC_25 (TYPE_9__*) ;
 int FUNC_26 (TYPE_9__*,char*,int ) ;
 unsigned int VAR_6 ;
 int FUNC_27 (int *) ;
 TYPE_10__** FUNC_28 (int *) ;
 int FUNC_29 (int *,TYPE_9__*,int ,size_t*,int *) ;
 int * FUNC_30 (int *,int) ;
 int FUNC_31 (int ,int *) ;
 int FUNC_32 (TYPE_10__*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_33(h2o_socket_t *VAR_7, const char *VAR_8)
{
    h2o_iovec_t VAR_9 = {((void*)0)};
    int VAR_10 = 0;

    VAR_7->_cb.write = ((void*)0);

    if (VAR_8 != ((void*)0)) {
        goto Complete;
    }

    if (VAR_7->ssl->ossl == ((void*)0)) {

        size_t VAR_11 = VAR_7->ssl->input.encrypted->size;
        ptls_buffer_t VAR_12;
        FUNC_26(&VAR_12, "", 0);

        if (VAR_7->ssl->ptls != ((void*)0)) {

            VAR_10 = FUNC_29(VAR_7->ssl->ptls, &VAR_12, VAR_7->ssl->input.encrypted->bytes, &VAR_11, ((void*)0));
        } else {

            ptls_context_t *VAR_13 = FUNC_21(VAR_7->ssl->ssl_ctx);
            if (VAR_13 != ((void*)0)) {




                ptls_t *VAR_14 = FUNC_30(VAR_13, 1);



                if (VAR_14 == ((void*)0))
                    FUNC_17("no memory");
                *FUNC_28(VAR_14) = VAR_7;
                VAR_10 = FUNC_29(VAR_14, &VAR_12, VAR_7->ssl->input.encrypted->bytes, &VAR_11, ((void*)0));
                if ((VAR_10 == 0 || VAR_10 == 128) && VAR_12.off != 0) {
                    VAR_7->ssl->ptls = VAR_14;
                    VAR_7->ssl->handshake.server.async_resumption.state = 133;
                } else {
                    FUNC_27(VAR_14);
                }
            }
        }

        if (VAR_7->ssl->ptls != ((void*)0)) {

            FUNC_15(&VAR_7->ssl->input.encrypted, VAR_11);
            switch (VAR_10) {
            case 0:
            case 128:
                if (VAR_12.off != 0) {
                    FUNC_20(VAR_7);
                    FUNC_32(VAR_7, VAR_12.base, VAR_12.off);
                    FUNC_14(VAR_7, VAR_10 == 0 ? FUNC_23 : FUNC_33);
                } else {
                    FUNC_19(VAR_7, FUNC_33);
                }
                break;
            default:

                FUNC_23(VAR_7, "picotls handshake error");
                break;
            }
            FUNC_25(&VAR_12);
            return;
        }
        FUNC_25(&VAR_12);


        FUNC_13(VAR_7);
    }

    if (VAR_7->ssl->ossl != ((void*)0) && FUNC_7(VAR_7->ssl->ossl) &&
        VAR_7->ssl->handshake.server.async_resumption.state == 132) {
        if (VAR_7->ssl->input.encrypted->size <= 1024) {

            VAR_9 = FUNC_18(FUNC_10(VAR_7->ssl->input.encrypted->size), VAR_7->ssl->input.encrypted->size);
            FUNC_22(VAR_9.base, VAR_7->ssl->input.encrypted->bytes, VAR_9.len);
        } else {
            VAR_7->ssl->handshake.server.async_resumption.state = 133;
        }
    }

Redo:
    FUNC_0();
    if (FUNC_7(VAR_7->ssl->ossl)) {
        VAR_10 = FUNC_1(VAR_7->ssl->ossl);
        switch (VAR_7->ssl->handshake.server.async_resumption.state) {
        case 133:
            break;
        case 132:

            VAR_7->ssl->handshake.server.async_resumption.state = 133;
            break;
        case 131: {

            FUNC_11(VAR_10 < 0);
            FUNC_3(VAR_7->ssl->ossl);
            FUNC_13(VAR_7);
            FUNC_12(VAR_7->ssl);
            FUNC_15(&VAR_7->ssl->input.encrypted, VAR_7->ssl->input.encrypted->size);
            FUNC_16(&VAR_7->ssl->input.encrypted, VAR_9.len);
            FUNC_22(VAR_7->ssl->input.encrypted->bytes, VAR_9.base, VAR_9.len);
            VAR_7->ssl->input.encrypted->size = VAR_9.len;
            FUNC_20(VAR_7);
            return;
        }
        default:
            FUNC_17("unexpected async resumption state");
            break;
        }
    } else {
        VAR_10 = FUNC_2(VAR_7->ssl->ossl);
    }

    if (VAR_10 == 0 || (VAR_10 < 0 && FUNC_4(VAR_7->ssl->ossl, VAR_10) != VAR_0)) {

        long VAR_15 = FUNC_6(VAR_7->ssl->ossl);
        if (VAR_15 != VAR_1) {
            VAR_8 = FUNC_9(VAR_15);
        } else {
            VAR_8 = VAR_4;


            if (VAR_7->ssl->output.bufs.size != 0) {
                FUNC_20(VAR_7);
                FUNC_14(VAR_7, FUNC_24);
                return;
            }
        }
        goto Complete;
    }

    if (VAR_7->ssl->output.bufs.size != 0) {
        FUNC_20(VAR_7);
        FUNC_14(VAR_7, VAR_10 == 1 ? FUNC_23 : FUNC_33);
    } else {
        if (VAR_10 == 1) {
            if (!FUNC_7(VAR_7->ssl->ossl)) {
                X509 *VAR_16 = FUNC_5(VAR_7->ssl->ossl);
                if (VAR_16 != ((void*)0)) {
                    switch (FUNC_31(VAR_7->ssl->handshake.client.server_name, VAR_16)) {
                    case 130:

                        break;
                    case 129:
                        VAR_8 = VAR_3;
                        break;
                    default:
                        VAR_8 = VAR_2;
                        break;
                    }
                    FUNC_8(VAR_16);
                } else {
                    VAR_8 = VAR_5;
                }
            }
            goto Complete;
        }
        if (VAR_7->ssl->input.encrypted->size != 0)
            goto Redo;
        FUNC_19(VAR_7, FUNC_33);
    }
    return;

Complete:
    FUNC_20(VAR_7);
    FUNC_23(VAR_7, VAR_8);
}
