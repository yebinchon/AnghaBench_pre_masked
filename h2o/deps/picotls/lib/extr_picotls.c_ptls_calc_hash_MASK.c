
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* final ) (TYPE_1__*,void*,int ) ;int (* update ) (TYPE_1__*,void const*,size_t) ;} ;
typedef TYPE_1__ ptls_hash_context_t ;
struct TYPE_8__ {TYPE_1__* (* create ) () ;} ;
typedef TYPE_2__ ptls_hash_algorithm_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,void const*,size_t) ;
 int FUNC_2 (TYPE_1__*,void*,int ) ;

int FUNC_3(ptls_hash_algorithm_t *VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5)
{
    ptls_hash_context_t *VAR_6;

    if ((VAR_6 = VAR_2->create()) == ((void*)0))
        return VAR_0;
    VAR_6->update(VAR_6, VAR_4, VAR_5);
    VAR_6->final(VAR_6, VAR_3, VAR_1);
    return 0;
}
