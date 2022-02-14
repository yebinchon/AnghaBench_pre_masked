
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* cb; } ;
typedef TYPE_3__ quicly_sendbuf_vec_t ;
struct TYPE_9__ {size_t size; TYPE_3__* entries; } ;
struct TYPE_11__ {TYPE_2__ vecs; } ;
typedef TYPE_4__ quicly_sendbuf_t ;
struct TYPE_8__ {int (* discard_vec ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(quicly_sendbuf_t *VAR_0)
{
    size_t VAR_1;

    for (VAR_1 = 0; VAR_1 != VAR_0->vecs.size; ++VAR_1) {
        quicly_sendbuf_vec_t *VAR_2 = VAR_0->vecs.entries + VAR_1;
        if (VAR_2->cb->discard_vec != ((void*)0))
            VAR_2->cb->discard_vec(VAR_2);
    }
    FUNC_0(VAR_0->vecs.entries);
}
