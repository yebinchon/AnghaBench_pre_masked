
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;


 int FUNC_0 (int,char*,char const*,...) ;

uint64_t
FUNC_1(uint64_t VAR_0, char VAR_1, const char *VAR_2)
{

 switch(VAR_1) {
 case 'B':
 case 'b':
 case '\0':
 case ',':
 case ')':
  break;
 case 'K':
 case 'k':
  VAR_0 *= 1000;
  break;
 case 'M':
 case 'm':
  VAR_0 *= 1000000;
  break;
 case 'G':
 case 'g':
  VAR_0 *= 1000000000;
  break;
 case 'T':
 case 't':
  VAR_0 *= 1000000000000;
  break;
 case 'P':
 case 'p':
  VAR_0 *= 1000000000000000;
  break;
 case 'E':
 case 'e':
  VAR_0 *= 1000000000000000000;
  break;
 case ' ':
  FUNC_0(2, "No space permitted between value and units for %s\n",
      VAR_2);
  break;
 default:
  FUNC_0(2, "%ju%c: unknown units for %s, specify "
      "none, K, M, G, T, P, or E\n",
      (uintmax_t)VAR_0, VAR_1, VAR_2);
  break;
 }
 return (VAR_0);
}
