
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {scalar_t__ date; } ;
struct object_id {int dummy; } ;
struct commit_name {int prio; struct tag* tag; struct object_id const oid; } ;


 struct tag* FUNC_0 (int ,struct object_id const*) ;
 scalar_t__ FUNC_1 (struct tag*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct commit_name *VAR_1,
          int VAR_2,
          const struct object_id *VAR_3,
          struct tag **VAR_4)
{
 if (!VAR_1 || VAR_1->prio < VAR_2)
  return 1;

 if (VAR_1->prio == 2 && VAR_2 == 2) {



  struct tag *VAR_5;

  if (!VAR_1->tag) {
   VAR_5 = FUNC_0(VAR_0, &VAR_1->oid);
   if (!VAR_5 || FUNC_1(VAR_5))
    return 1;
   VAR_1->tag = VAR_5;
  }

  VAR_5 = FUNC_0(VAR_0, VAR_3);
  if (!VAR_5 || FUNC_1(VAR_5))
   return 0;
  *VAR_4 = VAR_5;

  if (VAR_1->tag->date < VAR_5->date)
   return 1;
 }

 return 0;
}
