
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_pathconf_t ;
struct TYPE_5__ {scalar_t__ size; int * entries; } ;
struct TYPE_4__ {int mimemap; int global; TYPE_2__ paths; } ;
typedef TYPE_1__ h2o_hostconf_t ;


 int FUNC_0 (int *,int ,char const*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,scalar_t__) ;

h2o_pathconf_t *FUNC_2(h2o_hostconf_t *VAR_0, const char *VAR_1, int VAR_2)
{
    h2o_pathconf_t *VAR_3;

    FUNC_1(((void*)0), &VAR_0->paths, VAR_0->paths.size + 1);
    VAR_3 = VAR_0->paths.entries + VAR_0->paths.size++;

    FUNC_0(VAR_3, VAR_0->global, VAR_1, VAR_0->mimemap);

    return VAR_3;
}
