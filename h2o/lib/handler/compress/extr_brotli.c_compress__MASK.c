
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int size; TYPE_3__* entries; } ;
struct st_brotli_context_t {TYPE_2__ bufs; int state; } ;
struct TYPE_8__ {size_t len; scalar_t__ raw; TYPE_1__* callbacks; } ;
typedef TYPE_3__ h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_compress_context_t ;
struct TYPE_6__ {scalar_t__ flatten; } ;
typedef int BrotliEncoderOperation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct st_brotli_context_t*,int ,int const**,size_t*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct st_brotli_context_t*,int) ;

__attribute__((used)) static h2o_send_state_t FUNC_5(h2o_compress_context_t *VAR_4, h2o_sendvec_t *VAR_5, size_t VAR_6, h2o_send_state_t VAR_7,
                                  h2o_sendvec_t **VAR_8, size_t *VAR_9)
{
    struct st_brotli_context_t *VAR_10 = (void *)VAR_4;
    BrotliEncoderOperation VAR_11 = FUNC_3(VAR_7) ? VAR_1 : VAR_0;
    const uint8_t *VAR_12;
    size_t VAR_13, VAR_14;

    FUNC_4(VAR_10, 1);
    VAR_10->bufs.entries[0].len = 0;


    if (VAR_6 != 0) {
        for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {
            FUNC_1(VAR_5[VAR_13].callbacks->flatten == VAR_3);
            VAR_12 = (void *)VAR_5[VAR_13].raw;
            VAR_14 = VAR_5[VAR_13].len;
            BrotliEncoderOperation VAR_15 = VAR_13 + 1 == VAR_6 ? VAR_11 : VAR_2;
            while (VAR_14 != 0)
                FUNC_2(VAR_10, VAR_15, &VAR_12, &VAR_14);
        }
    } else {
        VAR_12 = ((void*)0);
        VAR_14 = 0;
        FUNC_2(VAR_10, VAR_11, &VAR_12, &VAR_14);
    }


    while (FUNC_0(VAR_10->state)) {
        VAR_12 = ((void*)0);
        VAR_14 = 0;
        FUNC_2(VAR_10, VAR_11, &VAR_12, &VAR_14);
    }

    *VAR_8 = VAR_10->bufs.entries;
    *VAR_9 = VAR_10->bufs.size - (VAR_10->bufs.entries[VAR_10->bufs.size - 1].len == 0);

    return VAR_7;
}
