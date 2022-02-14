
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; int charge_mode; TYPE_1__* machinfo; int flags; } ;
struct TYPE_3__ {int (* charge ) (int ) ;scalar_t__ (* read_devdata ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_10 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_11)
{
 int VAR_12 = 0;

 FUNC_1(VAR_10.dev, "PEDR = %x, GPIO_AC_IN = %d, "
  "GPIO_CHRG_FULL = %d, GPIO_KEY_INT = %d, GPIO_WAKEUP = %d\n",
  VAR_5, FUNC_2(VAR_1),
  FUNC_2(VAR_2),
  FUNC_2(VAR_3),
  FUNC_2(VAR_4));

 if ((VAR_5 & FUNC_0(VAR_1))) {
  if (VAR_10.machinfo->read_devdata(VAR_9)) {

   FUNC_1(VAR_10.dev, "ac insert\n");
   VAR_10.flags |= VAR_7;
  } else {

   FUNC_1(VAR_10.dev, "ac remove\n");
   FUNC_3(VAR_8);
   VAR_10.machinfo->charge(0);
   VAR_10.charge_mode = VAR_0;
  }
 }

 if ((VAR_5 & FUNC_0(VAR_2)))
  FUNC_1(VAR_10.dev, "Charge full interrupt\n");

 if (VAR_5 & FUNC_0(VAR_3))
  VAR_12 |= FUNC_0(VAR_3);

 if (VAR_5 & FUNC_0(VAR_4))
  VAR_12 |= FUNC_0(VAR_4);

 if (VAR_11 && (VAR_5 & VAR_6))
  VAR_12 |= VAR_6;

 FUNC_1(VAR_10.dev, "is_resume: %x\n",VAR_12);
 return VAR_12;
}
