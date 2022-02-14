
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ numbrushes; } ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2 (void)
{
 int VAR_2;
 int VAR_3;
 char VAR_4[10];

 VAR_3 = 1;
 for (VAR_2=1 ; VAR_2<VAR_1 ; VAR_2++)
 {
  if (VAR_0[VAR_2].numbrushes)
  {
   FUNC_1 (VAR_4, "*%i", VAR_3);
   VAR_3++;
   FUNC_0 (&VAR_0[VAR_2], "model", VAR_4);
  }
 }

}
