
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int h2o_pathconf_t ;
struct TYPE_16__ {size_t size; int * entries; } ;
struct TYPE_21__ {int fallback_path; TYPE_2__ paths; } ;
typedef TYPE_7__ h2o_hostconf_t ;
struct TYPE_15__ {int global_socketpool; } ;
struct TYPE_22__ {TYPE_7__** hosts; TYPE_1__ proxy; } ;
typedef TYPE_8__ h2o_globalconf_t ;
struct TYPE_20__ {int * value; } ;
struct TYPE_19__ {int hostinfo_getaddr; } ;
struct TYPE_18__ {size_t size; TYPE_10__* entries; } ;
struct TYPE_17__ {TYPE_10__* entries; } ;
struct TYPE_23__ {TYPE_6__ _timestamp_cache; int queue; TYPE_5__ receivers; TYPE_4__ storage; int * filecache; TYPE_10__* _module_configs; TYPE_3__ _pathconfs_inited; int loop; TYPE_8__* globalconf; } ;
typedef TYPE_9__ h2o_context_t ;
struct TYPE_14__ {int data; int (* dispose ) (int ) ;} ;
typedef TYPE_10__ h2o_context_storage_item_t ;


 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_9__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(h2o_context_t *VAR_0)
{
    h2o_globalconf_t *VAR_1 = VAR_0->globalconf;
    size_t VAR_2, VAR_3;

    FUNC_6(&VAR_0->globalconf->proxy.global_socketpool, VAR_0->loop);

    for (VAR_2 = 0; VAR_1->hosts[VAR_2] != ((void*)0); ++VAR_2) {
        h2o_hostconf_t *VAR_4 = VAR_1->hosts[VAR_2];
        for (VAR_3 = 0; VAR_3 != VAR_4->paths.size; ++VAR_3) {
            h2o_pathconf_t *VAR_5 = VAR_4->paths.entries + VAR_3;
            FUNC_1(VAR_0, VAR_5);
        }
        FUNC_1(VAR_0, &VAR_4->fallback_path);
    }
    FUNC_0(VAR_0->_pathconfs_inited.entries);
    FUNC_0(VAR_0->_module_configs);


    FUNC_2(VAR_0->filecache);
    VAR_0->filecache = ((void*)0);


    for (VAR_2 = 0; VAR_2 != VAR_0->storage.size; ++VAR_2) {
        h2o_context_storage_item_t *VAR_6 = VAR_0->storage.entries + VAR_2;
        if (VAR_6->dispose != ((void*)0)) {
            VAR_6->dispose(VAR_6->data);
        }
    }
    FUNC_0(VAR_0->storage.entries);


    FUNC_5(VAR_0->queue, &VAR_0->receivers.hostinfo_getaddr);
    FUNC_4(VAR_0->queue);

    if (VAR_0->_timestamp_cache.value != ((void*)0))
        FUNC_3(VAR_0->_timestamp_cache.value);
}
