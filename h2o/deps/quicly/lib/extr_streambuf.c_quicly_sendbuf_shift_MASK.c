
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int quicly_stream_t ;
struct TYPE_12__ {size_t len; TYPE_1__* cb; } ;
typedef TYPE_3__ quicly_sendbuf_vec_t ;
struct TYPE_11__ {size_t size; scalar_t__ capacity; TYPE_3__* entries; } ;
struct TYPE_13__ {size_t off_in_first_vec; TYPE_2__ vecs; } ;
typedef TYPE_4__ quicly_sendbuf_t ;
struct TYPE_10__ {int (* discard_vec ) (TYPE_3__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(quicly_stream_t *VAR_0, quicly_sendbuf_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3;

    for (VAR_3 = 0; VAR_2 != 0; ++VAR_3) {
        FUNC_0(VAR_3 < VAR_1->vecs.size);
        quicly_sendbuf_vec_t *VAR_4 = VAR_1->vecs.entries + VAR_3;
        size_t VAR_5 = VAR_4->len - VAR_1->off_in_first_vec;
        if (VAR_2 < VAR_5) {
            VAR_1->off_in_first_vec += VAR_2;
            break;
        }
        VAR_2 -= VAR_5;
        if (VAR_4->cb->discard_vec != ((void*)0))
            VAR_4->cb->discard_vec(VAR_4);
        VAR_1->off_in_first_vec = 0;
    }
    if (VAR_3 != 0) {
        if (VAR_1->vecs.size != VAR_3) {
            FUNC_2(VAR_1->vecs.entries, VAR_1->vecs.entries + VAR_3, (VAR_1->vecs.size - VAR_3) * sizeof(*VAR_1->vecs.entries));
            VAR_1->vecs.size -= VAR_3;
        } else {
            FUNC_1(VAR_1->vecs.entries);
            VAR_1->vecs.entries = ((void*)0);
            VAR_1->vecs.size = 0;
            VAR_1->vecs.capacity = 0;
        }
    }
    FUNC_3(VAR_0, 0);
}
