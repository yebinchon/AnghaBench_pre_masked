
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tag {TYPE_1__* tagged; } ;
struct rev_info {scalar_t__ ignore_missing; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_4__ {struct object object; } ;
struct TYPE_3__ {int oid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rev_info*,struct object*,char const*) ;
 int FUNC_1 (struct rev_info*,struct object*,char const*,int ,int) ;
 int FUNC_2 (struct commit_list*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 struct object* FUNC_4 (struct rev_info*,char const*,struct object_id*,int ) ;
 int FUNC_5 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_6(struct rev_info *VAR_5, const char *VAR_6, int VAR_7,
       int VAR_8)
{
 struct object_id VAR_9;
 struct object *VAR_10;
 struct commit *VAR_11;
 struct commit_list *VAR_12;
 int VAR_13;
 const char *VAR_14 = VAR_6;

 if (*VAR_14 == '^') {
  VAR_7 ^= VAR_4 | VAR_0;
  VAR_14++;
 }
 if (FUNC_3(VAR_14, &VAR_9))
  return 0;
 while (1) {
  VAR_10 = FUNC_4(VAR_5, VAR_14, &VAR_9, 0);
  if (!VAR_10 && VAR_5->ignore_missing)
   return 0;
  if (VAR_10->type != VAR_2)
   break;
  if (!((struct tag*)VAR_10)->tagged)
   return 0;
  FUNC_5(&VAR_9, &((struct tag*)VAR_10)->tagged->oid);
 }
 if (VAR_10->type != VAR_1)
  return 0;
 VAR_11 = (struct commit *)VAR_10;
 if (VAR_8 &&
     VAR_8 > FUNC_2(VAR_11->parents))
  return 0;
 for (VAR_12 = VAR_11->parents, VAR_13 = 1;
      VAR_12;
      VAR_12 = VAR_12->next, VAR_13++) {
  if (VAR_8 && VAR_13 != VAR_8)
   continue;

  VAR_10 = &VAR_12->item->object;
  VAR_10->flags |= VAR_7;
  FUNC_1(VAR_5, VAR_10, VAR_6, VAR_3, VAR_7);
  FUNC_0(VAR_5, VAR_10, VAR_14);
 }
 return 1;
}
