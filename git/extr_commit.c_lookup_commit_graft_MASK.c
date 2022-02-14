
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct object_id {int hash; } ;
struct commit_graft {int dummy; } ;
struct TYPE_2__ {struct commit_graft** grafts; } ;


 int FUNC_0 (struct repository*,int ) ;
 int FUNC_1 (struct repository*) ;

struct commit_graft *FUNC_2(struct repository *VAR_0, const struct object_id *VAR_1)
{
 int VAR_2;
 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_1->hash);
 if (VAR_2 < 0)
  return ((void*)0);
 return VAR_0->parsed_objects->grafts[VAR_2];
}
