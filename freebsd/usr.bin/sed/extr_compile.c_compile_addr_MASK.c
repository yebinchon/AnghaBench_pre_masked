
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l; int * r; } ;
struct s_addr {scalar_t__ type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*,char*,int ) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_7, struct s_addr *VAR_8)
{
 char *VAR_9, VAR_10[VAR_4 + 1];
 int VAR_11;

 VAR_11 = 0;

 VAR_8->type = 0;
 switch (*VAR_7) {
 case '\\':
  ++VAR_7;

 case '/':
  VAR_7 = FUNC_0(VAR_7, VAR_10, 0);
  if (VAR_7 == ((void*)0))
   FUNC_2(1, "%lu: %s: unterminated regular expression", VAR_6, VAR_5);

  if (*VAR_7 == 'I') {
   VAR_11 = 1;
   VAR_7++;
  }
  if (*VAR_10 == '\0')
   VAR_8->u.r = ((void*)0);
  else
   VAR_8->u.r = FUNC_1(VAR_10, VAR_11);
  VAR_8->type = VAR_2;
  return (VAR_7);

 case '$':
  VAR_8->type = VAR_0;
  return (VAR_7 + 1);

 case '+':
  VAR_8->type = VAR_3;
  VAR_7++;


 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':
  if (VAR_8->type == 0)
   VAR_8->type = VAR_1;
  VAR_8->u.l = FUNC_3(VAR_7, &VAR_9, 10);
  return (VAR_9);
 default:
  FUNC_2(1, "%lu: %s: expected context address", VAR_6, VAR_5);
  return (((void*)0));
 }
}
