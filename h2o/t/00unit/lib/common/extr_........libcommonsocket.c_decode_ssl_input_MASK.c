
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_19__ {int off; int base; scalar_t__ is_allocated; } ;
typedef TYPE_4__ ptls_buffer_t ;
struct TYPE_20__ {TYPE_11__* input; TYPE_3__* ssl; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_21__ {scalar_t__ len; int * base; } ;
typedef TYPE_6__ h2o_iovec_t ;
struct TYPE_17__ {TYPE_12__* encrypted; } ;
struct TYPE_16__ {int * cb; } ;
struct TYPE_18__ {int* did_write_in_read; int ossl; TYPE_2__ input; int * ptls; TYPE_1__ handshake; } ;
struct TYPE_15__ {scalar_t__ size; char* bytes; } ;
struct TYPE_14__ {int size; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_12__**,int) ;
 TYPE_6__ FUNC_6 (TYPE_11__**,int) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int *,scalar_t__) ;
 int FUNC_10 (int *,TYPE_4__*,char const*,size_t*) ;

const char *FUNC_11(h2o_socket_t *VAR_4)
{
    FUNC_4(VAR_4->ssl != ((void*)0));
    FUNC_4(VAR_4->ssl->handshake.cb == ((void*)0));

    if (VAR_4->ssl->ptls != ((void*)0)) {
        if (VAR_4->ssl->input.encrypted->size != 0) {
            const char *VAR_5 = VAR_4->ssl->input.encrypted->bytes, *VAR_6 = VAR_5 + VAR_4->ssl->input.encrypted->size;
            h2o_iovec_t VAR_7;
            ptls_buffer_t VAR_8;
            int VAR_9;
            if ((VAR_7 = FUNC_6(&VAR_4->input, VAR_4->ssl->input.encrypted->size)).base == ((void*)0))
                return VAR_2;
            FUNC_9(&VAR_8, VAR_7.base, VAR_7.len);
            do {
                size_t VAR_10 = VAR_6 - VAR_5;
                if ((VAR_9 = FUNC_10(VAR_4->ssl->ptls, &VAR_8, VAR_5, &VAR_10)) != 0)
                    break;
                VAR_5 += VAR_10;
            } while (VAR_5 != VAR_6);
            FUNC_5(&VAR_4->ssl->input.encrypted, VAR_4->ssl->input.encrypted->size - (VAR_6 - VAR_5));
            if (VAR_8.is_allocated) {
                if ((VAR_7 = FUNC_6(&VAR_4->input, VAR_8.off)).base == ((void*)0))
                    return VAR_2;
                FUNC_7(VAR_7.base, VAR_8.base, VAR_8.off);
                VAR_4->input->size += VAR_8.off;
                FUNC_8(&VAR_8);
            } else {
                VAR_4->input->size += VAR_8.off;
            }
            if (!(VAR_9 == 0 || VAR_9 == VAR_0))
                return VAR_3;
        }
        return ((void*)0);
    }

    while (VAR_4->ssl->input.encrypted->size != 0 || FUNC_2(VAR_4->ssl->ossl)) {
        int VAR_11;
        h2o_iovec_t VAR_12 = FUNC_6(&VAR_4->input, 4096);
        if (VAR_12.base == ((void*)0))
            return VAR_2;
        {
            int VAR_13 = 0;
            VAR_4->ssl->did_write_in_read = &VAR_13;
            FUNC_0();
            VAR_11 = FUNC_3(VAR_4->ssl->ossl, VAR_12.base, (int)VAR_12.len);
            VAR_4->ssl->did_write_in_read = ((void*)0);
            if (VAR_13)
                return "ssl renegotiation not supported";
        }
        if (VAR_11 == -1) {
            if (FUNC_1(VAR_4->ssl->ossl, VAR_11) != VAR_1) {
                return VAR_3;
            }
            break;
        } else if (VAR_11 == 0) {
            break;
        } else {
            VAR_4->input->size += VAR_11;
        }
    }

    return 0;
}
