
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void FUNC_1(char *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;
 static const char * const VAR_11[] = {
  "UK", "MK", "MSK", "MUSK", "MUSUK", "USK",
  "RSRVD", "UUSK"};


 VAR_10 = (VAR_9 & VAR_0) >> VAR_1;
 VAR_8 += FUNC_0(VAR_8, "%-5s", VAR_11[VAR_10]);






 if ((VAR_10 == 0) || (VAR_10 > 3) || (VAR_9 & VAR_4))
  VAR_8 += FUNC_0(VAR_8, "         %03lx",
   ((VAR_9 & VAR_6) >> VAR_7));
 else
  VAR_8 += FUNC_0(VAR_8, "         UND");

 if ((VAR_10 == 0) || (VAR_10 > 3))
  VAR_8 += FUNC_0(VAR_8, "         %01ld",
   ((VAR_9 & VAR_2) >> VAR_3));
 else
  VAR_8 += FUNC_0(VAR_8, "         U");


 VAR_8 += FUNC_0(VAR_8, "       %01ld\n",
  ((VAR_9 & VAR_4) >> VAR_5));
}
