
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_gid; int pw_name; } ;
struct group {int gr_name; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*) ;
 struct group* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int*,int*) ;
 int FUNC_4 (long,int*) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (char const*,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct passwd *VAR_1, int VAR_2)
{
 struct group *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 long VAR_8;
 gid_t *VAR_9;
 const char *VAR_10;

 VAR_8 = FUNC_7(VAR_0) + 1;
 if ((VAR_9 = FUNC_5(sizeof(gid_t) * (VAR_8))) == ((void*)0))
  FUNC_0(1, "malloc");

 if (VAR_1) {
  VAR_7 = VAR_8;
  (void) FUNC_3(VAR_1->pw_name, VAR_1->pw_gid, VAR_9, &VAR_7);
 } else {
  VAR_7 = FUNC_4(VAR_8, VAR_9);
 }
 VAR_10 = VAR_2 ? "%s" : "%u";
 for (VAR_6 = -1, VAR_4 = 0; VAR_4 < VAR_7; ++VAR_4) {
  if (VAR_6 == (VAR_5 = VAR_9[VAR_4]))
   continue;
  if (VAR_2) {
   if ((VAR_3 = FUNC_2(VAR_5)))
    (void)FUNC_6(VAR_10, VAR_3->gr_name);
   else
    (void)FUNC_6(*VAR_10 == ' ' ? " %u" : "%u",
        VAR_5);
   VAR_10 = " %s";
  } else {
   (void)FUNC_6(VAR_10, VAR_5);
   VAR_10 = " %u";
  }
  VAR_6 = VAR_5;
 }
 (void)FUNC_6("\n");
 FUNC_1(VAR_9);
}
