
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int symbolic; } ;
struct TYPE_11__ {TYPE_2__ target; TYPE_1__* db; int name; } ;
typedef TYPE_3__ git_reference ;
struct TYPE_9__ {int repo; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__**,int ,int ) ;
 int FUNC_2 (TYPE_3__**,int ,int ,int) ;
 int FUNC_3 (TYPE_3__ const*) ;

int FUNC_4(git_reference **VAR_1, const git_reference *VAR_2)
{
 switch (FUNC_3(VAR_2)) {
 case 129:
  return FUNC_1(VAR_1, VAR_2->db->repo, VAR_2->name);

 case 128:
  return FUNC_2(VAR_1, VAR_2->db->repo, VAR_2->target.symbolic, -1);

 default:
  FUNC_0(VAR_0, "invalid reference");
  return -1;
 }
}
