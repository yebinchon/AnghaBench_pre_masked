
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cec_notifier {int lock; int phys_addr; scalar_t__ cec_adap; int (* callback ) (scalar_t__,int ) ;} ;


 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;

void FUNC_4(struct cec_notifier *VAR_0, u16 VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1(&VAR_0->lock);
 VAR_0->phys_addr = VAR_1;
 if (VAR_0->callback)
  VAR_0->callback(VAR_0->cec_adap, VAR_0->phys_addr);
 else if (VAR_0->cec_adap)
  FUNC_0(VAR_0->cec_adap, VAR_0->phys_addr, 0);
 FUNC_2(&VAR_0->lock);
}
