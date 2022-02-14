
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2 + 1]; VAR_2 += 2)
  continue;
 if (VAR_2 > VAR_0)
  FUNC_0("Improperly terminated phys_avail %d entries", VAR_2);

 return (VAR_2);
}
