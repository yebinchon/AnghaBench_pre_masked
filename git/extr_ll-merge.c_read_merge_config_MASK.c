
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_merge_driver {int recursive; int cmdline; int description; struct ll_merge_driver* next; int fn; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int VAR_1 ;
 struct ll_merge_driver* VAR_2 ;
 struct ll_merge_driver** VAR_3 ;
 scalar_t__ FUNC_2 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *,char const*,int) ;
 struct ll_merge_driver* FUNC_5 (int,int) ;
 int * FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 struct ll_merge_driver *VAR_7;
 const char *VAR_8, *VAR_9;
 int VAR_10;

 if (!FUNC_3(VAR_4, "merge.default"))
  return FUNC_1(&VAR_0, VAR_4, VAR_5);






 if (FUNC_2(VAR_4, "merge", &VAR_9, &VAR_10, &VAR_8) < 0 || !VAR_9)
  return 0;





 for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next)
  if (!FUNC_4(VAR_7->name, VAR_9, VAR_10) && !VAR_7->name[VAR_10])
   break;
 if (!VAR_7) {
  VAR_7 = FUNC_5(1, sizeof(struct ll_merge_driver));
  VAR_7->name = FUNC_6(VAR_9, VAR_10);
  VAR_7->fn = VAR_1;
  *VAR_3 = VAR_7;
  VAR_3 = &(VAR_7->next);
 }

 if (!FUNC_3("name", VAR_8))
  return FUNC_1(&VAR_7->description, VAR_4, VAR_5);

 if (!FUNC_3("driver", VAR_8)) {
  if (!VAR_5)
   return FUNC_0("%s: lacks value", VAR_4);
  VAR_7->cmdline = FUNC_7(VAR_5);
  return 0;
 }

 if (!FUNC_3("recursive", VAR_8))
  return FUNC_1(&VAR_7->recursive, VAR_4, VAR_5);

 return 0;
}
