
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_9__ {int oid; } ;
struct TYPE_10__ {TYPE_2__ target; int name; TYPE_1__* db; } ;
typedef TYPE_3__ git_reference ;
typedef int git_oid ;
struct TYPE_8__ {int * repo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**,int *,int ,int const*,int,int *,char const*) ;

int FUNC_3(
 git_reference **VAR_0,
 git_reference *VAR_1,
 const git_oid *VAR_2,
 const char *VAR_3)
{
 int VAR_4;
 git_repository *VAR_5;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 VAR_5 = VAR_1->db->repo;

 if ((VAR_4 = FUNC_1(VAR_1)) < 0)
  return VAR_4;

 return FUNC_2(VAR_0, VAR_5, VAR_1->name, VAR_2, 1, &VAR_1->target.oid, VAR_3);
}
