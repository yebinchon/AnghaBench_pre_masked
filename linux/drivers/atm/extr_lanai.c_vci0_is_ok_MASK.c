
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lanai_dev {scalar_t__ naal0; int conf2; } ;
struct TYPE_4__ {scalar_t__ traffic_class; } ;
struct TYPE_3__ {scalar_t__ traffic_class; } ;
struct atm_qos {scalar_t__ aal; TYPE_2__ rxtp; TYPE_1__ txtp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lanai_dev*) ;

__attribute__((used)) static inline int FUNC_1(struct lanai_dev *VAR_4,
 const struct atm_qos *VAR_5)
{
 if (VAR_5->txtp.traffic_class == VAR_1 || VAR_5->aal == VAR_0)
  return 0;
 if (VAR_5->rxtp.traffic_class != VAR_2) {
  if (VAR_4->naal0 != 0)
   return 0;
  VAR_4->conf2 |= VAR_3;
  FUNC_0(VAR_4);
 }
 return 1;
}
