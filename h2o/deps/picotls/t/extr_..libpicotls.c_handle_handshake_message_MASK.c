
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_36__ {int state; TYPE_1__* ctx; } ;
typedef TYPE_2__ ptls_t ;
typedef int ptls_message_emitter_t ;
struct TYPE_37__ {int* base; int len; } ;
typedef TYPE_3__ ptls_iovec_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_35__ {int omit_end_of_early_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;

 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;


 int const VAR_9 ;
 int FUNC_0 (int ,TYPE_2__*,int,int*,int,int) ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__,int *) ;
 int FUNC_7 (TYPE_2__*,int *,TYPE_3__) ;
 int FUNC_8 (TYPE_2__*,int *,TYPE_3__,int *) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__) ;
 int FUNC_10 (TYPE_2__*,int *,TYPE_3__) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__) ;
 int FUNC_14 (TYPE_2__*,TYPE_3__) ;
 int FUNC_15 (TYPE_2__*,int *,TYPE_3__,int *) ;

__attribute__((used)) static int FUNC_16(ptls_t *VAR_11, ptls_message_emitter_t *VAR_12, ptls_iovec_t VAR_13, int VAR_14,
                                    ptls_handshake_properties_t *VAR_15)
{
    uint8_t VAR_16 = VAR_13.base[0];
    int VAR_17;

    switch (VAR_11->state) {
    case 136:
    case 137:
        if (VAR_16 == VAR_9 && VAR_14) {
            VAR_17 = FUNC_8(VAR_11, VAR_12, VAR_13, VAR_15);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 139:
        if (VAR_16 == VAR_6) {
            VAR_17 = FUNC_6(VAR_11, VAR_13, VAR_15);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 141:
        if (VAR_16 == VAR_3) {
            VAR_17 = FUNC_3(VAR_11, VAR_13, VAR_15);
            break;
        }

    case 142:
        switch (VAR_16) {
        case 146:
            VAR_17 = FUNC_2(VAR_11, VAR_13);
            break;
        case 145:
            VAR_17 = FUNC_5(VAR_11, VAR_13);
            break;
        default:
            VAR_17 = VAR_1;
            break;
        }
        break;
    case 140:
        if (VAR_16 == VAR_4) {
            VAR_17 = FUNC_4(VAR_11, VAR_13);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 138:
        if (VAR_16 == VAR_8 && VAR_14) {
            VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_13);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 132:
    case 129:
        if (VAR_16 == VAR_5 && VAR_14) {
            VAR_17 = FUNC_15(VAR_11, VAR_12, VAR_13, VAR_15);
        } else {
            VAR_17 = VAR_0;
        }
        break;
    case 134:
        if (VAR_16 == 146) {
            VAR_17 = FUNC_11(VAR_11, VAR_13);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 133:
        if (VAR_16 == VAR_4) {
            VAR_17 = FUNC_12(VAR_11, VAR_13);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 131:
        FUNC_1(!VAR_11->ctx->omit_end_of_early_data);
        if (VAR_16 == VAR_7) {
            VAR_17 = FUNC_13(VAR_11, VAR_13);
        } else {
            VAR_17 = VAR_1;
        }
        break;
    case 130:
        if (VAR_16 == VAR_8 && VAR_14) {
            VAR_17 = FUNC_14(VAR_11, VAR_13);
        } else {
            VAR_17 = VAR_0;
        }
        break;
    case 135:
        switch (VAR_16) {
        case 143:
            VAR_17 = FUNC_9(VAR_11, VAR_13);
            break;
        case 144:
            VAR_17 = FUNC_10(VAR_11, VAR_12, VAR_13);
            break;
        default:
            VAR_17 = VAR_1;
            break;
        }
        break;
    case 128:
        switch (VAR_16) {
        case 144:
            VAR_17 = FUNC_10(VAR_11, VAR_12, VAR_13);
            break;
        default:
            VAR_17 = VAR_1;
            break;
        }
        break;
    default:
        FUNC_1(!"unexpected state");
        break;
    }

    FUNC_0(VAR_10, VAR_11, VAR_13.base[0], VAR_13.base + VAR_2,
               VAR_13.len - VAR_2, VAR_17);

    return VAR_17;
}
