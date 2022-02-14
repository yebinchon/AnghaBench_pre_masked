
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct i40iw_vsi_stats_info {scalar_t__ fcn_id; scalar_t__ alloc_fcn_id; scalar_t__ stats_initialize; TYPE_1__* pestat; } ;
struct i40iw_sc_vsi {scalar_t__ fcn_id; scalar_t__ stats_fcn_id_alloc; TYPE_1__* pestat; TYPE_2__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int hw; } ;
struct TYPE_3__ {int lock; struct i40iw_sc_vsi* vsi; int hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (struct i40iw_sc_vsi*) ;
 int FUNC_3 (int *) ;

enum i40iw_status_code FUNC_4(struct i40iw_sc_vsi *VAR_3, struct i40iw_vsi_stats_info *VAR_4)
{
 u8 VAR_5 = VAR_4->fcn_id;

 if (VAR_4->alloc_fcn_id)
  VAR_5 = FUNC_0(VAR_3->dev);

 if (VAR_5 == VAR_1)
  return VAR_0;

 VAR_3->pestat = VAR_4->pestat;
 VAR_3->pestat->hw = VAR_3->dev->hw;
 VAR_3->pestat->vsi = VAR_3;

 if (VAR_4->stats_initialize) {
  FUNC_1(VAR_3->pestat, VAR_5, 1);
  FUNC_3(&VAR_3->pestat->lock);
  FUNC_2(VAR_3);
 }
 VAR_3->stats_fcn_id_alloc = VAR_4->alloc_fcn_id;
 VAR_3->fcn_id = VAR_5;
 return VAR_2;
}
