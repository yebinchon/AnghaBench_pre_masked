
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_fwd_dev {int link_up; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct usnic_fwd_dev *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->link_up = 1;
 FUNC_1(&VAR_0->lock);
}
