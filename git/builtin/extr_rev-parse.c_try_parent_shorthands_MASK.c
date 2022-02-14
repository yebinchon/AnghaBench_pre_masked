
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_3__ {struct object_id oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit_list*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 struct commit* FUNC_3 (int ,struct object_id*) ;
 int FUNC_4 (int ,struct object_id*,char const*) ;
 char* FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char**,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4)
{
 char *VAR_5;
 struct object_id VAR_6;
 struct commit *VAR_7;
 struct commit_list *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if ((VAR_5 = FUNC_5(VAR_4, "^!"))) {
  VAR_10 = 1;
  if (VAR_5[2])
   return 0;
 } else if ((VAR_5 = FUNC_5(VAR_4, "^@"))) {
  VAR_11 = 1;
  if (VAR_5[2])
   return 0;
 } else if ((VAR_5 = FUNC_5(VAR_4, "^-"))) {
  VAR_10 = 1;
  VAR_12 = 1;

  if (VAR_5[2]) {
   char *VAR_13;
   VAR_12 = FUNC_6(VAR_5 + 2, &VAR_13, 10);
   if (*VAR_13 != '\0' || !VAR_12)
    return 0;
  }
 } else
  return 0;

 *VAR_5 = 0;
 if (FUNC_2(VAR_4, &VAR_6) ||
     !(VAR_7 = FUNC_3(VAR_3, &VAR_6))) {
  *VAR_5 = '^';
  return 0;
 }

 if (VAR_12 &&
     VAR_12 > FUNC_0(VAR_7->parents)) {
  *VAR_5 = '^';
  return 0;
 }

 if (VAR_10)
  FUNC_4(VAR_0, &VAR_6, VAR_4);
 for (VAR_8 = VAR_7->parents, VAR_9 = 1;
      VAR_8;
      VAR_8 = VAR_8->next, VAR_9++) {
  char *VAR_14 = ((void*)0);

  if (VAR_12 && VAR_9 != VAR_12)
   continue;

  if (VAR_2)
   VAR_14 = FUNC_7("%s^%d", VAR_4, VAR_9);
  FUNC_4(VAR_11 ? VAR_0 : VAR_1,
    &VAR_8->item->object.oid, VAR_14);
  FUNC_1(VAR_14);
 }

 *VAR_5 = '^';
 return 1;
}
