
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct userconf {int dummy; } ;
struct group {int gr_gid; int ** gr_mem; } ;
typedef int intmax_t ;
typedef int gid_t ;


 int FUNC_0 () ;
 struct group* FUNC_1 (int) ;
 struct group* FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (struct userconf*,char*,int,int *,int,int,int,int) ;
 int FUNC_5 (char*,int ) ;
 void* FUNC_6 (struct userconf*,int) ;

__attribute__((used)) static uid_t
FUNC_7(struct userconf *VAR_1, char *VAR_2, char *VAR_3, gid_t VAR_4, bool VAR_5)
{
 struct group *VAR_6;
 gid_t VAR_7 = (uid_t) - 1;




 FUNC_3();
 if (VAR_2) {
  if ((VAR_6 = FUNC_2(VAR_2)) == ((void*)0)) {
   VAR_7 = FUNC_5(VAR_2, VAR_0);
   VAR_6 = FUNC_1(VAR_7);
  }
  VAR_7 = VAR_6->gr_gid;
 } else if ((VAR_6 = FUNC_2(VAR_3)) != ((void*)0) &&
     (VAR_6->gr_mem == ((void*)0) || VAR_6->gr_mem[0] == ((void*)0))) {
  VAR_7 = VAR_6->gr_gid;
 } else {
  intmax_t VAR_8 = -1;
  if (FUNC_1(VAR_4) == ((void*)0))
   VAR_8 = VAR_4;
  if (VAR_5) {
   VAR_7 = FUNC_6(VAR_1, 1);
  } else {
   if (VAR_8 == -1)
    VAR_8 = FUNC_6(VAR_1, 1);
   FUNC_4(VAR_1, VAR_3, VAR_8, ((void*)0), -1, 0, 0, 0);
   if ((VAR_6 = FUNC_2(VAR_3)) != ((void*)0))
    VAR_7 = VAR_6->gr_gid;
  }
 }
 FUNC_0();
 return (VAR_7);
}
