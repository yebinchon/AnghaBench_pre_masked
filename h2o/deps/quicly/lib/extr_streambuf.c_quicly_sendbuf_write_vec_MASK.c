
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int quicly_stream_t ;
struct TYPE_9__ {scalar_t__ len; } ;
typedef TYPE_2__ quicly_sendbuf_vec_t ;
struct TYPE_8__ {int size; int capacity; TYPE_2__* entries; } ;
struct TYPE_10__ {int bytes_written; TYPE_1__ vecs; } ;
typedef TYPE_3__ quicly_sendbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,size_t) ;

int FUNC_3(quicly_stream_t *VAR_1, quicly_sendbuf_t *VAR_2, quicly_sendbuf_vec_t *VAR_3)
{
    FUNC_0(VAR_2->vecs.size <= VAR_2->vecs.capacity);

    if (VAR_2->vecs.size == VAR_2->vecs.capacity) {
        quicly_sendbuf_vec_t *VAR_4;
        size_t VAR_5 = VAR_2->vecs.capacity == 0 ? 4 : VAR_2->vecs.capacity * 2;
        if ((VAR_4 = FUNC_2(VAR_2->vecs.entries, VAR_5 * sizeof(*VAR_2->vecs.entries))) == ((void*)0))
            return VAR_0;
        VAR_2->vecs.entries = VAR_4;
        VAR_2->vecs.capacity = VAR_5;
    }
    VAR_2->vecs.entries[VAR_2->vecs.size++] = *VAR_3;
    VAR_2->bytes_written += VAR_3->len;

    return FUNC_1(VAR_1, 1);
}
