
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* prot; } ;
struct TYPE_8__ {int* cache_count_bytes; int inner_io_error; TYPE_5__* inner; } ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
struct TYPE_6__ {int (* url_read ) (TYPE_5__*,void*,int) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;


 int FUNC_0 (TYPE_5__*,void*,int) ;

__attribute__((used)) static int FUNC_1(IjkURLContext *VAR_0, void *VAR_1, int VAR_2)
{
    IjkIOCacheContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    VAR_4 = VAR_3->inner->prot->url_read(VAR_3->inner, VAR_1, VAR_2);

    if (VAR_4 > 0)
        *VAR_3->cache_count_bytes += VAR_4;

    VAR_3->inner_io_error = VAR_4 < 0 ? VAR_4 : 0;

    return VAR_4;
}
