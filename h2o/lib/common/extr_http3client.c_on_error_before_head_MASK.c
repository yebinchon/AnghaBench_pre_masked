
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* on_head ) (TYPE_2__*,char const*,int ,int ,int ,int *,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ _cb; } ;
struct st_h2o_http3client_req_t {TYPE_2__ super; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,char const*,int ,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_http3client_req_t *VAR_0, const char *VAR_1)
{
    VAR_0->super._cb.on_head(&VAR_0->super, VAR_1, 0, 0, FUNC_0(((void*)0), 0), ((void*)0), 0, 0);
}
