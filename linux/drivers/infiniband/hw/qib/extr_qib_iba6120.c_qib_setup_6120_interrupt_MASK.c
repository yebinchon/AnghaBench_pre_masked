
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {int pcidev; TYPE_1__* cspec; int revision; } ;
struct TYPE_2__ {int gpio_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *,struct qib_devdata*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct qib_devdata*,char*,int ,int) ;
 int FUNC_4 (struct qib_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct qib_devdata *VAR_6)
{
 int VAR_7;







 if (FUNC_0(VAR_6->revision, VAR_3,
        VAR_0) > 1) {

  VAR_6->cspec->gpio_mask |= VAR_1;
  FUNC_4(VAR_6, VAR_4, VAR_6->cspec->gpio_mask);
 }

 VAR_7 = FUNC_2(VAR_6->pcidev, 0, VAR_5, ((void*)0), VAR_6,
         VAR_2);
 if (VAR_7)
  FUNC_3(VAR_6,
       "Couldn't setup interrupt (irq=%d): %d\n",
       FUNC_1(VAR_6->pcidev, 0), VAR_7);
}
