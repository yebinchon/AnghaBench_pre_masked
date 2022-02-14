
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {struct object_id oid; } ;
struct tree {TYPE_1__ object; } ;
struct commit {int dummy; } ;


 struct tree* FUNC_0 (struct commit const*) ;

struct object_id *FUNC_1(const struct commit *VAR_0)
{
 struct tree *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? &VAR_1->object.oid : ((void*)0);
}
