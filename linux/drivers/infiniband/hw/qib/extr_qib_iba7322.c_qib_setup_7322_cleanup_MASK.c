
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int flags; int num_pports; TYPE_4__* cspec; TYPE_3__* pport; TYPE_1__* pcidev; } ;
struct TYPE_8__ {int dca_ctrl; int gpio_mask; int gpio_lock; int msix_entries; int sendibchk; int sendgrhchk; int sendchkenable; int cntrs; } ;
struct TYPE_7__ {TYPE_2__* cpspec; } ;
struct TYPE_6__ {int portcntrs; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct qib_devdata*) ;
 int FUNC_4 (struct qib_devdata*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_devdata *VAR_6)
{
 int VAR_7;
 FUNC_3(VAR_6);
 FUNC_2(VAR_6->cspec->cntrs);
 FUNC_2(VAR_6->cspec->sendchkenable);
 FUNC_2(VAR_6->cspec->sendgrhchk);
 FUNC_2(VAR_6->cspec->sendibchk);
 FUNC_2(VAR_6->cspec->msix_entries);
 for (VAR_7 = 0; VAR_7 < VAR_6->num_pports; VAR_7++) {
  unsigned long VAR_8;
  u32 VAR_9 = VAR_3 |
   (VAR_3 << VAR_4);

  FUNC_2(VAR_6->pport[VAR_7].cpspec->portcntrs);
  if (VAR_6->flags & VAR_2) {
   FUNC_5(&VAR_6->cspec->gpio_lock, VAR_8);
   VAR_6->cspec->gpio_mask &= ~VAR_9;
   FUNC_4(VAR_6, VAR_5, VAR_6->cspec->gpio_mask);
   FUNC_6(&VAR_6->cspec->gpio_lock, VAR_8);
  }
 }
}
