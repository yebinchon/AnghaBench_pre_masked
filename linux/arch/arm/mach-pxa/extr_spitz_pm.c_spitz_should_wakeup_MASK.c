
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; int charge_mode; TYPE_1__* machinfo; int flags; } ;
struct TYPE_3__ {int (* read_devdata ) (int ) ;int (* charge ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_2__ VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = VAR_9.machinfo->read_devdata(VAR_6);

 if (VAR_10 != VAR_13) {
  if (VAR_13) {

   VAR_9.flags |= VAR_4;
   FUNC_1(VAR_9.dev, "AC Inserted\n");
  } else {

   FUNC_1(VAR_9.dev, "AC Removed\n");
   FUNC_2(VAR_5);
   VAR_9.machinfo->charge(0);
   VAR_9.charge_mode = VAR_0;
  }
  VAR_10 = VAR_13;

  return 0;
 }

 if (VAR_1 & FUNC_0(VAR_7))
  VAR_12 |= FUNC_0(VAR_7);

 if (VAR_2 & FUNC_0(VAR_8))
  VAR_12 |= FUNC_0(VAR_8);

 if (VAR_11 && (VAR_1 & VAR_3))
  VAR_12 |= VAR_3;

 FUNC_1(VAR_9.dev, "is_resume: %x\n", VAR_12);
 return VAR_12;
}
