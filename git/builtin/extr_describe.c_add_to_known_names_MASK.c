
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_name {int prio; int * path; int oid; scalar_t__ name_checked; struct tag* tag; int entry; int peeled; } ;


 struct commit_name* FUNC_0 (struct object_id const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,struct object_id const*) ;
 int FUNC_5 (struct object_id const*) ;
 scalar_t__ FUNC_6 (struct commit_name*,int,struct object_id const*,struct tag**) ;
 struct commit_name* FUNC_7 (int) ;
 int * FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1,
          const struct object_id *VAR_2,
          int VAR_3,
          const struct object_id *VAR_4)
{
 struct commit_name *VAR_5 = FUNC_0(VAR_2);
 struct tag *VAR_6 = ((void*)0);
 if (FUNC_6(VAR_5, VAR_3, VAR_4, &VAR_6)) {
  if (!VAR_5) {
   VAR_5 = FUNC_7(sizeof(struct commit_name));
   FUNC_4(&VAR_5->peeled, VAR_2);
   FUNC_3(&VAR_5->entry, FUNC_5(VAR_2));
   FUNC_2(&VAR_0, &VAR_5->entry);
   VAR_5->path = ((void*)0);
  }
  VAR_5->tag = VAR_6;
  VAR_5->prio = VAR_3;
  VAR_5->name_checked = 0;
  FUNC_4(&VAR_5->oid, VAR_4);
  FUNC_1(VAR_5->path);
  VAR_5->path = FUNC_8(VAR_1);
 }
}
