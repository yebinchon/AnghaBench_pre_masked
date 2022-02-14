
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_vf {int lock; } ;
struct usnic_ib_qp_grp {scalar_t__ state; struct usnic_ib_vf* vf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usnic_ib_qp_grp*) ;

__attribute__((used)) static void FUNC_4(struct usnic_ib_qp_grp *VAR_1)
{
 struct usnic_ib_vf *VAR_2 = VAR_1->vf;

 FUNC_0(VAR_1->state != VAR_0);

 FUNC_1(&VAR_2->lock);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->lock);
}
