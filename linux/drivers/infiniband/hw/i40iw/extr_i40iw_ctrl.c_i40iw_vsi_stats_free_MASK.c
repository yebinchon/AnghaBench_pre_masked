
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct i40iw_sc_vsi {size_t fcn_id; TYPE_1__* dev; scalar_t__ stats_fcn_id_alloc; } ;
struct TYPE_2__ {int* fcn_id_array; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct i40iw_sc_vsi*) ;

void FUNC_1(struct i40iw_sc_vsi *VAR_1)
{
 u8 VAR_2 = VAR_1->fcn_id;

 if (VAR_1->stats_fcn_id_alloc && VAR_2 < VAR_0)
  VAR_1->dev->fcn_id_array[VAR_2] = 0;
 FUNC_0(VAR_1);
}
