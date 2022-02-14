
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_fwd_dev {int link_up; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct usnic_fwd_dev *VAR_1)
{
 FUNC_0(&VAR_1->lock);

 if (!VAR_1->link_up)
  return -VAR_0;

 return 0;
}
