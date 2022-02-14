
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

 unsigned long VAR_6 ;



 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 (int ) ;

void FUNC_2 (pte_t VAR_9)
{
 unsigned long VAR_10 = FUNC_1 (VAR_9);
 char VAR_11[7], *VAR_12;

 VAR_11[0] = (VAR_10 & VAR_7) ? 'v' : '-';
 VAR_11[1] = (VAR_10 & VAR_8) ? 'w' : '-';
 VAR_11[2] = (VAR_10 & VAR_5) ? 's' : '-';
 VAR_11[3] = (VAR_10 & VAR_3) ? 'x' : '-';
 VAR_11[4] = (VAR_10 & VAR_1) ? 'a' : '-';
 VAR_11[5] = (VAR_10 & VAR_2) ? 'm' : '-';
 VAR_11[6] = '\0';

 switch (VAR_10 & VAR_6) {
  case 130: VAR_12 = "memory"; break;
  case 131: VAR_12 = "io" ; break;
  case 129: VAR_12 = "vme16" ; break;
  case 128: VAR_12 = "vme32" ; break;
  default: VAR_12 = "unknown?"; break;
 }

 FUNC_0(" pte=%08lx [%07lx %s %s]\n",
  VAR_10, (VAR_10 & VAR_4) << VAR_0, VAR_11, VAR_12);

}
