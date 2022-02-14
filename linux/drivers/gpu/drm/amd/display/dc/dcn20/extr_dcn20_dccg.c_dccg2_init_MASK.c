
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ctx; } ;
struct dcn_dccg {TYPE_4__ base; } ;
struct dccg {int dummy; } ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_6__ {TYPE_1__* res_pool; } ;
struct TYPE_5__ {int pipe_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 struct dcn_dccg* FUNC_2 (struct dccg*) ;

void FUNC_3(struct dccg *VAR_2)
{
 struct dcn_dccg *VAR_3 = FUNC_2(VAR_2);


 switch (VAR_3->base.ctx->dc->res_pool->pipe_count) {
 case 6:
  FUNC_1(VAR_0, VAR_1[5], 1);

 case 5:
  FUNC_1(VAR_0, VAR_1[4], 1);

 case 4:
  FUNC_1(VAR_0, VAR_1[3], 1);

 case 3:
  FUNC_1(VAR_0, VAR_1[2], 1);

 case 2:
  FUNC_1(VAR_0, VAR_1[1], 1);

 case 1:
  FUNC_1(VAR_0, VAR_1[0], 1);
  break;
 default:
  FUNC_0(0);
  break;
 }
}
