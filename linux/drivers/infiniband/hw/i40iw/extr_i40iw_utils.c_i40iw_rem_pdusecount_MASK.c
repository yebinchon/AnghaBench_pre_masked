
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pd_id; } ;
struct i40iw_pd {TYPE_1__ sc_pd; int usecount; } ;
struct i40iw_device {int allocated_pds; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40iw_device*,int ,int ) ;

void FUNC_2(struct i40iw_pd *VAR_0, struct i40iw_device *VAR_1)
{
 if (!FUNC_0(&VAR_0->usecount))
  return;
 FUNC_1(VAR_1, VAR_1->allocated_pds, VAR_0->sc_pd.pd_id);
}
