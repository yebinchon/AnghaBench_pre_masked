
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *
FUNC_1(int VAR_19)
{
 static char VAR_20[1000];
 VAR_20[0] = '\0';

 if ((VAR_19 & VAR_18) != 0)
  FUNC_0(VAR_20, "year ");
 if ((VAR_19 & VAR_12) != 0)
  FUNC_0(VAR_20, "month ");
 if ((VAR_19 & VAR_4) != 0)
  FUNC_0(VAR_20, "dayofweek ");
 if ((VAR_19 & VAR_3) != 0)
  FUNC_0(VAR_20, "dayofmonth ");
 if ((VAR_19 & VAR_10) != 0)
  FUNC_0(VAR_20, "modifierindex ");
 if ((VAR_19 & VAR_11) != 0)
  FUNC_0(VAR_20, "modifieroffset ");
 if ((VAR_19 & VAR_16) != 0)
  FUNC_0(VAR_20, "specialday ");
 if ((VAR_19 & VAR_1) != 0)
  FUNC_0(VAR_20, "allmonth ");
 if ((VAR_19 & VAR_0) != 0)
  FUNC_0(VAR_20, "allday ");
 if ((VAR_19 & VAR_17) != 0)
  FUNC_0(VAR_20, "variable ");
 if ((VAR_19 & VAR_2) != 0)
  FUNC_0(VAR_20, "chinesenewyear ");
 if ((VAR_19 & VAR_14) != 0)
  FUNC_0(VAR_20, "paskha ");
 if ((VAR_19 & VAR_6) != 0)
  FUNC_0(VAR_20, "easter ");
 if ((VAR_19 & VAR_7) != 0)
  FUNC_0(VAR_20, "fullmoon ");
 if ((VAR_19 & VAR_13) != 0)
  FUNC_0(VAR_20, "newmoon ");
 if ((VAR_19 & VAR_9) != 0)
  FUNC_0(VAR_20, "marequinox ");
 if ((VAR_19 & VAR_15) != 0)
  FUNC_0(VAR_20, "sepequinox ");
 if ((VAR_19 & VAR_8) != 0)
  FUNC_0(VAR_20, "junsolstice ");
 if ((VAR_19 & VAR_5) != 0)
  FUNC_0(VAR_20, "decsolstice ");

 return VAR_20;
}
