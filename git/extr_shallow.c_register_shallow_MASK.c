
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_graft {int nr_parent; int oid; } ;
struct TYPE_2__ {scalar_t__ parsed; } ;
struct commit {int * parents; TYPE_1__ object; } ;


 struct commit* FUNC_0 (int ,struct object_id const*) ;
 int FUNC_1 (int *,struct object_id const*) ;
 int FUNC_2 (struct repository*,struct commit_graft*,int ) ;
 int VAR_0 ;
 struct commit_graft* FUNC_3 (int) ;

int FUNC_4(struct repository *VAR_1, const struct object_id *VAR_2)
{
 struct commit_graft *VAR_3 =
  FUNC_3(sizeof(struct commit_graft));
 struct commit *VAR_4 = FUNC_0(VAR_0, VAR_2);

 FUNC_1(&VAR_3->oid, VAR_2);
 VAR_3->nr_parent = -1;
 if (VAR_4 && VAR_4->object.parsed)
  VAR_4->parents = ((void*)0);
 return FUNC_2(VAR_1, VAR_3, 0);
}
