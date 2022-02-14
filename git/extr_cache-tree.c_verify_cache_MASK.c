
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {char const* name; int oid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct cache_entry **VAR_2,
   int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = VAR_4 & VAR_0;


 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  const struct cache_entry *VAR_8 = VAR_2[VAR_5];
  if (FUNC_0(VAR_8)) {
   if (VAR_7)
    return -1;
   if (10 < ++VAR_6) {
    FUNC_1(VAR_1, "...\n");
    break;
   }
   FUNC_1(VAR_1, "%s: unmerged (%s)\n",
    VAR_8->name, FUNC_2(&VAR_8->oid));
  }
 }
 if (VAR_6)
  return -1;





 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3 - 1; VAR_5++) {




  const char *VAR_9 = VAR_2[VAR_5]->name;
  const char *VAR_10 = VAR_2[VAR_5+1]->name;
  int VAR_11 = FUNC_3(VAR_9);
  if (VAR_11 < FUNC_3(VAR_10) &&
      FUNC_4(VAR_9, VAR_10, VAR_11) == 0 &&
      VAR_10[VAR_11] == '/') {
   if (10 < ++VAR_6) {
    FUNC_1(VAR_1, "...\n");
    break;
   }
   FUNC_1(VAR_1, "You have both %s and %s\n",
    VAR_9, VAR_10);
  }
 }
 if (VAR_6)
  return -1;
 return 0;
}
