
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* now; } ;
typedef TYPE_1__ quicly_context_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ (* cb ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(quicly_context_t *VAR_1)
{
    int64_t VAR_2 = VAR_1->now->cb(VAR_1->now);

    if (VAR_0 < VAR_2)
        VAR_0 = VAR_2;
}
