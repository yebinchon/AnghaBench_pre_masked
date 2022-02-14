
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char) ;

void FUNC_2(char VAR_6)
{
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4)
  return;

 VAR_7 = VAR_5;
 VAR_9 = VAR_1 | VAR_2;

 do {
  VAR_8 = FUNC_0(VAR_0);

  if (--VAR_7 == 0)
   break;
 } while ((VAR_8 & VAR_9) != VAR_9);

 if (VAR_7)
  FUNC_1(VAR_3, VAR_6);
}
