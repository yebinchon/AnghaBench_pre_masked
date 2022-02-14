
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resend; scalar_t__ mbox; scalar_t__ bmi; scalar_t__ efl; scalar_t__ lbc; scalar_t__ pem; scalar_t__ pom; scalar_t__ nps_pkt; scalar_t__ nps_core; } ;
union nps_core_int_active {int value; TYPE_1__ s; } ;
struct nitrox_q_vector {struct nitrox_device* ndev; } ;
struct nitrox_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nitrox_device*) ;
 int FUNC_1 (struct nitrox_device*) ;
 int FUNC_2 (struct nitrox_device*) ;
 int FUNC_3 (struct nitrox_device*) ;
 int FUNC_4 (struct nitrox_device*) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 (struct nitrox_device*) ;
 int FUNC_7 (struct nitrox_device*) ;
 int FUNC_8 (struct nitrox_device*,int ) ;
 int FUNC_9 (struct nitrox_device*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_2, void *VAR_3)
{
 struct nitrox_q_vector *VAR_4 = VAR_3;
 struct nitrox_device *VAR_5 = VAR_4->ndev;
 union nps_core_int_active VAR_6;

 VAR_6.value = FUNC_8(VAR_5, VAR_1);

 if (VAR_6.s.nps_core)
  FUNC_3(VAR_5);

 if (VAR_6.s.nps_pkt)
  FUNC_4(VAR_5);

 if (VAR_6.s.pom)
  FUNC_6(VAR_5);

 if (VAR_6.s.pem)
  FUNC_5(VAR_5);

 if (VAR_6.s.lbc)
  FUNC_2(VAR_5);

 if (VAR_6.s.efl)
  FUNC_1(VAR_5);

 if (VAR_6.s.bmi)
  FUNC_0(VAR_5);


 if (VAR_6.s.mbox)
  FUNC_7(VAR_5);


 VAR_6.s.resend = 1;
 FUNC_9(VAR_5, VAR_1, VAR_6.value);

 return VAR_0;
}
