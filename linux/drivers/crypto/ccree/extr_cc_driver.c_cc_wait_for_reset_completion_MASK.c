
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_drvdata {scalar_t__ hw_rev; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct cc_drvdata*,int ) ;
 int FUNC_2 () ;

bool FUNC_3(struct cc_drvdata *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;


 if (VAR_4->hw_rev <= VAR_1)
  return 1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {



  VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_3));
  if (VAR_5 & VAR_2) {

   return 1;
  }

  FUNC_2();
 }

 return 0;
}
