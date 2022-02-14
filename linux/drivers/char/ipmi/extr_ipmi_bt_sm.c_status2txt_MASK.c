
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(unsigned char VAR_6)
{





 static char VAR_7[40];

 FUNC_1(VAR_7, "[ ");
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_7, "B_BUSY ");
 if (VAR_6 & VAR_3)
  FUNC_0(VAR_7, "H_BUSY ");
 if (VAR_6 & VAR_4)
  FUNC_0(VAR_7, "OEM0 ");
 if (VAR_6 & VAR_5)
  FUNC_0(VAR_7, "SMS ");
 if (VAR_6 & VAR_0)
  FUNC_0(VAR_7, "B2H ");
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_7, "H2B ");
 FUNC_0(VAR_7, "]");
 return VAR_7;
}
