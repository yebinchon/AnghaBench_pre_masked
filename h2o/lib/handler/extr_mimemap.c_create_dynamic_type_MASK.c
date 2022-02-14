
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pathconf; } ;
struct TYPE_6__ {TYPE_3__ dynamic; } ;
struct TYPE_7__ {TYPE_1__ data; int type; } ;
typedef TYPE_2__ h2o_mimemap_type_t ;
typedef int h2o_mimemap_t ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 TYPE_2__* FUNC_1 (int *,int,void (*) (void*)) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static h2o_mimemap_type_t *FUNC_3(h2o_globalconf_t *VAR_2, h2o_mimemap_t *VAR_3)
{
    h2o_mimemap_type_t *VAR_4 = FUNC_1(((void*)0), sizeof(*VAR_4), (void (*)(void *))VAR_1);

    VAR_4->type = VAR_0;
    FUNC_2(&VAR_4->data.dynamic, 0, sizeof(VAR_4->data.dynamic));
    FUNC_0(&VAR_4->data.dynamic.pathconf, VAR_2, ((void*)0), VAR_3);

    return VAR_4;
}
