
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mime_attr; } ;
struct TYPE_8__ {TYPE_2__ res; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_6__ {scalar_t__ priority; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(h2o_req_t *VAR_1)
{
    if (VAR_1->res.mime_attr == ((void*)0))
        FUNC_0(VAR_1);
    return VAR_1->res.mime_attr->priority == VAR_0;
}
