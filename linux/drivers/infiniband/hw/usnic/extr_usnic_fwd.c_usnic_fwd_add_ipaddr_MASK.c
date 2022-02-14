
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_fwd_dev {int lock; scalar_t__ inaddr; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct usnic_fwd_dev *VAR_0, __be32 VAR_1)
{
 FUNC_0(&VAR_0->lock);
 if (!VAR_0->inaddr)
  VAR_0->inaddr = VAR_1;
 FUNC_1(&VAR_0->lock);
}
