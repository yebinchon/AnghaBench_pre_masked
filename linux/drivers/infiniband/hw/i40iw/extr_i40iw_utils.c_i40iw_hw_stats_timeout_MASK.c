
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct timer_list {int dummy; } ;
struct i40iw_vsi_pestat {int stats_timer; int lock; int hw_stats; struct i40iw_sc_vsi* vsi; } ;
struct i40iw_sc_vsi {struct i40iw_sc_dev* dev; } ;
struct i40iw_sc_dev {TYPE_1__** vf_dev; } ;
struct TYPE_2__ {struct i40iw_vsi_pestat pestat; scalar_t__ stats_initialized; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct i40iw_vsi_pestat* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct i40iw_vsi_pestat*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct i40iw_vsi_pestat* VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_5)
{
 struct i40iw_vsi_pestat *VAR_6 = FUNC_0(VAR_6, VAR_5,
             VAR_4);
 struct i40iw_sc_vsi *VAR_7 = VAR_6->vsi;
 struct i40iw_sc_dev *VAR_8 = VAR_7->dev;
 struct i40iw_vsi_pestat *VAR_9 = ((void*)0);
 u16 VAR_10;
 unsigned long VAR_11;


 FUNC_1(VAR_6, &VAR_6->hw_stats);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  FUNC_4(&VAR_6->lock, VAR_11);
  if (VAR_8->vf_dev[VAR_10]) {
   if (VAR_8->vf_dev[VAR_10]->stats_initialized) {
    VAR_9 = &VAR_8->vf_dev[VAR_10]->pestat;
    FUNC_1(VAR_9, &VAR_9->hw_stats);
   }
  }
  FUNC_5(&VAR_6->lock, VAR_11);
 }

 FUNC_2(&VAR_6->stats_timer,
    VAR_2 + FUNC_3(VAR_1));
}
