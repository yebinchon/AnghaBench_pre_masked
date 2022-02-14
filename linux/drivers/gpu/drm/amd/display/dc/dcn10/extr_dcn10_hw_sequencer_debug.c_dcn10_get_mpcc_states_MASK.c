
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_pool {int pipe_count; TYPE_2__* mpc; } ;
struct mpcc_state {int opp_id; int idle; int overlap_only; int pre_multiplied_alpha; int alpha_mode; int mode; int bot_mpcc_id; int dpp_id; int member_0; } ;
struct dc {struct resource_pool* res_pool; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* read_mpcc_state ) (TYPE_2__*,int,struct mpcc_state*) ;} ;


 unsigned int FUNC_0 (char*,unsigned int,char*,...) ;
 int FUNC_1 (TYPE_2__*,int,struct mpcc_state*) ;

__attribute__((used)) static unsigned int FUNC_2(struct dc *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 struct resource_pool *VAR_3 = VAR_0->res_pool;
 int VAR_4;

 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = VAR_2;

 VAR_5 = FUNC_0(VAR_1, VAR_6, "instance,opp,dpp,mpccbot,mode,alpha_mode,premult,overlap_only,idle\n");
 VAR_6 -= VAR_5;
 VAR_1 += VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->pipe_count; VAR_4++) {
  struct mpcc_state VAR_7 = {0};

  VAR_3->mpc->funcs->read_mpcc_state(VAR_3->mpc, VAR_4, &VAR_7);

  if (VAR_7.opp_id != 0xf) {
   VAR_5 = FUNC_0(VAR_1, VAR_6, "%x,%x,%x,%x,%x,%x,%x,%x,%x\n",
    VAR_4, VAR_7.opp_id, VAR_7.dpp_id, VAR_7.bot_mpcc_id,
    VAR_7.mode, VAR_7.alpha_mode, VAR_7.pre_multiplied_alpha, VAR_7.overlap_only,
    VAR_7.idle);

   VAR_6 -= VAR_5;
   VAR_1 += VAR_5;
  }
 }

 return VAR_2 - VAR_6;
}
