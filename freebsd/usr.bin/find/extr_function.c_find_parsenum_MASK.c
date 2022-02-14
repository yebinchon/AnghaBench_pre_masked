
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
 int FUNC_0 (int,char*,char const*,char*) ;
 long long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static long long
FUNC_2(PLAN *VAR_3, const char *VAR_4, char *VAR_5, char *VAR_6)
{
 long long VAR_7;
 char *VAR_8, *VAR_9;


 VAR_9 = VAR_5;
 switch (*VAR_9) {
 case '+':
  ++VAR_9;
  VAR_3->flags |= VAR_1;
  break;
 case '-':
  ++VAR_9;
  VAR_3->flags |= VAR_2;
  break;
 default:
  VAR_3->flags |= VAR_0;
  break;
 }






 VAR_7 = FUNC_1(VAR_9, &VAR_8, 10);
 if (VAR_7 == 0 && VAR_8 == VAR_9)
  FUNC_0(1, "%s: %s: illegal numeric value", VAR_4, VAR_5);
 if (VAR_8[0] && VAR_6 == ((void*)0))
  FUNC_0(1, "%s: %s: illegal trailing character", VAR_4, VAR_5);
 if (VAR_6)
  *VAR_6 = VAR_8[0];
 return VAR_7;
}
