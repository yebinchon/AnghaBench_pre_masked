
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct skiminfo {int fatalerr; int entries; } ;
struct printer {int spool_dir; int printer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct printer*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ FUNC_4 (struct printer*,int) ;
 int FUNC_5 (struct printer*) ;
 int FUNC_6 (struct printer*,int*) ;
 int FUNC_7 (struct printer*,struct stat*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 struct skiminfo* FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int ,struct stat*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (char*,int,...) ;

int
FUNC_15(int VAR_6, char **VAR_7)
{
 struct skiminfo *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct printer VAR_16, *VAR_17;

 VAR_12 = 0;
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_9 = ((void*)0);
 VAR_17 = &VAR_16;

 while ((VAR_10 = FUNC_3(VAR_6, VAR_7, "df:v")) != -1) {
  switch (VAR_10) {
  case 'd':
   VAR_12 = 1;
   break;

  case 'f':
   VAR_9 = FUNC_11(VAR_3);
   FUNC_8(VAR_9);
   break;

  case 'v':
   VAR_15++;
   break;

  default:
   FUNC_12();
  }
 }

 if (VAR_4 != VAR_6)
  FUNC_12();

 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_11(VAR_1);
 VAR_8 = FUNC_9(VAR_9, VAR_15);
 if (VAR_8 == ((void*)0)) {
  VAR_5 = 1;
  goto main_ret;
 } else if (VAR_8->fatalerr) {
  VAR_5 = VAR_8->fatalerr;
  goto main_ret;
 }





 VAR_13 = FUNC_1(VAR_17, &VAR_11);
 if (FUNC_4(VAR_17, VAR_11) && VAR_13)
  goto next;

 while (VAR_13) {
  struct stat VAR_18;

  VAR_14++;
  VAR_2 = 0;
  if (FUNC_10(VAR_17->spool_dir, &VAR_18) < 0) {
   if (VAR_2 == VAR_0 && VAR_12) {
    FUNC_5(VAR_17);
   } else {
    VAR_5++;
    FUNC_13("%s: %s", VAR_17->printer, VAR_17->spool_dir);
   }
  } else {
   FUNC_7(VAR_17, &VAR_18);
  }



next:
  VAR_13 = FUNC_6(VAR_17, &VAR_11);
  if (FUNC_4(VAR_17, VAR_11) && VAR_13)
   goto next;
 }

 FUNC_0();

 if (VAR_14 != VAR_8->entries) {
  FUNC_14("WARNING: found %d entries when skimming %s,",
      VAR_8->entries, VAR_9);
  FUNC_14("WARNING:  but only found %d queues to process!",
      VAR_14);
 }

main_ret:
 FUNC_2(VAR_9);
 return (VAR_5);
}
