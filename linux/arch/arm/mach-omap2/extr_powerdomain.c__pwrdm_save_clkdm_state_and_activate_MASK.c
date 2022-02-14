
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct powerdomain {int flags; int * pwrdm_clkdms; } ;
struct TYPE_2__ {scalar_t__ pwrdm_set_lowpwrstchange; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct powerdomain *VAR_6,
            u8 VAR_7, u8 VAR_8)
{
 u8 VAR_9;

 if (VAR_7 < VAR_4) {
  if (VAR_7 > VAR_8 &&
      VAR_6->flags & VAR_3 &&
      VAR_5->pwrdm_set_lowpwrstchange) {
   VAR_9 = VAR_2;
  } else {
   FUNC_0(VAR_6->pwrdm_clkdms[0]);
   VAR_9 = VAR_1;
  }
 } else {
  VAR_9 = VAR_0;
 }

 return VAR_9;
}
