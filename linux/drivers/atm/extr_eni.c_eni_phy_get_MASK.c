
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ phy; } ;


 TYPE_1__* FUNC_0 (struct atm_dev*) ;
 unsigned char FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned char FUNC_2(struct atm_dev *VAR_0,unsigned long VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0)->phy+VAR_1*4);
}
