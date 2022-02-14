
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40iw_sc_vsi {scalar_t__ mtu; TYPE_1__* qos; struct i40iw_sc_dev* dev; } ;
struct i40iw_sc_qp {scalar_t__ qs_handle; } ;
struct i40iw_sc_dev {int dummy; } ;
struct i40iw_l2params {scalar_t__ mtu; scalar_t__* qs_handle_list; } ;
struct TYPE_2__ {scalar_t__ qs_handle; int lock; int qplist; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 struct i40iw_sc_qp* FUNC_1 (int *,struct i40iw_sc_qp*) ;
 int FUNC_2 (struct i40iw_sc_dev*,struct i40iw_sc_qp*,int) ;
 int FUNC_3 (struct i40iw_sc_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct i40iw_sc_vsi *VAR_1, struct i40iw_l2params *VAR_2)
{
 struct i40iw_sc_dev *VAR_3 = VAR_1->dev;
 struct i40iw_sc_qp *VAR_4 = ((void*)0);
 bool VAR_5 = 0;
 unsigned long VAR_6;
 u16 VAR_7;
 int VAR_8;

 if (VAR_1->mtu != VAR_2->mtu) {
  VAR_1->mtu = VAR_2->mtu;
  FUNC_3(VAR_3);
 }

 FUNC_0(VAR_2->qs_handle_list);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_2->qs_handle_list[VAR_8];
  if (VAR_1->qos[VAR_8].qs_handle != VAR_7)
   VAR_5 = 1;
  FUNC_4(&VAR_1->qos[VAR_8].lock, VAR_6);
  VAR_4 = FUNC_1(&VAR_1->qos[VAR_8].qplist, VAR_4);
  while (VAR_4) {
   if (VAR_5) {
    VAR_4->qs_handle = VAR_7;

    FUNC_2(VAR_3, VAR_4, 1);
   }
   VAR_4 = FUNC_1(&VAR_1->qos[VAR_8].qplist, VAR_4);
  }
  FUNC_5(&VAR_1->qos[VAR_8].lock, VAR_6);
  VAR_1->qos[VAR_8].qs_handle = VAR_7;
 }
}
