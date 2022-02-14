
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int tmpname ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; } ;
struct stat {scalar_t__ st_size; } ;
struct passwd {char* pw_name; } ;
typedef int lbuf ;
typedef int hostname ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int * FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int *,char*,char const*,...) ;
 int FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (int *,int,size_t,int *) ;
 int FUNC_7 (char const*,char*,int ) ;
 scalar_t__ FUNC_8 (int,struct stat*) ;
 int FUNC_9 (char*,int) ;
 char* FUNC_10 () ;
 struct passwd* FUNC_11 (int ) ;
 int FUNC_12 () ;
 struct tm* FUNC_13 (int *) ;
 int * FUNC_14 (size_t) ;
 int * VAR_3 ;
 int FUNC_15 (char*) ;
 char* VAR_4 ;
 int FUNC_16 (char,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int,char*,char*) ;
 int VAR_5 ;
 int FUNC_19 (int *) ;
 char* FUNC_20 (int ) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void
FUNC_22(const char *VAR_6)
{
 struct tm *VAR_7;
 struct passwd *VAR_8;
 struct stat VAR_9;
 time_t VAR_10;
 FILE *VAR_11;
 int VAR_12;
 size_t VAR_13;
 char *VAR_14, VAR_15[VAR_0], VAR_16[256], VAR_17[64];
 const char *VAR_18;

 FUNC_18(VAR_17, sizeof(VAR_17), "%s/wall.XXXXXX", VAR_2);
 if ((VAR_12 = FUNC_15(VAR_17)) == -1 || (VAR_11 = FUNC_2(VAR_12, "r+")) == ((void*)0))
  FUNC_1(1, "can't open temporary file");
 FUNC_21(VAR_17);

 VAR_18 = FUNC_10();
 if (!VAR_18) {
  VAR_8 = FUNC_11(FUNC_12());
  VAR_18 = VAR_8 ? VAR_8->pw_name : "???";
 }
 FUNC_9(VAR_15, sizeof(VAR_15));
 FUNC_19(&VAR_10);
 VAR_7 = FUNC_13(&VAR_10);
 FUNC_4(VAR_11, "Remote Broadcast Message from %s@%s\n",
     VAR_18, VAR_15);
 VAR_14 = FUNC_20(VAR_1);
 if (VAR_14 == ((void*)0))
  VAR_14 = VAR_4;
 FUNC_4(VAR_11, "        (%s) at %d:%02d ...\n", VAR_14,
     VAR_7->tm_hour, VAR_7->tm_min);

 FUNC_16('\n', VAR_11);

 if (VAR_6 && !(FUNC_7(VAR_6, "r", VAR_5)))
  FUNC_1(1, "can't read %s", VAR_6);
 while (FUNC_3(VAR_16, sizeof(VAR_16), VAR_5))
  FUNC_5(VAR_16, VAR_11);
 FUNC_17(VAR_11);

 if (FUNC_8(VAR_12, &VAR_9))
  FUNC_1(1, "can't stat temporary file");
 VAR_13 = (size_t)VAR_9.st_size;
 VAR_3 = FUNC_14(VAR_13);
 if (VAR_3 == ((void*)0))
  FUNC_1(1, "out of memory");
 if (FUNC_6(VAR_3, sizeof(*VAR_3), VAR_13, VAR_11) != (u_int)VAR_13)
  FUNC_1(1, "can't read temporary file");
 FUNC_0(VAR_12);
}
