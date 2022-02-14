
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned long long) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned long long VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;



 if (VAR_2 <= 7)
  return;


 if ((VAR_3 & (0xF << 28)) == 0)
  return;

 FUNC_1(VAR_1, VAR_5);


 if ((VAR_5 & 0xF) != 8)
  return;

 VAR_8 = 0;
 FUNC_0(7, &VAR_6, &VAR_7, &VAR_8, &VAR_9);


 if (VAR_7 & (1 << 2)) {

  FUNC_1(VAR_0, VAR_5);


  if (VAR_5 & (1 << 18))
   return;
 }

 VAR_4[5].disabled = 1;
 VAR_4[6].disabled = 1;
}
