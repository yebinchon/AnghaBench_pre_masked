
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct tree {TYPE_2__ object; } ;
struct TYPE_4__ {scalar_t__ has_changes; } ;
struct TYPE_6__ {TYPE_1__ flags; } ;
struct rev_info {TYPE_3__ pruning; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,char*,TYPE_3__*) ;
 struct tree* FUNC_1 (struct commit*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct rev_info *VAR_2, struct commit *VAR_3)
{
 int VAR_4;
 struct tree *VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5)
  return 0;

 VAR_1 = VAR_0;
 VAR_2->pruning.flags.has_changes = 0;
 VAR_4 = FUNC_0(((void*)0), &VAR_5->object.oid, "", &VAR_2->pruning);

 return VAR_4 >= 0 && (VAR_1 == VAR_0);
}
