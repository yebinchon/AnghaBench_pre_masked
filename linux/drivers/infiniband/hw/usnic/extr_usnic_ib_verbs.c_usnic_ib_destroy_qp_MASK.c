
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_vf {TYPE_1__* pf; } ;
struct usnic_ib_qp_grp {int link; int grp_id; struct usnic_ib_vf* vf; } ;
struct ib_udata {int dummy; } ;
struct ib_qp {int dummy; } ;
struct TYPE_2__ {int usdev_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usnic_ib_qp_grp*) ;
 struct usnic_ib_qp_grp* FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (struct usnic_ib_qp_grp*,int ,int *) ;

int FUNC_8(struct ib_qp *VAR_1, struct ib_udata *VAR_2)
{
 struct usnic_ib_qp_grp *VAR_3;
 struct usnic_ib_vf *VAR_4;

 FUNC_5("\n");

 VAR_3 = FUNC_4(VAR_1);
 VAR_4 = VAR_3->vf;
 FUNC_1(&VAR_4->pf->usdev_lock);
 if (FUNC_7(VAR_3, VAR_0, ((void*)0))) {
  FUNC_6("Failed to move qp grp %u to reset\n",
    VAR_3->grp_id);
 }

 FUNC_0(&VAR_3->link);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_4->pf->usdev_lock);

 return 0;
}
