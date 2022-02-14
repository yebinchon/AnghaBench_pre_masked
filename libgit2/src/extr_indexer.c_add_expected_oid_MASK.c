
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {int expected_oids; TYPE_1__* pack; int odb; } ;
typedef TYPE_2__ git_indexer ;
struct TYPE_4__ {int idx_cache; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_6(git_indexer *VAR_0, const git_oid *VAR_1)
{





 if ((!VAR_0->odb || !FUNC_2(VAR_0->odb, VAR_1)) &&
     !FUNC_4(VAR_0->pack->idx_cache, VAR_1) &&
     !FUNC_4(VAR_0->expected_oids, VAR_1)) {
      git_oid *VAR_2 = FUNC_1(sizeof(*VAR_1));
      FUNC_0(VAR_2);
      FUNC_3(VAR_2, VAR_1);
      return FUNC_5(VAR_0->expected_oids, VAR_2, VAR_2);
 }

 return 0;
}
