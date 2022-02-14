
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wphone ;
typedef int uname ;
typedef char* uintmax_t ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct passwd {char* pw_name; scalar_t__ pw_expire; scalar_t__ pw_change; char* pw_dir; char* pw_class; char* pw_shell; scalar_t__ pw_gid; scalar_t__ pw_uid; int * pw_gecos; } ;
struct group {char* gr_name; int ** gr_mem; } ;
typedef int office ;
typedef int hphone ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct group* FUNC_1 () ;
 struct group* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 struct tm* FUNC_5 (scalar_t__*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,...) ;
 char* FUNC_8 (struct passwd*) ;
 char* FUNC_9 (struct passwd*) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int FUNC_12 (char*,int,char*,struct tm*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (int *,char*) ;
 scalar_t__ FUNC_16 (unsigned char) ;

__attribute__((used)) static int
FUNC_17(struct passwd * VAR_1, bool VAR_2, bool VAR_3)
{
 int VAR_4;
 char *VAR_5;
 struct group *VAR_6 = FUNC_2(VAR_1->pw_gid);
 char VAR_7[60] = "User &", VAR_8[60] = "[None]",
   VAR_9[60] = "[None]", VAR_10[60] = "[None]";
 char VAR_11[32] = "[None]", VAR_12[32] = "[None]";
 struct tm * VAR_13;

 if (!VAR_2) {
  VAR_5 = VAR_3 ? FUNC_9(VAR_1) : FUNC_8(VAR_1);
  FUNC_7("%s\n", VAR_5);
  FUNC_4(VAR_5);
  return (VAR_0);
 }

 if ((VAR_5 = FUNC_15(VAR_1->pw_gecos, ",")) != ((void*)0)) {
  FUNC_13(VAR_7, VAR_5, sizeof(VAR_7));
  if ((VAR_5 = FUNC_15(((void*)0), ",")) != ((void*)0)) {
   FUNC_13(VAR_8, VAR_5, sizeof(VAR_8));
   if ((VAR_5 = FUNC_15(((void*)0), ",")) != ((void*)0)) {
    FUNC_13(VAR_9, VAR_5, sizeof(VAR_9));
    if ((VAR_5 = FUNC_15(((void*)0), "")) != ((void*)0)) {
     FUNC_13(VAR_10, VAR_5, sizeof(VAR_10));
    }
   }
  }
 }



 if ((VAR_5 = FUNC_10(VAR_7, '&')) != ((void*)0)) {
  int VAR_14 = FUNC_14(VAR_1->pw_name);
  int VAR_15 = FUNC_14(VAR_5);

  FUNC_6(VAR_5 + VAR_14, VAR_5 + 1, VAR_15);
  FUNC_6(VAR_5, VAR_1->pw_name, VAR_14);
  *VAR_5 = (char) FUNC_16((unsigned char)*VAR_5);
 }
 if (VAR_1->pw_expire > (time_t)0 && (VAR_13 = FUNC_5(&VAR_1->pw_expire)) != ((void*)0))
  FUNC_12(VAR_11, sizeof VAR_11, "%c", VAR_13);
 if (VAR_1->pw_change > (time_t)0 && (VAR_13 = FUNC_5(&VAR_1->pw_change)) != ((void*)0))
  FUNC_12(VAR_12, sizeof VAR_12, "%c", VAR_13);
 FUNC_7("Login Name: %-15s   #%-12ju Group: %-15s   #%ju\n"
        " Full Name: %s\n"
        "      Home: %-26.26s      Class: %s\n"
        "     Shell: %-26.26s     Office: %s\n"
        "Work Phone: %-26.26s Home Phone: %s\n"
        "Acc Expire: %-26.26s Pwd Expire: %s\n",
        VAR_1->pw_name, (uintmax_t)VAR_1->pw_uid,
        VAR_6 ? VAR_6->gr_name : "(invalid)", (uintmax_t)VAR_1->pw_gid,
        VAR_7, VAR_1->pw_dir, VAR_1->pw_class,
        VAR_1->pw_shell, VAR_8, VAR_9, VAR_10,
        VAR_11, VAR_12);
        FUNC_3();
 VAR_4 = 0;
 while ((VAR_6=FUNC_1()) != ((void*)0)) {
  int VAR_16 = 0;
  if (VAR_6->gr_mem != ((void*)0)) {
   while (VAR_6->gr_mem[VAR_16] != ((void*)0)) {
    if (FUNC_11(VAR_6->gr_mem[VAR_16], VAR_1->pw_name)==0) {
     FUNC_7(VAR_4++ == 0 ? "    Groups: %s" : ",%s", VAR_6->gr_name);
     break;
    }
    ++VAR_16;
   }
  }
 }
 FUNC_0();
 FUNC_7("%s", VAR_4 ? "\n" : "");
 return (VAR_0);
}
