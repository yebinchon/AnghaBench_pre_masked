
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* state; int* buffer; } ;
typedef TYPE_1__ _picohash_sha1_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline void FUNC_1(_picohash_sha1_ctx_t *VAR_4)
{
    uint8_t VAR_5;
    uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_6 = VAR_4->state[0];
    VAR_7 = VAR_4->state[1];
    VAR_8 = VAR_4->state[2];
    VAR_9 = VAR_4->state[3];
    VAR_10 = VAR_4->state[4];
    for (VAR_5 = 0; VAR_5 < 80; VAR_5++) {
        if (VAR_5 >= 16) {
            VAR_11 = VAR_4->buffer[(VAR_5 + 13) & 15] ^ VAR_4->buffer[(VAR_5 + 8) & 15] ^ VAR_4->buffer[(VAR_5 + 2) & 15] ^ VAR_4->buffer[VAR_5 & 15];
            VAR_4->buffer[VAR_5 & 15] = FUNC_0(VAR_11, 1);
        }
        if (VAR_5 < 20) {
            VAR_11 = (VAR_9 ^ (VAR_7 & (VAR_8 ^ VAR_9))) + VAR_0;
        } else if (VAR_5 < 40) {
            VAR_11 = (VAR_7 ^ VAR_8 ^ VAR_9) + VAR_1;
        } else if (VAR_5 < 60) {
            VAR_11 = ((VAR_7 & VAR_8) | (VAR_9 & (VAR_7 | VAR_8))) + VAR_2;
        } else {
            VAR_11 = (VAR_7 ^ VAR_8 ^ VAR_9) + VAR_3;
        }
        VAR_11 += FUNC_0(VAR_6, 5) + VAR_10 + VAR_4->buffer[VAR_5 & 15];
        VAR_10 = VAR_9;
        VAR_9 = VAR_8;
        VAR_8 = FUNC_0(VAR_7, 30);
        VAR_7 = VAR_6;
        VAR_6 = VAR_11;
    }
    VAR_4->state[0] += VAR_6;
    VAR_4->state[1] += VAR_7;
    VAR_4->state[2] += VAR_8;
    VAR_4->state[3] += VAR_9;
    VAR_4->state[4] += VAR_10;
}
