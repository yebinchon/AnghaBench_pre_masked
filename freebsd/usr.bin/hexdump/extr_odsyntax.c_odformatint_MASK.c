
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_long ;


 int FUNC_0 (char**,char*,unsigned long,unsigned long,int,char*,char*,int,char) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char**,int) ;

__attribute__((used)) static const char *
FUNC_7(char VAR_1, const char *VAR_2)
{
 unsigned long long VAR_3;
 size_t VAR_4;
 int VAR_5;
 char *VAR_6, *VAR_7;

 VAR_4 = sizeof(int);
 switch (*VAR_2) {
 case 'C':
  VAR_4 = sizeof(char);
  VAR_2++;
  break;
 case 'I':
  VAR_4 = sizeof(int);
  VAR_2++;
  break;
 case 'L':
  VAR_4 = sizeof(long);
  VAR_2++;
  break;
 case 'S':
  VAR_4 = sizeof(short);
  VAR_2++;
  break;
 default:
  if (FUNC_4((unsigned char)*VAR_2)) {
   VAR_0 = 0;
   VAR_4 = (size_t)FUNC_6(VAR_2, &VAR_6, 10);
   if (VAR_0 != 0 || VAR_4 == 0)
    FUNC_2(1, "%s: invalid size", VAR_2);
   if (VAR_4 != sizeof(char) && VAR_4 != sizeof(short) &&
       VAR_4 != sizeof(int) && VAR_4 != sizeof(long))
    FUNC_2(1, "unsupported int size %lu",
        (u_long)VAR_4);
   VAR_2 = (const char *)VAR_6;
  }
 }







 VAR_3 = (1ULL << (8 * VAR_4)) - 1;
 VAR_5 = 0;
 while (VAR_3 != 0) {
  VAR_5++;
  VAR_3 >>= (VAR_1 == 'x') ? 4 : 3;
 }
 if (VAR_1 == 'd')
  VAR_5++;
 FUNC_0(&VAR_7, "%lu/%lu \"%*s%%%s%d%c\" \"\\n\"",
     16UL / (u_long)VAR_4, (u_long)VAR_4, (int)(4 * VAR_4 - VAR_5),
     "", (VAR_1 == 'd' || VAR_1 == 'u') ? "" : "0", VAR_5, VAR_1);
 if (VAR_7 == ((void*)0))
  FUNC_1(1, ((void*)0));
 FUNC_5(VAR_7);
 FUNC_3(VAR_7);

 return (VAR_2);
}
