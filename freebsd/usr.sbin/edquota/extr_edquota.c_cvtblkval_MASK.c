
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,...) ;

uint64_t
FUNC_2(uint64_t VAR_0, char VAR_1, const char *VAR_2)
{

 switch(VAR_1) {
 case 'B':
 case 'b':
  VAR_0 = FUNC_0(VAR_0);
  break;
 case '\0':
 case ',':
 case ')':
 case 'K':
 case 'k':
  VAR_0 *= FUNC_0(1024);
  break;
 case 'M':
 case 'm':
  VAR_0 *= FUNC_0(1048576);
  break;
 case 'G':
 case 'g':
  VAR_0 *= FUNC_0(1073741824);
  break;
 case 'T':
 case 't':
  VAR_0 *= FUNC_0(1099511627776);
  break;
 case 'P':
 case 'p':
  VAR_0 *= FUNC_0(1125899906842624);
  break;
 case 'E':
 case 'e':
  VAR_0 *= FUNC_0(1152921504606846976);
  break;
 case ' ':
  FUNC_1(2, "No space permitted between value and units for %s\n",
      VAR_2);
  break;
 default:
  FUNC_1(2, "%ju%c: unknown units for %s, specify "
      "none, K, M, G, T, P, or E\n",
      (uintmax_t)VAR_0, VAR_1, VAR_2);
  break;
 }
 return (VAR_0);
}
