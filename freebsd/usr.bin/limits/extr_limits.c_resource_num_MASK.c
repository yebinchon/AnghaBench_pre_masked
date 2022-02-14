
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long rlim_t ;
 long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 long FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,char const*) ;

__attribute__((used)) static rlim_t
FUNC_4(int VAR_2, int VAR_3, const char *VAR_4)
{
    rlim_t VAR_5 = VAR_0;

    if (VAR_4 != ((void*)0) &&
 !(FUNC_0(VAR_4, "inf") == 0 ||
   FUNC_0(VAR_4, "infinity") == 0 ||
   FUNC_0(VAR_4, "unlimit") == 0 ||
   FUNC_0(VAR_4, "unlimited") == 0)) {
 const char * VAR_6 = VAR_4;
 char *VAR_7;

 switch (VAR_2) {
 case 141:
     VAR_1 = 0;
     VAR_5 = 0;
     while (*VAR_6) {
  rlim_t VAR_8 = FUNC_1(VAR_6, &VAR_7, 0);
  if (VAR_7 == ((void*)0) || VAR_7 == VAR_6 || VAR_1)
      break;
  switch (*VAR_7++) {
  case 0:
      VAR_7--;
  default:
  case 's': case 'S':
      break;
  case 'm': case 'M':
      VAR_8 *= 60L;
      break;
  case 'h': case 'H':
      VAR_8 *= (60L * 60L);
      break;
  case 'd': case 'D':
      VAR_8 *= (60L * 60L * 24L);
      break;
  case 'w': case 'W':
      VAR_8 *= (60L * 60L * 24L * 7L);
      break;
  case 'y': case 'Y':
      VAR_8 *= (60L * 60L * 24L * 365L);
  }
  VAR_6 = VAR_7;
  VAR_5 += VAR_8;
     }
     break;
 case 139:
 case 140:
 case 131:
 case 142:
 case 133:
 case 137:
 case 132:
 case 128:
 case 130:
     VAR_1 = 0;
     VAR_5 = 0;
     while (*VAR_6) {
  rlim_t VAR_9, VAR_10 = FUNC_1(VAR_6, &VAR_7, 0);
  if (VAR_7 == ((void*)0) || VAR_7 == VAR_6 || VAR_1)
      break;
  switch (*VAR_7++) {
  case 0:
      VAR_7--;
  default:
      VAR_9 = 1;
      break;
  case 'b': case 'B':
      VAR_9 = 512;
      break;
  case 'k': case 'K':
      VAR_9 = 1024;
      break;
  case 'm': case 'M':
      VAR_9 = 1024 * 1024;
      break;
  case 'g': case 'G':
      VAR_9 = 1024 * 1024 * 1024;
      break;
  case 't': case 'T':
      VAR_9 = 1024LL * 1024LL * 1024LL * 1024LL;
      break;
  }
  VAR_6 = VAR_7;
  VAR_5 += (VAR_10 * VAR_9);
     }
     break;
 case 135:
 case 136:
 case 134:
 case 138:
 case 129:
     VAR_5 = FUNC_1(VAR_6, &VAR_7, 0);
     VAR_6 = VAR_7;
     break;
 }
 if (*VAR_6) {
     FUNC_3("invalid value -%c `%s'", VAR_3, VAR_4);
     FUNC_2();
 }
    }
    return VAR_5;
}
