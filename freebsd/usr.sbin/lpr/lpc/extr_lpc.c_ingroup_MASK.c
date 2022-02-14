
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct group* FUNC_1 (char const*) ;
 int FUNC_2 (long,scalar_t__*) ;
 scalar_t__* FUNC_3 (int) ;
 long FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1)
{
 static struct group *VAR_2=((void*)0);
 static int VAR_3 = 0;
 static long VAR_4;
 static gid_t *VAR_5;
 register gid_t VAR_6;
 register int VAR_7;

 if (VAR_2 == ((void*)0)) {
  if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0)) {
   FUNC_5("warning: unknown group '%s'", VAR_1);
   return(0);
  }
  VAR_4 = FUNC_4(VAR_0);
  if ((VAR_5 = FUNC_3(sizeof(gid_t) * VAR_4)) == ((void*)0))
   FUNC_0(1, "malloc");
  VAR_3 = FUNC_2(VAR_4, VAR_5);
  if (VAR_3 < 0)
   FUNC_0(1, "getgroups");
 }
 VAR_6 = VAR_2->gr_gid;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  if (VAR_6 == VAR_5[VAR_7])
   return(1);
 return(0);
}
