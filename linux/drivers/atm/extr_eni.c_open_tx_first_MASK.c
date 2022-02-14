
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ traffic_class; } ;
struct TYPE_4__ {TYPE_2__ txtp; } ;
struct atm_vcc {TYPE_1__ qos; } ;
struct TYPE_6__ {scalar_t__ txing; int * tx; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct atm_vcc*) ;
 int FUNC_1 (struct atm_vcc*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct atm_vcc *VAR_1)
{
 FUNC_0(VAR_1)->tx = ((void*)0);
 if (VAR_1->qos.txtp.traffic_class == VAR_0) return 0;
 FUNC_0(VAR_1)->txing = 0;
 return FUNC_1(VAR_1,&VAR_1->qos.txtp,1,1);
}
