
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; int pw_gid; char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct group* FUNC_5 (int) ;
 int FUNC_6 (char*,int,int*,int*) ;
 int FUNC_7 (long,int*) ;
 struct passwd* FUNC_8 (int) ;
 int FUNC_9 () ;
 int* FUNC_10 (int) ;
 int FUNC_11 (char const*,...) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct passwd *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct group *VAR_5;
 gid_t VAR_6, VAR_7, VAR_8;
 uid_t VAR_9, VAR_10;
 int VAR_11, VAR_12;
 long VAR_13;
 gid_t *VAR_14;
 const char *VAR_15;

 if (VAR_1 != ((void*)0)) {
  VAR_9 = VAR_1->pw_uid;
  VAR_6 = VAR_1->pw_gid;
 }
 else {
  VAR_9 = FUNC_9();
  VAR_6 = FUNC_4();
 }

 VAR_13 = FUNC_12(VAR_0) + 1;
 if ((VAR_14 = FUNC_10(sizeof(gid_t) * VAR_13)) == ((void*)0))
  FUNC_0(1, "malloc");

 if (VAR_2 && VAR_1 != ((void*)0)) {
  VAR_12 = VAR_13;
  FUNC_6(VAR_1->pw_name, VAR_6, VAR_14, &VAR_12);
 }
 else {
  VAR_12 = FUNC_7(VAR_13, VAR_14);
 }

 if (VAR_1 != ((void*)0))
  FUNC_11("uid=%u(%s)", VAR_9, VAR_1->pw_name);
 else
  FUNC_11("uid=%u", FUNC_9());
 FUNC_11(" gid=%u", VAR_6);
 if ((VAR_5 = FUNC_5(VAR_6)))
  (void)FUNC_11("(%s)", VAR_5->gr_name);
 if (VAR_3 && (VAR_10 = FUNC_3()) != VAR_9) {
  (void)FUNC_11(" euid=%u", VAR_10);
  if ((VAR_1 = FUNC_8(VAR_10)))
   (void)FUNC_11("(%s)", VAR_1->pw_name);
 }
 if (VAR_4 && (VAR_7 = FUNC_2()) != VAR_6) {
  (void)FUNC_11(" egid=%u", VAR_7);
  if ((VAR_5 = FUNC_5(VAR_7)))
   (void)FUNC_11("(%s)", VAR_5->gr_name);
 }
 VAR_15 = " groups=%u";
 for (VAR_8 = -1, VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  if (VAR_8 == (VAR_6 = VAR_14[VAR_11]))
   continue;
  FUNC_11(VAR_15, VAR_6);
  VAR_15 = ",%u";
  if ((VAR_5 = FUNC_5(VAR_6)))
   FUNC_11("(%s)", VAR_5->gr_name);
  VAR_8 = VAR_6;
 }
 FUNC_11("\n");
 FUNC_1(VAR_14);
}
