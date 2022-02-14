
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * write; } ;
struct TYPE_11__ {TYPE_3__* ssl; TYPE_1__ _cb; } ;
typedef TYPE_4__ h2o_socket_t ;
typedef int (* h2o_socket_cb ) (TYPE_4__*,char const*) ;
struct TYPE_9__ {int (* cb ) (TYPE_4__*,char const*) ;} ;
struct TYPE_10__ {int record_overhead; TYPE_2__ handshake; int ossl; int * ptls; } ;
typedef int SSL_CIPHER ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(h2o_socket_t *VAR_0, const char *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        if (VAR_0->ssl->ptls != ((void*)0)) {
            VAR_0->ssl->record_overhead = FUNC_3(VAR_0->ssl->ptls);
        } else {
            const SSL_CIPHER *VAR_2 = FUNC_1(VAR_0->ssl->ossl);
            switch (FUNC_0(VAR_2)) {
            case 129:
            case 137:
            case 131:
            case 134:
            case 128:
            case 136:
            case 130:
            case 133:
                VAR_0->ssl->record_overhead = 5 + 8 + 16 ;
                break;

            case 138:
            case 132:
            case 135:
                VAR_0->ssl->record_overhead = 5 + 16 ;
                break;

            default:
                VAR_0->ssl->record_overhead = 32;
                break;
            }
        }
    }

    h2o_socket_cb VAR_3 = VAR_0->ssl->handshake.cb;
    VAR_0->_cb.write = ((void*)0);
    VAR_0->ssl->handshake.cb = ((void*)0);
    if (VAR_1 == ((void*)0))
        FUNC_2(VAR_0);
    VAR_3(VAR_0, VAR_1);
}
