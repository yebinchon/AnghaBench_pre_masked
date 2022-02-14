
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int control1; int control2; scalar_t__ ctr2_enable; scalar_t__ ctr1_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{

 VAR_2.control1 |= (VAR_1|VAR_0);
 VAR_2.control2 |= (VAR_1|VAR_0);

 if (VAR_2.ctr1_enable)
  FUNC_0(VAR_2.control1);
 if (VAR_2.ctr2_enable)
  FUNC_1(VAR_2.control2);
}
