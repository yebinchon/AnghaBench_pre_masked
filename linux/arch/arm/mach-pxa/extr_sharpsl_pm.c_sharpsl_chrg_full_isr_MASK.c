
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int flags; int chrg_full_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 if (VAR_3.flags & VAR_1)
  return VAR_0;


 FUNC_0(&VAR_3.chrg_full_timer, VAR_2 + FUNC_1(500));

 return VAR_0;
}
