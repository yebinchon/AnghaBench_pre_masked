
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wfile ;
struct s_subst {int n; int p; int wfd; int icase; int * wfile; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_9 ;
 int FUNC_2 (int,char*,int ,int ,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,int,int ) ;
 int * FUNC_4 (char*) ;
 unsigned long FUNC_5 (char*,char**,int) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static char *
FUNC_7(char *VAR_12, struct s_subst *VAR_13)
{
 int VAR_14;
 unsigned long VAR_15;
 char VAR_16[VAR_7 + 1], *VAR_17, *VAR_18;

 VAR_13->n = 1;
 VAR_13->p = 0;
 VAR_13->wfile = ((void*)0);
 VAR_13->wfd = -1;
 VAR_13->icase = 0;
 for (VAR_14 = 0;;) {
  FUNC_0();
  switch (*VAR_12) {
  case 'g':
   if (VAR_14)
    FUNC_2(1,
"%lu: %s: more than one number or 'g' in substitute flags", VAR_11, VAR_10);
   VAR_14 = 1;
   VAR_13->n = 0;
   break;
  case '\0':
  case '\n':
  case ';':
   return (VAR_12);
  case 'p':
   VAR_13->p = 1;
   break;
  case 'i':
  case 'I':
   VAR_13->icase = 1;
   break;
  case '1': case '2': case '3':
  case '4': case '5': case '6':
  case '7': case '8': case '9':
   if (VAR_14)
    FUNC_2(1,
"%lu: %s: more than one number or 'g' in substitute flags", VAR_11, VAR_10);
   VAR_14 = 1;
   VAR_9 = 0;
   VAR_15 = FUNC_5(VAR_12, &VAR_12, 10);
   if (VAR_9 == VAR_1 || VAR_15 > VAR_2)
    FUNC_2(1,
"%lu: %s: overflow in the 'N' substitute flag", VAR_11, VAR_10);
   VAR_13->n = VAR_15;
   VAR_12--;
   break;
  case 'w':
   VAR_12++;






   FUNC_0();
   VAR_17 = VAR_16;
   VAR_18 = VAR_16 + sizeof(VAR_16) - 1;
   while (*VAR_12) {
    if (*VAR_12 == '\n')
     break;
    if (VAR_17 >= VAR_18)
     FUNC_1(1, "wfile too long");
    *VAR_17++ = *VAR_12++;
   }
   *VAR_17 = '\0';
   if (VAR_17 == VAR_16)
    FUNC_2(1, "%lu: %s: no wfile specified", VAR_11, VAR_10);
   VAR_13->wfile = FUNC_4(VAR_16);
   if (!VAR_8 && (VAR_13->wfd = FUNC_3(VAR_16,
       VAR_6|VAR_3|VAR_4|VAR_5,
       VAR_0)) == -1)
    FUNC_1(1, "%s", VAR_16);
   return (VAR_12);
  default:
   FUNC_2(1, "%lu: %s: bad flag in substitute command: '%c'",
     VAR_11, VAR_10, *VAR_12);
   break;
  }
  VAR_12++;
 }
}
