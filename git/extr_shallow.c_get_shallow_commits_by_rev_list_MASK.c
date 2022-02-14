
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct object {int flags; int oid; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {struct object object; struct commit_list* parents; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct commit_list*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct commit*) ;
 scalar_t__ FUNC_7 (struct rev_info*) ;
 int FUNC_8 (int ,struct rev_info*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (int,char const**,struct rev_info*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (struct rev_info*,int ,int *,struct commit_list**) ;

struct commit_list *FUNC_11(int VAR_3, const char **VAR_4,
          int VAR_5,
          int VAR_6)
{
 struct commit_list *VAR_7 = ((void*)0), *VAR_8;
 struct commit_list *VAR_9 = ((void*)0);
 struct rev_info VAR_10;
 int VAR_11 = VAR_5 | VAR_6;





 FUNC_0(VAR_11);

 FUNC_4(VAR_2);

 FUNC_8(VAR_2, &VAR_10, ((void*)0));
 VAR_0 = 0;
 FUNC_9(VAR_3, VAR_4, &VAR_10, ((void*)0));

 if (FUNC_7(&VAR_10))
  FUNC_2("revision walk setup failed");
 FUNC_10(&VAR_10, VAR_1, ((void*)0), &VAR_9);

 if (!VAR_9)
  FUNC_2("no commits selected for shallow requests");


 for (VAR_8 = VAR_9; VAR_8; VAR_8 = VAR_8->next)
  VAR_8->item->object.flags |= VAR_6;
 for (VAR_8 = VAR_9; VAR_8; VAR_8 = VAR_8->next) {
  struct commit *VAR_12 = VAR_8->item;
  struct commit_list *VAR_13;

  if (FUNC_6(VAR_12))
   FUNC_2("unable to parse commit %s",
       FUNC_5(&VAR_12->object.oid));

  for (VAR_13 = VAR_12->parents; VAR_13; VAR_13 = VAR_13->next)
   if (!(VAR_13->item->object.flags & VAR_6)) {
    VAR_12->object.flags |= VAR_5;
    FUNC_1(VAR_12, &VAR_7);
    break;
   }
 }
 FUNC_3(VAR_9);





 for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->next) {
  struct object *VAR_14 = &VAR_8->item->object;
  if ((VAR_14->flags & VAR_11) == VAR_11)
   VAR_14->flags &= ~VAR_6;
 }
 return VAR_7;
}
