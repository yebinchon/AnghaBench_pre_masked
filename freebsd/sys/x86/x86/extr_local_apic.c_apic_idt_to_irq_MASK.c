
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {int* la_ioint_irqs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static u_int
FUNC_1(u_int VAR_5, u_int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6 >= VAR_0 && VAR_6 != VAR_3 &&
     VAR_6 <= VAR_0 + VAR_1,
     ("Vector %u does not map to an IRQ line", VAR_6));




 VAR_7 = VAR_4[VAR_5].la_ioint_irqs[VAR_6 - VAR_0];
 if (VAR_7 < 0)
  VAR_7 = 0;
 return (VAR_7);
}
