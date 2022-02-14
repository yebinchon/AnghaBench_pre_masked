
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int ptls_buffer_t ;
struct TYPE_3__ {scalar_t__ status; int nbc; int nbo; int v; } ;
typedef TYPE_1__ ptls_base64_decode_state_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int *,scalar_t__*,int) ;

int FUNC_1(const char *VAR_5, ptls_base64_decode_state_t *VAR_6, ptls_buffer_t *VAR_7)
{
    int VAR_8 = 0;
    uint8_t VAR_9[3];
    size_t VAR_10 = 0;
    int VAR_11;
    signed char VAR_12;


    while (VAR_5[VAR_10] != 0) {
        VAR_11 = VAR_5[VAR_10];

        if (VAR_11 == ' ' || VAR_11 == '\t' || VAR_11 == '\r' || VAR_11 == '\n') {
            VAR_10++;
        } else {
            break;
        }
    }

    while (VAR_5[VAR_10] != 0 && VAR_8 == 0 && VAR_6->status == VAR_2) {
        VAR_11 = VAR_5[VAR_10++];

        VAR_12 = 0 < VAR_11 && VAR_11 < 0x7f ? VAR_4[VAR_11] : -1;
        if (VAR_12 == -1) {
            if (VAR_6->nbc == 2 && VAR_11 == '=' && VAR_5[VAR_10] == '=') {
                VAR_6->nbc = 4;
                VAR_10++;
                VAR_6->nbo = 1;
                VAR_6->v <<= 12;
            } else if (VAR_6->nbc == 3 && VAR_11 == '=') {
                VAR_6->nbc = 4;
                VAR_6->nbo = 2;
                VAR_6->v <<= 6;
            } else {

                for (--VAR_10; VAR_5[VAR_10] != 0; ++VAR_10) {
                    VAR_11 = VAR_5[VAR_10];
                    if (!(VAR_11 == ' ' || VAR_11 == '\t' || VAR_11 == '\r' || VAR_11 == '\n' || VAR_11 == 0x0B || VAR_11 == 0x0C))
                        break;
                }


                if (VAR_5[VAR_10] == 0) {
                    break;
                } else {

                    VAR_6->nbo = 0;
                    VAR_6->status = VAR_1;
                    VAR_8 = VAR_3;
                }
            }
        } else {
            VAR_6->nbc++;
            VAR_6->v <<= 6;
            VAR_6->v |= VAR_12;
        }

        if (VAR_8 == 0 && VAR_6->nbc == 4) {

            for (int VAR_13 = 0; VAR_13 < VAR_6->nbo; VAR_13++) {
                VAR_9[VAR_13] = (uint8_t)(VAR_6->v >> (8 * (2 - VAR_13)));
            }

            VAR_8 = FUNC_0(VAR_7, VAR_9, VAR_6->nbo);

            if (VAR_8 == 0) {

                if (VAR_6->nbo < 3) {

                    while (VAR_5[VAR_10] != 0) {
                        VAR_11 = VAR_5[VAR_10++];

                        if (VAR_11 == ' ' || VAR_11 == '\t' || VAR_11 == '\r' || VAR_11 == '\n' || VAR_11 == 0x0B || VAR_11 == 0x0C) {
                            continue;
                        }
                    }
                    if (VAR_5[VAR_10] == 0) {
                        VAR_6->status = VAR_0;
                    } else {
                        VAR_6->status = VAR_1;
                        VAR_8 = VAR_3;
                    }
                    break;
                } else {
                    VAR_6->v = 0;
                    VAR_6->nbo = 3;
                    VAR_6->nbc = 0;
                }
            }
        }
    }
    return VAR_8;
}
