
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm109_dev {int shutdown; int urb_irq; int urb_ctl; } ;


 int FUNC_0 (struct cm109_dev*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cm109_dev *VAR_0)
{
 VAR_0->shutdown = 1;



 FUNC_1();

 FUNC_2(VAR_0->urb_ctl);
 FUNC_2(VAR_0->urb_irq);

 FUNC_0(VAR_0, 0);

 VAR_0->shutdown = 0;
 FUNC_1();
}
