
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct group* FUNC_4 (int) ;
 char* FUNC_5 () ;
 struct passwd* FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (struct passwd*,int) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(struct passwd *VAR_0)
{
 struct group *VAR_1;
 u_int VAR_2, VAR_3;
 char *VAR_4;

 if (VAR_0) {
  (void)FUNC_9("uid\t%s\n", VAR_0->pw_name);
  (void)FUNC_9("groups\t");
  FUNC_8(VAR_0, 1);
 } else {
  if ((VAR_4 = FUNC_5()) == ((void*)0))
   FUNC_0(1, "getlogin");

  VAR_0 = FUNC_6(VAR_3 = FUNC_7());
  if (VAR_0 == ((void*)0) || FUNC_10(VAR_4, VAR_0->pw_name))
   (void)FUNC_9("login\t%s\n", VAR_4);
  if (VAR_0)
   (void)FUNC_9("uid\t%s\n", VAR_0->pw_name);
  else
   (void)FUNC_9("uid\t%u\n", VAR_3);

  if ((VAR_2 = FUNC_2()) != VAR_3) {
   if ((VAR_0 = FUNC_6(VAR_2)))
    (void)FUNC_9("euid\t%s\n", VAR_0->pw_name);
   else
    (void)FUNC_9("euid\t%u\n", VAR_2);
  }
  if ((VAR_3 = FUNC_3()) != (VAR_2 = FUNC_1())) {
   if ((VAR_1 = FUNC_4(VAR_3)))
    (void)FUNC_9("rgid\t%s\n", VAR_1->gr_name);
   else
    (void)FUNC_9("rgid\t%u\n", VAR_3);
  }
  (void)FUNC_9("groups\t");
  FUNC_8(((void*)0), 1);
 }
}
