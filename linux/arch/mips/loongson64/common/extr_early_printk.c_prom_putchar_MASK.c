
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (unsigned char*,int ,char) ;

void FUNC_2(char VAR_4)
{
 int VAR_5;
 unsigned char *VAR_6;

 VAR_6 = (unsigned char *)VAR_3[0];
 VAR_5 = 1024;

 while (((FUNC_0(VAR_6, VAR_0) & VAR_1) == 0) &&
   (VAR_5-- > 0))
  ;

 FUNC_1(VAR_6, VAR_2, VAR_4);
}
