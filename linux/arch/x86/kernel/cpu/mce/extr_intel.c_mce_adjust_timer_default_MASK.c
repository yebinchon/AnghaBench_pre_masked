
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

 unsigned long VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ) ;

unsigned long FUNC_9(unsigned long VAR_6)
{
 if ((FUNC_8(VAR_3) > 0) &&
     (FUNC_0(VAR_5) == 129)) {
  FUNC_6();
  return VAR_1;
 }

 switch (FUNC_0(VAR_5)) {
 case 129:






  FUNC_1(VAR_5, 128);
  if (!FUNC_3(1, &VAR_4))
   FUNC_7("CMCI storm subsided: switching to interrupt mode\n");



 case 128:




  if (!FUNC_2(&VAR_4)) {
   FUNC_1(VAR_5, VAR_2);
   FUNC_5(1);
   FUNC_4();
  }
  return VAR_0;
 default:


  return VAR_6;
 }
}
