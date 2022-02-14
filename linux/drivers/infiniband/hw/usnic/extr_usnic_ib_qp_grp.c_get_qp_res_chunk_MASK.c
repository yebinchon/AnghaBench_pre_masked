
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_vnic_res_chunk {int dummy; } ;
struct usnic_ib_qp_grp {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct usnic_vnic_res_chunk* FUNC_1 (struct usnic_ib_qp_grp*,int ) ;

__attribute__((used)) static struct usnic_vnic_res_chunk *
FUNC_2(struct usnic_ib_qp_grp *VAR_1)
{
 FUNC_0(&VAR_1->lock);




 return FUNC_1(VAR_1, VAR_0);
}
