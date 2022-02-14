
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct userconf {int dummy; } ;
struct group {char* gr_name; scalar_t__ gr_gid; int * gr_mem; } ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct group* FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,struct group*) ;
 int FUNC_2 (struct group*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int ) ;
 struct userconf* FUNC_6 (char const*) ;
 struct group* FUNC_7 (char*,scalar_t__,int) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (struct group**,char*) ;
 int FUNC_10 (struct group*,int,int,int) ;
 scalar_t__ FUNC_11 () ;
 char* VAR_8 ;
 int FUNC_12 (struct group*,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,int ) ;
 char* FUNC_15 (char*,int ) ;
 int FUNC_16 (struct userconf*,int ,int ,char*,...) ;
 int VAR_9 ;
 size_t FUNC_17 (char*,char*) ;

int
FUNC_18(int VAR_10, char **VAR_11, char *VAR_12)
{
 struct userconf *VAR_13;
 struct group *VAR_14 = ((void*)0);
 const char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);
 intmax_t VAR_21 = -1;
 int VAR_22, VAR_23, VAR_24 = -1;
 bool VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_25 = VAR_26 = VAR_27 = VAR_28 = VAR_29 = 0;

 if (VAR_12 != ((void*)0)) {
  if (VAR_12[FUNC_17(VAR_12, "0123456789")] == '\0')
   VAR_21 = FUNC_14(VAR_12, VAR_4);
  else
   VAR_20 = VAR_12;
 }

 while ((VAR_22 = FUNC_8(VAR_10, VAR_11, "C:qn:d:g:l:h:H:M:m:NPY")) != -1) {
  switch (VAR_22) {
  case 'C':
   VAR_15 = VAR_8;
   break;
  case 'q':
   VAR_25 = 1;
   break;
  case 'n':
   VAR_20 = VAR_8;
   break;
  case 'g':
   VAR_21 = FUNC_14(VAR_8, VAR_4);
   break;
  case 'd':
   VAR_16 = VAR_8;
   break;
  case 'l':
   VAR_19 = VAR_8;
   break;
  case 'H':
   if (VAR_24 != -1)
    FUNC_4(VAR_3, "'-h' and '-H' are mutually "
        "exclusive options");
   VAR_24 = FUNC_13(VAR_8);
   VAR_29 = 1;
   if (VAR_24 == '-')
    FUNC_4(VAR_3, "-H expects a file descriptor");
   break;
  case 'h':
   if (VAR_24 != -1)
    FUNC_4(VAR_3, "'-h' and '-H' are mutually "
        "exclusive options");
   VAR_24 = FUNC_13(VAR_8);
   break;
  case 'M':
   VAR_17 = VAR_8;
   break;
  case 'm':
   VAR_18 = VAR_8;
   break;
  case 'N':
   VAR_27 = 1;
   break;
  case 'P':
   VAR_26 = 1;
   break;
  case 'Y':
   VAR_28 = 1;
   break;
  }
 }
 if (VAR_25)
  FUNC_5(VAR_7, "w", VAR_9);
 VAR_13 = FUNC_6(VAR_15);
 VAR_14 = FUNC_7(VAR_20, VAR_21, 1);
 if (VAR_20 == ((void*)0))
  VAR_20 = VAR_14->gr_name;
 if (VAR_21 > 0)
  VAR_14->gr_gid = VAR_21;

 if (VAR_19 != ((void*)0))
  VAR_14->gr_name = FUNC_15(VAR_19, 0);

 FUNC_10(VAR_14, 1, VAR_24, VAR_29);







 if (VAR_17) {
  VAR_14->gr_mem = ((void*)0);
  FUNC_9(&VAR_14, VAR_17);
 } else if (VAR_16) {
  FUNC_2(VAR_14, VAR_16);
 } else if (VAR_18) {
  FUNC_9(&VAR_14, VAR_18);
 }

 if (VAR_27) {
  FUNC_12(VAR_14, VAR_26);
  return (VAR_0);
 }

 if ((VAR_23 = FUNC_1(VAR_20, VAR_14)) != 0) {
  if (VAR_23 == -1)
   FUNC_4(VAR_1, "group '%s' not available (NIS?)",
       VAR_14->gr_name);
  else
   FUNC_3(VAR_1, "group update");
 }

 if (VAR_19)
  VAR_20 = VAR_19;


 if ((VAR_14 = FUNC_0(VAR_20)) == ((void*)0))
  FUNC_4(VAR_2, "group disappeared during update");

 FUNC_16(VAR_13, VAR_5, VAR_6, "%s(%ju)", VAR_14->gr_name,
     (uintmax_t)VAR_14->gr_gid);

 if (VAR_28 && FUNC_11() == 0)
  FUNC_16(VAR_13, VAR_5, VAR_6, "NIS maps updated");

 return (VAR_0);
}
