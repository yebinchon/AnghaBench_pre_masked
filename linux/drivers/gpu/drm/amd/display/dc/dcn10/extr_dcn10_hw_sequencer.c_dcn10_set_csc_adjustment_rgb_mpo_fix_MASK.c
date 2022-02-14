
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_3__* dpp; } ;
struct pipe_ctx {TYPE_2__ plane_res; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* dpp_set_csc_adjustment ) (TYPE_3__*,int *) ;} ;


 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_1(struct pipe_ctx *VAR_0, uint16_t *VAR_1)
{

 uint16_t VAR_2 = VAR_1[3];

 VAR_1[3] = 0;
 VAR_1[7] = 0;
 VAR_1[11] = 0;
 VAR_0->plane_res.dpp->funcs->dpp_set_csc_adjustment(VAR_0->plane_res.dpp, VAR_1);
 VAR_1[3] = VAR_2;
 VAR_1[7] = VAR_2;
 VAR_1[11] = VAR_2;
}
