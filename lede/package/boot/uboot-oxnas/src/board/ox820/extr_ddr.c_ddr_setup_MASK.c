
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int T_DDR_TIMING_PARAMETERS ;
typedef int T_DDR_CONFIG_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*) ;

void FUNC_2(int VAR_11)
{
 static const T_DDR_TIMING_PARAMETERS *VAR_12 =
  &VAR_4;
 static const T_DDR_CONFIG_PARAMETERS *VAR_13 =
  &VAR_1;


 *(volatile UINT *) VAR_2 = VAR_0;


 FUNC_1(VAR_12);


 FUNC_0(VAR_13, VAR_11);


 *(volatile UINT *) VAR_3 = (0
  << VAR_5)
  | (1 << VAR_6)
  | (3 << VAR_7)
  | (2 << VAR_8)
  | (3 << VAR_9)
  | (3 << VAR_10);


 *(volatile UINT *) VAR_2 = VAR_0 + 0x0000FFFF;

}
