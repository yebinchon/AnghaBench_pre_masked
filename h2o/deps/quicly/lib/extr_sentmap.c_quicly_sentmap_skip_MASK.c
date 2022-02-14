
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p; } ;
typedef TYPE_2__ quicly_sentmap_iter_t ;
struct TYPE_5__ {scalar_t__ acked; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(quicly_sentmap_iter_t *VAR_1)
{
    do {
        FUNC_0(VAR_1);
    } while (VAR_1->p->acked != VAR_0);
}
