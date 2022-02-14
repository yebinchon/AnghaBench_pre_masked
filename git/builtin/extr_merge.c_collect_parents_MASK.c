
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct commit {int dummy; } ;
struct TYPE_4__ {struct commit_list* next; } ;
struct TYPE_3__ {int name; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (struct commit*,struct commit_list**) ;
 struct commit* FUNC_2 (char const*) ;
 int FUNC_3 (struct commit_list**,struct strbuf*) ;
 int VAR_1 ;
 int FUNC_4 (char const*,char*,int ) ;
 int FUNC_5 (int ,struct strbuf*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (struct strbuf*,struct strbuf*) ;
 struct commit_list* FUNC_8 (struct commit*,int*,struct commit_list*) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (char const*,char*) ;

__attribute__((used)) static struct commit_list *FUNC_11(struct commit *VAR_3,
        int *VAR_4,
        int VAR_5, const char **VAR_6,
        struct strbuf *VAR_7)
{
 int VAR_8;
 struct commit_list *VAR_9 = ((void*)0);
 struct commit_list **VAR_10 = &VAR_9;
 struct strbuf VAR_11 = VAR_0, *VAR_12 = ((void*)0);

 if (VAR_7 && (!VAR_1 || VAR_2))
  VAR_12 = &VAR_11;

 if (VAR_3)
  VAR_10 = &FUNC_1(VAR_3, VAR_10)->next;

 if (VAR_5 == 1 && !FUNC_10(VAR_6[0], "FETCH_HEAD")) {
  FUNC_3(VAR_10, VAR_12);
  VAR_9 = FUNC_8(VAR_3, VAR_4, VAR_9);
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
   struct commit *VAR_13 = FUNC_2(VAR_6[VAR_8]);
   if (!VAR_13)
    FUNC_4(VAR_6[VAR_8], "merge",
       FUNC_0("not something we can merge"));
   VAR_10 = &FUNC_1(VAR_13, VAR_10)->next;
  }
  VAR_9 = FUNC_8(VAR_3, VAR_4, VAR_9);
  if (VAR_12) {
   struct commit_list *VAR_14;
   for (VAR_14 = VAR_9; VAR_14; VAR_14 = VAR_14->next)
    FUNC_5(FUNC_6(VAR_14->item)->name, VAR_12);
  }
 }

 if (VAR_12) {
  FUNC_7(VAR_12, VAR_7);
  FUNC_9(VAR_12);
 }

 return VAR_9;
}
