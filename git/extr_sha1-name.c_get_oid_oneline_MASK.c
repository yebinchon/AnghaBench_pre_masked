
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_list {TYPE_3__* item; struct commit_list* next; } ;
struct TYPE_6__ {int oid; } ;
struct commit {TYPE_2__ object; } ;
typedef int regex_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,struct commit_list**) ;
 int FUNC_2 (struct commit_list*) ;
 char* FUNC_3 (struct commit*,int *) ;
 int FUNC_4 (struct object_id*,int *) ;
 int FUNC_5 (struct repository*,int *) ;
 struct commit* FUNC_6 (struct commit_list**,int ) ;
 scalar_t__ FUNC_7 (int *,char const*,int ) ;
 int FUNC_8 (int *,char const*,int ,int *,int ) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char const*,char*) ;
 int FUNC_11 (struct commit*,char const*) ;

__attribute__((used)) static int FUNC_12(struct repository *VAR_2,
      const char *VAR_3, struct object_id *VAR_4,
      struct commit_list *VAR_5)
{
 struct commit_list *VAR_6 = ((void*)0), *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 regex_t VAR_10;

 if (VAR_3[0] == '!') {
  VAR_3++;

  if (VAR_3[0] == '-') {
   VAR_3++;
   VAR_9 = 1;
  } else if (VAR_3[0] != '!') {
   return -1;
  }
 }

 if (FUNC_7(&VAR_10, VAR_3, VAR_1))
  return -1;

 for (VAR_7 = VAR_5; VAR_7; VAR_7 = VAR_7->next) {
  VAR_7->item->object.flags |= VAR_0;
  FUNC_1(VAR_7->item, &VAR_6);
 }
 while (VAR_5) {
  const char *VAR_11, *VAR_12;
  struct commit *VAR_13;
  int VAR_14;

  VAR_13 = FUNC_6(&VAR_5, VAR_0);
  if (!FUNC_5(VAR_2, &VAR_13->object.oid))
   continue;
  VAR_12 = FUNC_3(VAR_13, ((void*)0));
  VAR_11 = FUNC_10(VAR_12, "\n\n");
  VAR_14 = VAR_9 ^ (VAR_11 && !FUNC_8(&VAR_10, VAR_11 + 2, 0, ((void*)0), 0));
  FUNC_11(VAR_13, VAR_12);

  if (VAR_14) {
   FUNC_4(VAR_4, &VAR_13->object.oid);
   VAR_8 = 1;
   break;
  }
 }
 FUNC_9(&VAR_10);
 FUNC_2(VAR_5);
 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next)
  FUNC_0(VAR_7->item, VAR_0);
 FUNC_2(VAR_6);
 return VAR_8 ? 0 : -1;
}
