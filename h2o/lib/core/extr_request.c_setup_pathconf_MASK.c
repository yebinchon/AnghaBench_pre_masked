
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int len; char* base; } ;
struct TYPE_15__ {TYPE_2__ path_normalized; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_14__ {int len; char* base; } ;
struct TYPE_16__ {TYPE_3__ path; } ;
typedef TYPE_5__ h2o_pathconf_t ;
struct TYPE_12__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_17__ {TYPE_1__ paths; TYPE_5__ fallback_path; } ;
typedef TYPE_6__ h2o_hostconf_t ;


 int FUNC_0 (TYPE_4__*,TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(h2o_req_t *VAR_0, h2o_hostconf_t *VAR_1)
{
    h2o_pathconf_t *VAR_2 = &VAR_1->fallback_path;
    size_t VAR_3;


    for (VAR_3 = 0; VAR_3 != VAR_1->paths.size; ++VAR_3) {
        h2o_pathconf_t *VAR_4 = VAR_1->paths.entries + VAR_3;
        if (VAR_0->path_normalized.len >= VAR_4->path.len &&
            FUNC_1(VAR_0->path_normalized.base, VAR_4->path.base, VAR_4->path.len) == 0 &&
            (VAR_4->path.base[VAR_4->path.len - 1] == '/' || VAR_0->path_normalized.len == VAR_4->path.len ||
             VAR_0->path_normalized.base[VAR_4->path.len] == '/')) {
            VAR_2 = VAR_4;
            break;
        }
    }
    FUNC_0(VAR_0, VAR_1, VAR_2);
}
