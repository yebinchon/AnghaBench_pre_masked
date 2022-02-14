
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_specific_file_handler_t {TYPE_3__* mime_type; } ;
typedef int h2o_handler_t ;
typedef int h2o_context_t ;
struct TYPE_4__ {int pathconf; } ;
struct TYPE_5__ {TYPE_1__ dynamic; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(h2o_handler_t *VAR_1, h2o_context_t *VAR_2)
{
    struct st_h2o_specific_file_handler_t *VAR_3 = (void *)VAR_1;

    if (VAR_3->mime_type->type == VAR_0)
        FUNC_0(VAR_2, &VAR_3->mime_type->data.dynamic.pathconf);
}
