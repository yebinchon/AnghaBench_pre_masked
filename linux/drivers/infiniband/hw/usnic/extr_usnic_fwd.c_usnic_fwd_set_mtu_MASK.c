
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_fwd_dev {unsigned int mtu; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct usnic_fwd_dev *VAR_0, unsigned int VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->mtu = VAR_1;
 FUNC_1(&VAR_0->lock);
}
