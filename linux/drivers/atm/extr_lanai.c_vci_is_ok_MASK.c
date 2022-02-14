
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t vci_t ;
struct TYPE_8__ {struct atm_vcc const* atmvcc; } ;
struct TYPE_5__ {struct atm_vcc const* atmvcc; } ;
struct lanai_vcc {TYPE_4__ rx; TYPE_1__ tx; } ;
struct lanai_dev {scalar_t__ naal0; int conf2; struct lanai_vcc** vccs; struct atm_vcc const* cbrvcc; } ;
struct TYPE_7__ {scalar_t__ traffic_class; } ;
struct TYPE_6__ {scalar_t__ traffic_class; } ;
struct atm_qos {scalar_t__ aal; TYPE_3__ rxtp; TYPE_2__ txtp; } ;
struct atm_vcc {struct atm_qos qos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lanai_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct lanai_dev*,struct atm_qos const*) ;

__attribute__((used)) static int FUNC_3(struct lanai_dev *VAR_4, vci_t VAR_5,
 const struct atm_vcc *VAR_6)
{
 const struct atm_qos *VAR_7 = &VAR_6->qos;
 const struct lanai_vcc *VAR_8 = VAR_4->vccs[VAR_5];
 if (VAR_5 == 0 && !FUNC_2(VAR_4, VAR_7))
  return 0;
 if (FUNC_1(VAR_8 != ((void*)0))) {
  if (VAR_7->rxtp.traffic_class != VAR_2 &&
      VAR_8->rx.atmvcc != ((void*)0) && VAR_8->rx.atmvcc != VAR_6)
   return 0;
  if (VAR_7->txtp.traffic_class != VAR_2 &&
      VAR_8->tx.atmvcc != ((void*)0) && VAR_8->tx.atmvcc != VAR_6)
   return 0;
  if (VAR_7->txtp.traffic_class == VAR_1 &&
      VAR_4->cbrvcc != ((void*)0) && VAR_4->cbrvcc != VAR_6)
   return 0;
 }
 if (VAR_7->aal == VAR_0 && VAR_4->naal0 == 0 &&
     VAR_7->rxtp.traffic_class != VAR_2) {
  const struct lanai_vcc *VAR_9 = VAR_4->vccs[0];
  if (VAR_9 != ((void*)0) && VAR_9->rx.atmvcc != ((void*)0))
   return 0;
  VAR_4->conf2 &= ~VAR_3;
  FUNC_0(VAR_4);
 }
 return 1;
}
