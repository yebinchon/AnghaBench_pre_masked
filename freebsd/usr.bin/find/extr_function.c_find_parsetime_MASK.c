
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ PLAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char const*,char*,...) ;
 long long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static long long
FUNC_2(PLAN *VAR_4, const char *VAR_5, char *VAR_6)
{
 long long VAR_7, VAR_8;
 char *VAR_9, *VAR_10;


 VAR_9 = VAR_6;
 switch (*VAR_9) {
 case '+':
  ++VAR_9;
  VAR_4->flags |= VAR_2;
  break;
 case '-':
  ++VAR_9;
  VAR_4->flags |= VAR_3;
  break;
 default:
  VAR_4->flags |= VAR_0;
  break;
 }

 VAR_8 = FUNC_1(VAR_9, &VAR_10, 10);
 if (VAR_8 == 0 && VAR_10 == VAR_9) {
  FUNC_0(1, "%s: %s: illegal time value", VAR_5, VAR_6);

 }
 if (*VAR_10 == '\0')
  return VAR_8;


 VAR_7 = 0;
 for (;;) {
  switch(*VAR_10) {
  case 's':
   VAR_7 += VAR_8;
   break;
  case 'm':
   VAR_7 += VAR_8 * 60;
   break;
  case 'h':
   VAR_7 += VAR_8 * 3600;
   break;
  case 'd':
   VAR_7 += VAR_8 * 86400;
   break;
  case 'w':
   VAR_7 += VAR_8 * 604800;
   break;
  default:
   FUNC_0(1, "%s: %s: bad unit '%c'", VAR_5, VAR_6, *VAR_10);

  }
  VAR_9 = VAR_10 + 1;
  if (*VAR_9 == '\0')
   break;
  VAR_8 = FUNC_1(VAR_9, &VAR_10, 10);
  if (VAR_8 == 0 && VAR_10 == VAR_9) {
   FUNC_0(1, "%s: %s: illegal time value", VAR_5, VAR_6);

  }
  if (*VAR_10 == '\0') {
   FUNC_0(1, "%s: %s: missing trailing unit", VAR_5, VAR_6);

  }
 }
 VAR_4->flags |= VAR_1;
 return VAR_7;
}
