
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userconf {int dummy; } ;
typedef int intmax_t ;
struct TYPE_2__ {int checkduplicate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ) ;
 struct userconf* FUNC_3 (char const*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (struct userconf*,int) ;
 int FUNC_6 (struct userconf*,char*,int ,char*,int,int,int,int) ;
 scalar_t__ FUNC_7 () ;
 char* VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct userconf*,int ,int ,char*) ;
 int VAR_9 ;
 size_t FUNC_11 (char*,char*) ;

int
FUNC_12(int VAR_10, char **VAR_11, char *VAR_12)
{
 struct userconf *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 const char *VAR_16 = ((void*)0);
 intmax_t VAR_17 = -1;
 int VAR_18, VAR_19, VAR_20 = -1;
 bool VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_21 = VAR_22 = VAR_23 = VAR_24 = VAR_25 = 0;

 if (VAR_12 != ((void*)0)) {
  if (VAR_12[FUNC_11(VAR_12, "0123456789")] == '\0')
   VAR_17 = FUNC_9(VAR_12, VAR_3);
  else
   VAR_14 = VAR_12;
 }

 while ((VAR_18 = FUNC_4(VAR_10, VAR_11, "C:qn:g:h:H:M:oNPY")) != -1) {
  switch (VAR_18) {
  case 'C':
   VAR_16 = VAR_8;
   break;
  case 'q':
   VAR_21 = 1;
   break;
  case 'n':
   VAR_14 = VAR_8;
   break;
  case 'g':
   VAR_17 = FUNC_9(VAR_8, VAR_3);
   break;
  case 'H':
   if (VAR_20 != -1)
    FUNC_1(VAR_2, "'-h' and '-H' are mutually "
        "exclusive options");
   VAR_20 = FUNC_8(VAR_8);
   VAR_22 = 1;
   if (VAR_20 == '-')
    FUNC_1(VAR_2, "-H expects a file descriptor");
   break;
  case 'h':
   if (VAR_20 != -1)
    FUNC_1(VAR_2, "'-h' and '-H' are mutually "
        "exclusive options");
   VAR_20 = FUNC_8(VAR_8);
   break;
  case 'M':
   VAR_15 = VAR_8;
   break;
  case 'o':
   VAR_7.checkduplicate = 0;
   break;
  case 'N':
   VAR_23 = 1;
   break;
  case 'P':
   VAR_24 = 1;
   break;
  case 'Y':
   VAR_25 = 1;
   break;
  }
 }

 if (VAR_21)
  FUNC_2(VAR_6, "w", VAR_9);
 if (VAR_14 == ((void*)0))
  FUNC_1(VAR_1, "group name required");
 if (FUNC_0(VAR_14) != ((void*)0))
  FUNC_1(VAR_1, "group name `%s' already exists", VAR_14);
 VAR_13 = FUNC_3(VAR_16);
 VAR_19 = FUNC_6(VAR_13, VAR_14, FUNC_5(VAR_13, VAR_17), VAR_15, VAR_20, VAR_23,
     VAR_24, VAR_22);
 if (VAR_25 && VAR_19 == VAR_0 && FUNC_7() == 0)
  FUNC_10(VAR_13, VAR_4, VAR_5, "NIS maps updated");

 return (VAR_19);
}
