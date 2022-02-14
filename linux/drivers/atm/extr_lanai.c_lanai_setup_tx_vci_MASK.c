
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf; int unqueue; } ;
struct lanai_vcc {TYPE_2__ tx; } ;
struct lanai_dev {int dummy; } ;
struct TYPE_3__ {int max_sdu; } ;
struct atm_qos {scalar_t__ aal; TYPE_1__ txtp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lanai_dev*,int *,int,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct lanai_dev *VAR_6, struct lanai_vcc *VAR_7,
 const struct atm_qos *VAR_8)
{
 int VAR_9, VAR_10;
 if (VAR_8->aal == VAR_2) {
  VAR_7->tx.unqueue = VAR_4;
  VAR_9 = VAR_3 - 1;
  VAR_10 = VAR_0;
 } else {
  VAR_7->tx.unqueue = VAR_5;
  VAR_9 = VAR_8->txtp.max_sdu;
  VAR_10 = VAR_1;
 }
 return FUNC_0(VAR_6, &VAR_7->tx.buf, VAR_9,
     VAR_10, "TX");
}
