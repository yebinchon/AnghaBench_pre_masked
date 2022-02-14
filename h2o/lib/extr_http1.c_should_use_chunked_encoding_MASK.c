
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int base; } ;
struct TYPE_7__ {TYPE_1__ method; } ;
struct TYPE_8__ {scalar_t__ content_length; int status; } ;
struct TYPE_9__ {int version; TYPE_2__ input; TYPE_3__ res; } ;
typedef TYPE_4__ h2o_req_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(h2o_req_t *VAR_1)
{
    if (VAR_1->version != 0x101)
        return 0;

    if (VAR_1->res.content_length != VAR_0)
        return 0;

    if ((100 <= VAR_1->res.status && VAR_1->res.status <= 199) || VAR_1->res.status == 204 || VAR_1->res.status == 304)
        return 0;
    if (FUNC_1(VAR_1->input.method.base, VAR_1->input.method.len, FUNC_0("HEAD")))
        return 0;

    return 1;
}
