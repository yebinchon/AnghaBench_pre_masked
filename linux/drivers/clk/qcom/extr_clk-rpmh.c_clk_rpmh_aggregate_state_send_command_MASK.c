
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_rpmh {int state; int valid_state_mask; int aggr_state; int res_name; TYPE_1__* peer; } ;
struct TYPE_2__ {int state; int aggr_state; } ;


 int FUNC_0 (int,char*,int ,char*) ;
 int FUNC_1 (struct clk_rpmh*) ;

__attribute__((used)) static int FUNC_2(struct clk_rpmh *VAR_0,
      bool VAR_1)
{
 int VAR_2;


 if (VAR_1 == VAR_0->state)
  return 0;

 VAR_0->state = VAR_1 ? VAR_0->valid_state_mask : 0;
 VAR_0->aggr_state = VAR_0->state | VAR_0->peer->state;
 VAR_0->peer->aggr_state = VAR_0->aggr_state;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return 0;

 if (VAR_2 && VAR_1)
  VAR_0->state = 0;
 else if (VAR_2)
  VAR_0->state = VAR_0->valid_state_mask;

 FUNC_0(1, "clk: %s failed to %s\n", VAR_0->res_name,
      VAR_1 ? "enable" : "disable");
 return VAR_2;
}
