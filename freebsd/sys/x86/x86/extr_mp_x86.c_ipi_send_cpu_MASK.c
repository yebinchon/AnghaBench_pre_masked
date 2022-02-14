
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int pc_ipi_bitmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;
 int* VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_3 (int,int) ;

void
FUNC_4(int VAR_3, u_int VAR_4)
{
 u_int VAR_5, VAR_6, VAR_7;
 u_int *VAR_8;

 FUNC_1(VAR_1[VAR_3] != -1, ("IPI to non-existent CPU %d", VAR_3));

 if (FUNC_0(VAR_4)) {
  VAR_5 = 1 << VAR_4;
  VAR_4 = VAR_0;
  VAR_8 = &VAR_2[VAR_3]->pc_ipi_bitmap;
  VAR_6 = *VAR_8;
  for (;;) {
   if ((VAR_6 & VAR_5) == VAR_5)
    break;
   VAR_7 = VAR_6 | VAR_5;
   if (FUNC_2(VAR_8, &VAR_6, VAR_7))
    break;
  }
  if (VAR_6)
   return;
 }
 FUNC_3(VAR_4, VAR_1[VAR_3]);
}
