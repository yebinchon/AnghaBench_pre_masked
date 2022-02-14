
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_4__ {int flags; int dev; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int (* read_devdata ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 int VAR_8 = 0;

 if (!VAR_5.machinfo->read_devdata(VAR_4)) {
  FUNC_1(VAR_5.dev, "Battery now Unlocked! Suspending.\n");
  VAR_8 = 1;
 }

 if (!VAR_5.machinfo->read_devdata(VAR_3)) {
  FUNC_1(VAR_5.dev, "Fatal Batt Error! Suspending.\n");
  VAR_8 = 1;
 }

 if (!(VAR_5.flags & VAR_2) && VAR_8) {
  VAR_5.flags |= VAR_2;
  FUNC_0(VAR_0);
 }

 return VAR_1;
}
