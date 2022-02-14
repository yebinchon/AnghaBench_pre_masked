
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct commit_name {int generation; int head_name; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {struct commit_list* parents; } ;


 struct strbuf VAR_0 ;
 struct commit_name* FUNC_0 (struct commit*) ;
 int FUNC_1 (struct commit*,char*,int ) ;
 scalar_t__ FUNC_2 (struct commit*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,int,...) ;
 int FUNC_5 (struct strbuf*,int) ;
 char* FUNC_6 (struct strbuf*,int *) ;

__attribute__((used)) static void FUNC_7(struct commit_list *VAR_1,
    struct commit **VAR_2,
    char **VAR_3,
    int VAR_4)
{
 struct commit_list *VAR_5;
 struct commit *VAR_6;
 int VAR_7;


 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  VAR_6 = VAR_5->item;
  if (FUNC_0(VAR_6))
   continue;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   if (VAR_2[VAR_7] == VAR_6) {
    FUNC_1(VAR_6, VAR_3[VAR_7], 0);
    break;
   }
  }
 }


 do {
  VAR_7 = 0;
  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
   VAR_7 += FUNC_2(VAR_5->item);
  }
 } while (VAR_7);


 do {
  VAR_7 = 0;
  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
   struct commit_list *VAR_8;
   struct commit_name *VAR_9;
   int VAR_10;
   VAR_6 = VAR_5->item;
   if (!FUNC_0(VAR_6))
    continue;
   VAR_9 = FUNC_0(VAR_6);
   VAR_8 = VAR_6->parents;
   VAR_10 = 0;
   while (VAR_8) {
    struct commit *VAR_11 = VAR_8->item;
    struct strbuf VAR_12 = VAR_0;
    VAR_8 = VAR_8->next;
    VAR_10++;
    if (FUNC_0(VAR_11))
     continue;
    switch (VAR_9->generation) {
    case 0:
     FUNC_5(&VAR_12, VAR_9->head_name);
     break;
    case 1:
     FUNC_4(&VAR_12, "%s^", VAR_9->head_name);
     break;
    default:
     FUNC_4(&VAR_12, "%s~%d",
          VAR_9->head_name, VAR_9->generation);
     break;
    }
    if (VAR_10 == 1)
     FUNC_3(&VAR_12, '^');
    else
     FUNC_4(&VAR_12, "^%d", VAR_10);
    FUNC_1(VAR_11, FUNC_6(&VAR_12, ((void*)0)), 0);
    VAR_7++;
    FUNC_2(VAR_11);
   }
  }
 } while (VAR_7);
}
