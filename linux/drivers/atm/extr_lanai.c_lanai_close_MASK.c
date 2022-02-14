
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct atm_vcc* atmvcc; int buf; } ;
struct TYPE_7__ {struct atm_vcc* atmvcc; int buf; } ;
struct lanai_vcc {scalar_t__ nref; TYPE_4__ tx; int * vbase; TYPE_3__ rx; } ;
struct lanai_dev {scalar_t__ naal0; int pci; struct atm_vcc* cbrvcc; } ;
struct TYPE_6__ {scalar_t__ aal; } ;
struct atm_vcc {int flags; int * dev_data; TYPE_2__ qos; TYPE_1__* dev; } ;
struct TYPE_5__ {scalar_t__ dev_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lanai_dev*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct lanai_dev*,struct lanai_vcc*) ;
 int FUNC_3 (struct lanai_vcc*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct lanai_dev*) ;
 int FUNC_6 (struct lanai_vcc*) ;
 int FUNC_7 (struct lanai_dev*,struct lanai_vcc*) ;

__attribute__((used)) static void FUNC_8(struct atm_vcc *VAR_4)
{
 struct lanai_vcc *VAR_5 = (struct lanai_vcc *) VAR_4->dev_data;
 struct lanai_dev *VAR_6 = (struct lanai_dev *) VAR_4->dev->dev_data;
 if (VAR_5 == ((void*)0))
  return;
 FUNC_1(VAR_3, &VAR_4->flags);
 FUNC_1(VAR_2, &VAR_4->flags);
 if (VAR_5->rx.atmvcc == VAR_4) {
  FUNC_6(VAR_5);
  if (VAR_4->qos.aal == VAR_0) {
   if (--VAR_6->naal0 <= 0)
    FUNC_0(VAR_6);
  } else
   FUNC_4(&VAR_5->rx.buf, VAR_6->pci);
  VAR_5->rx.atmvcc = ((void*)0);
 }
 if (VAR_5->tx.atmvcc == VAR_4) {
  if (VAR_4 == VAR_6->cbrvcc) {
   if (VAR_5->vbase != ((void*)0))
    FUNC_5(VAR_6);
   VAR_6->cbrvcc = ((void*)0);
  }
  FUNC_7(VAR_6, VAR_5);
  FUNC_4(&VAR_5->tx.buf, VAR_6->pci);
  VAR_5->tx.atmvcc = ((void*)0);
 }
 if (--VAR_5->nref == 0) {
  FUNC_2(VAR_6, VAR_5);
  FUNC_3(VAR_5);
 }
 VAR_4->dev_data = ((void*)0);
 FUNC_1(VAR_1, &VAR_4->flags);
}
