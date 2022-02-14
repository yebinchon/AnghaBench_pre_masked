
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int quicly_stream_t ;
struct TYPE_9__ {size_t len; TYPE_1__* cb; } ;
typedef TYPE_3__ quicly_sendbuf_vec_t ;
struct TYPE_8__ {size_t size; TYPE_3__* entries; } ;
struct TYPE_10__ {TYPE_2__ vecs; scalar_t__ off_in_first_vec; } ;
typedef TYPE_4__ quicly_sendbuf_t ;
struct TYPE_7__ {int (* flatten_vec ) (TYPE_3__*,void*,size_t,size_t) ;} ;


 int FUNC_0 (TYPE_3__*,void*,size_t,size_t) ;

int FUNC_1(quicly_stream_t *VAR_0, quicly_sendbuf_t *VAR_1, size_t VAR_2, void *VAR_3, size_t *VAR_4, int *VAR_5)
{
    size_t VAR_6, VAR_7 = *VAR_4;
    int VAR_8;

    VAR_2 += VAR_1->off_in_first_vec;
    for (VAR_6 = 0; VAR_7 != 0 && VAR_6 < VAR_1->vecs.size; ++VAR_6) {
        quicly_sendbuf_vec_t *VAR_9 = VAR_1->vecs.entries + VAR_6;
        if (VAR_2 < VAR_9->len) {
            size_t VAR_10 = VAR_9->len - VAR_2;
            int VAR_11 = 0;
            if (VAR_7 < VAR_10) {
                VAR_10 = VAR_7;
                VAR_11 = 1;
            }
            if ((VAR_8 = VAR_9->cb->flatten_vec(VAR_9, VAR_3, VAR_2, VAR_10)) != 0)
                return VAR_8;
            VAR_3 = (uint8_t *)VAR_3 + VAR_10;
            VAR_7 -= VAR_10;
            VAR_2 = 0;
            if (VAR_11)
                break;
        } else {
            VAR_2 -= VAR_9->len;
        }
    }

    if (VAR_7 == 0 && VAR_6 < VAR_1->vecs.size) {
        *VAR_5 = 0;
    } else {
        *VAR_4 = *VAR_4 - VAR_7;
        *VAR_5 = 1;
    }

    return 0;
}
