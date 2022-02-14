
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {scalar_t__ is_current; } ;
struct object_id {int dummy; } ;
typedef int (* each_ref_fn ) (int ,struct object_id*,int,void*) ;


 int VAR_0 ;
 int FUNC_0 (struct worktree**) ;
 int FUNC_1 (int ) ;
 struct worktree** FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,struct object_id*,int*) ;
 int VAR_1 ;
 int FUNC_4 (struct worktree*,char*) ;

int FUNC_5(each_ref_fn VAR_2, void *VAR_3)
{
 struct worktree **VAR_4, **VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_2(0);
 for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
  struct worktree *VAR_7 = *VAR_5;
  struct object_id VAR_8;
  int VAR_9;

  if (VAR_7->is_current)
   continue;

  if (!FUNC_3(FUNC_1(VAR_1),
     FUNC_4(VAR_7, "HEAD"),
     VAR_0,
     &VAR_8, &VAR_9))
   VAR_6 = VAR_2(FUNC_4(VAR_7, "HEAD"), &VAR_8, VAR_9, VAR_3);
  if (VAR_6)
   break;
 }
 FUNC_0(VAR_4);
 return VAR_6;
}
