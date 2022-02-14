
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ktyp; int knam; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < (int)VAR_0; VAR_6++) {
  VAR_5 = VAR_4[VAR_6].ktyp & VAR_3;
  if ((VAR_4[VAR_6].ktyp & VAR_2) == 0)
   VAR_5 |= VAR_1;
  FUNC_0(VAR_4[VAR_6].knam, VAR_5);
 }
}
