
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;



void FUNC_5(unsigned char VAR_4, unsigned char VAR_5)
{
 unsigned char VAR_6;
 unsigned long VAR_7;
 FUNC_3(&VAR_1, VAR_7);
 switch (VAR_3) {
 case 128:
  if(!VAR_2)
   break;
  VAR_6 = FUNC_1(VAR_2);
  FUNC_2(((VAR_6 | VAR_4) & ~VAR_5) | VAR_0,
   VAR_2);
  break;
 case 129:
  break;
 default:
  FUNC_0("Can't set AUXIO register on this machine.");
 }
 FUNC_4(&VAR_1, VAR_7);
}
