
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct numa_policy {int policy; int * name; } ;
struct bitset {int dummy; } ;
typedef int rootmask ;
typedef int domainset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int,int,int *,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,struct bitset*,int ) ;
 struct numa_policy* VAR_4 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(char *VAR_5, domainset_t *VAR_6, int *VAR_7)
{
 domainset_t VAR_8;
 struct numa_policy *VAR_9;
 char *VAR_10;
 int VAR_11;




 if (FUNC_1(VAR_0, VAR_1, -1,
     sizeof(VAR_8), &VAR_8, &VAR_11) != 0)
  FUNC_2(VAR_3, "getdomain");

 VAR_10 = VAR_5;
 for (VAR_9 = &VAR_4[0]; VAR_9->name != ((void*)0); VAR_9++) {
  if (FUNC_7(VAR_10, VAR_9->name, FUNC_6(VAR_9->name)) == 0) {
   VAR_11 = VAR_9->policy;
   VAR_10 += FUNC_6(VAR_9->name);
   if (*VAR_10 != ':' && *VAR_10 != '\0')
    FUNC_3(VAR_3, "Malformed list %s", VAR_5);
   if (*VAR_10 == ':')
    VAR_10++;
   break;
  }
 }
 *VAR_7 = VAR_11;
 if (FUNC_5(VAR_10, "all") == 0 || *VAR_10 == '\0') {
  FUNC_0(&VAR_8, VAR_6);
  return;
 }
 FUNC_4(VAR_10, (struct bitset *)VAR_6, VAR_2);
}
