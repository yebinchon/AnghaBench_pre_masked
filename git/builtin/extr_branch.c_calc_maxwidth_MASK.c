
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_array_item {char* refname; scalar_t__ kind; } ;
struct ref_array {int nr; struct ref_array_item** items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,char*,char const**) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct ref_array *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {
  struct ref_array_item *VAR_6 = VAR_2->items[VAR_4];
  const char *VAR_7 = VAR_6->refname;
  int VAR_8;

  FUNC_2(VAR_6->refname, "refs/heads/", &VAR_7);
  FUNC_2(VAR_6->refname, "refs/remotes/", &VAR_7);
  if (VAR_6->kind == VAR_0) {
   char *VAR_9 = FUNC_1();
   VAR_8 = FUNC_3(VAR_9);
   FUNC_0(VAR_9);
  } else
   VAR_8 = FUNC_3(VAR_7);

  if (VAR_6->kind == VAR_1)
   VAR_8 += VAR_3;
  if (VAR_8 > VAR_5)
   VAR_5 = VAR_8;
 }
 return VAR_5;
}
