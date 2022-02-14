
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* prot; } ;
struct TYPE_12__ {int logical_size; TYPE_1__* tree_info; int cache_file_close; TYPE_5__* inner; } ;
struct TYPE_11__ {TYPE_4__* priv_data; } ;
struct TYPE_10__ {int (* url_open2 ) (TYPE_5__*,char const*,int,int **) ;} ;
struct TYPE_9__ {int file_size; } ;
typedef TYPE_3__ IjkURLContext ;
typedef TYPE_4__ IjkIOCacheContext ;
typedef int IjkAVDictionary ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,char const*,int,int **) ;

__attribute__((used)) static int FUNC_3(IjkURLContext *VAR_0, const char *VAR_1, int VAR_2, IjkAVDictionary **VAR_3) {
    int VAR_4 = 0;
    IjkIOCacheContext *VAR_5= VAR_0->priv_data;
    VAR_4 = VAR_5->inner->prot->url_open2(VAR_5->inner, VAR_1, VAR_2, VAR_3);
    if (VAR_4 != 0) {
        return VAR_4;
    } else {
        VAR_5->logical_size = FUNC_1(VAR_0);
        if (VAR_5->tree_info && !VAR_5->cache_file_close) {
            VAR_5->tree_info->file_size = VAR_5->logical_size;
        }
    }

    FUNC_0(VAR_0);
    return VAR_4;
}
