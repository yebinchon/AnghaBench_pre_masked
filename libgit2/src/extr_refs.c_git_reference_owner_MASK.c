
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {TYPE_1__* db; } ;
typedef TYPE_2__ git_reference ;
struct TYPE_5__ {int * repo; } ;


 int FUNC_0 (TYPE_2__ const*) ;

git_repository *FUNC_1(const git_reference *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->db->repo;
}
