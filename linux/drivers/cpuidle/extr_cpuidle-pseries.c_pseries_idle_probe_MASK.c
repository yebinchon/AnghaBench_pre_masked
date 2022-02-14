
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lppaca_ptr; } ;
struct TYPE_6__ {int target_residency; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(void)
{

 if (VAR_3 != VAR_2)
  return -VAR_0;

 if (FUNC_1(VAR_1)) {






  if (FUNC_2(VAR_6->lppaca_ptr)) {
   VAR_4 = VAR_8;
   VAR_7 = FUNC_0(VAR_8);
  } else {
   VAR_4 = VAR_5;
   VAR_7 = FUNC_0(VAR_5);
  }
 } else
  return -VAR_0;

 if (VAR_7 > 1) {
  VAR_10 = 1;
  VAR_9 = VAR_4[1].target_residency *
     VAR_11;
 }
 return 0;
}
