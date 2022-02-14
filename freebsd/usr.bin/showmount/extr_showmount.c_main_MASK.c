
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int strvised ;
struct grouplist {char* gr_name; struct grouplist* gr_next; } ;
struct exportslist {char* ex_dirp; struct exportslist* ex_next; struct grouplist* ex_groups; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 struct exportslist* VAR_9 ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int,char*,int,char*) ;
 int FUNC_8 (char const*,int ,int,int ,int ,char*,int ,char*) ;
 int VAR_12 ;
 int FUNC_9 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

int
FUNC_10(int VAR_16, char **VAR_17)
{
 char VAR_18[VAR_3 * 4 + 1];
 register struct exportslist *VAR_19;
 register struct grouplist *VAR_20;
 register int VAR_21 = 0, VAR_22 = 3;
 const char *VAR_23;
 int VAR_24, VAR_25, VAR_26;

 while ((VAR_24 = FUNC_4(VAR_16, VAR_17, "adEe13")) != -1)
  switch (VAR_24) {
  case 'a':
   if (VAR_12 == 0) {
    VAR_12 = 129;
    VAR_21 |= VAR_0;
   } else
    FUNC_9();
   break;
  case 'd':
   if (VAR_12 == 0) {
    VAR_12 = 128;
    VAR_21 |= VAR_0;
   } else
    FUNC_9();
   break;
  case 'E':
   VAR_21 |= VAR_2;
   break;
  case 'e':
   VAR_21 |= VAR_1;
   break;
  case '1':
   VAR_22 = 1;
   break;
  case '3':
   VAR_22 = 3;
   break;
  case '?':
  default:
   FUNC_9();
  }
 VAR_16 -= VAR_11;
 VAR_17 += VAR_11;

 if ((VAR_21 & VAR_2) != 0) {
  if ((VAR_21 & VAR_1) != 0)
   FUNC_2(1, "-E cannot be used with -e");
  if ((VAR_21 & VAR_0) != 0)
   FUNC_2(1, "-E cannot be used with -a or -d");
 }

 if (VAR_16 > 0)
  VAR_23 = *VAR_17;
 else
  VAR_23 = "localhost";

 if (VAR_21 == 0)
  VAR_21 = VAR_0;

 if (VAR_21 & VAR_0)
  if ((VAR_25 = FUNC_8(VAR_23, VAR_6, VAR_22,
   VAR_4, (xdrproc_t)VAR_15, (char *)0,
   (xdrproc_t)VAR_14, (char *)&VAR_10)) != 0) {
   FUNC_0(VAR_25);
   FUNC_2(1, "can't do mountdump rpc");
  }
 if (VAR_21 & (VAR_1 | VAR_2))
  if ((VAR_25 = FUNC_8(VAR_23, VAR_6, VAR_22,
   VAR_5, (xdrproc_t)VAR_15, (char *)0,
   (xdrproc_t)VAR_13, (char *)&VAR_9)) != 0) {
   FUNC_0(VAR_25);
   FUNC_2(1, "can't do exports rpc");
  }


 if (VAR_21 & VAR_0) {
  switch (VAR_12) {
  case 129:
   FUNC_6("All mount points on %s:\n", VAR_23);
   break;
  case 128:
   FUNC_6("Directories on %s:\n", VAR_23);
   break;
  default:
   FUNC_6("Hosts on %s:\n", VAR_23);
   break;
  }
  FUNC_5(VAR_10);
 }
 if (VAR_21 & VAR_1) {
  FUNC_6("Exports list on %s:\n", VAR_23);
  VAR_19 = VAR_9;
  while (VAR_19) {
   FUNC_6("%-34s ", VAR_19->ex_dirp);
   VAR_20 = VAR_19->ex_groups;
   if (VAR_20 == ((void*)0)) {
    FUNC_6("Everyone\n");
   } else {
    while (VAR_20) {
     FUNC_6("%s ", VAR_20->gr_name);
     VAR_20 = VAR_20->gr_next;
    }
    FUNC_6("\n");
   }
   VAR_19 = VAR_19->ex_next;
  }
 }
 if (VAR_21 & VAR_2) {
  VAR_19 = VAR_9;
  while (VAR_19) {
   VAR_26 = FUNC_7(VAR_18, sizeof(VAR_18),
       VAR_19->ex_dirp, VAR_7 | VAR_8, "\"'$");
   if (VAR_26 == -1)
    FUNC_1(1, "strsnvis");
   FUNC_6("%s\n", VAR_18);
   VAR_19 = VAR_19->ex_next;
  }
 }
 FUNC_3(0);
}
