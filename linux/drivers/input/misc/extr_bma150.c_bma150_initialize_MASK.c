
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bma150_data {TYPE_1__* client; } ;
struct bma150_cfg {int lg_thres; int lg_dur; int lg_hyst; int lg_int; int hg_thres; int hg_dur; int hg_hyst; int hg_int; int any_motion_thres; int any_motion_dur; int any_motion_int; int range; int bandwidth; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct bma150_data*,int ,int ,int ) ;
 int FUNC_1 (struct bma150_data*,int ) ;
 int FUNC_2 (struct bma150_data*,int ,int ,int ,int ) ;
 int FUNC_3 (struct bma150_data*,int ,int ,int ,int ) ;
 int FUNC_4 (struct bma150_data*,int ) ;
 int FUNC_5 (struct bma150_data*,int ) ;
 int FUNC_6 (struct bma150_data*) ;

__attribute__((used)) static int FUNC_7(struct bma150_data *VAR_1,
           const struct bma150_cfg *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->bandwidth);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_1, VAR_2->range);
 if (VAR_3)
  return VAR_3;

 if (VAR_1->client->irq) {
  VAR_3 = FUNC_0(VAR_1,
     VAR_2->any_motion_int,
     VAR_2->any_motion_dur,
     VAR_2->any_motion_thres);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_1,
     VAR_2->hg_int, VAR_2->hg_hyst,
     VAR_2->hg_dur, VAR_2->hg_thres);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_3(VAR_1,
     VAR_2->lg_int, VAR_2->lg_hyst,
     VAR_2->lg_dur, VAR_2->lg_thres);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_4(VAR_1, VAR_0);
}
