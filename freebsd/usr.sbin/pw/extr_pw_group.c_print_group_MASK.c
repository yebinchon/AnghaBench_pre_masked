
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; long* gr_mem; scalar_t__ gr_gid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct group*) ;
 int FUNC_3 (char*,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct group * VAR_2, bool VAR_3)
{
 char *VAR_4 = ((void*)0);
 int VAR_5;

 if (VAR_3) {
  FUNC_3("Group Name: %-15s   #%lu\n"
         "   Members: ",
         VAR_2->gr_name, (long) VAR_2->gr_gid);
  if (VAR_2->gr_mem != ((void*)0)) {
   for (VAR_5 = 0; VAR_2->gr_mem[VAR_5]; VAR_5++)
    FUNC_3("%s%s", VAR_5 ? "," : "", VAR_2->gr_mem[VAR_5]);
  }
  FUNC_0("\n\n", VAR_1);
  return (VAR_0);
 }

 VAR_4 = FUNC_2(VAR_2);
 FUNC_3("%s\n", VAR_4);
 FUNC_1(VAR_4);
 return (VAR_0);
}
