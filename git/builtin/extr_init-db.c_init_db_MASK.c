
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {int have_repository; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char const*,char*) ;
 int FUNC_13 (char const*) ;
 char* FUNC_14 (char const*,int) ;
 int FUNC_15 (char const*,int ) ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_18 (char const*,struct stat*) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (char*,int,char*,int) ;

int FUNC_21(const char *VAR_9, const char *VAR_10,
     const char *VAR_11, unsigned int VAR_12)
{
 int VAR_13;
 int VAR_14 = VAR_12 & VAR_0;
 char *VAR_15 = FUNC_14(VAR_9, 1);

 if (VAR_10) {
  struct stat VAR_16;

  if (!VAR_14 && !FUNC_18(VAR_9, &VAR_16))
   FUNC_5(FUNC_1("%s already exists"), VAR_9);

  if (!VAR_14 && !FUNC_18(VAR_10, &VAR_16))
   FUNC_5(FUNC_1("%s already exists"), VAR_10);

  FUNC_17(FUNC_13(VAR_10));
  VAR_9 = FUNC_7();
  FUNC_16(VAR_9, VAR_15);
 }
 else {
  FUNC_17(FUNC_13(VAR_9));
  VAR_9 = FUNC_7();
 }
 VAR_8->have_repository = 1;


 FUNC_9(VAR_6, ((void*)0));

 FUNC_15(VAR_9, 0);

 VAR_7 = FUNC_11();






 FUNC_2();

 VAR_13 = FUNC_3(VAR_11, VAR_15);

 FUNC_4();

 if (FUNC_8()) {
  char VAR_17[10];






  if (FUNC_8() < 0)

   FUNC_20(VAR_17, sizeof(VAR_17), "0%o", -FUNC_8());
  else if (FUNC_8() == VAR_5)
   FUNC_20(VAR_17, sizeof(VAR_17), "%d", VAR_3);
  else if (FUNC_8() == VAR_4)
   FUNC_20(VAR_17, sizeof(VAR_17), "%d", VAR_2);
  else
   FUNC_0("invalid value for shared_repository");
  FUNC_10("core.sharedrepository", VAR_17);
  FUNC_10("receive.denyNonFastforwards", "true");
 }

 if (!(VAR_12 & VAR_1)) {
  int VAR_18 = FUNC_19(VAR_9);

  if (VAR_13)
   FUNC_12(FUNC_8()
          ? FUNC_1("Reinitialized existing shared Git repository in %s%s\n")
          : FUNC_1("Reinitialized existing Git repository in %s%s\n"),
          VAR_9, VAR_18 && VAR_9[VAR_18-1] != '/' ? "/" : "");
  else
   FUNC_12(FUNC_8()
          ? FUNC_1("Initialized empty shared Git repository in %s%s\n")
          : FUNC_1("Initialized empty Git repository in %s%s\n"),
          VAR_9, VAR_18 && VAR_9[VAR_18-1] != '/' ? "/" : "");
 }

 FUNC_6(VAR_15);
 return 0;
}
