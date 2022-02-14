
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_rewrite_cfg {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct notes_rewrite_cfg*,int *,struct object_id const*) ;
 int FUNC_1 (struct repository*,struct notes_rewrite_cfg*,char*) ;
 struct notes_rewrite_cfg* FUNC_2 (char*) ;
 int FUNC_3 (int *,struct object_id const*) ;

void FUNC_4(struct repository *VAR_0,
    const struct commit *VAR_1,
    const struct object_id *VAR_2)
{
 struct notes_rewrite_cfg *VAR_3;

 VAR_3 = FUNC_2("amend");
 if (VAR_3) {

  FUNC_0(VAR_3, &VAR_1->object.oid, VAR_2);
  FUNC_1(VAR_0, VAR_3, "Notes added by 'git commit --amend'");
 }
 FUNC_3(&VAR_1->object.oid, VAR_2);
}
