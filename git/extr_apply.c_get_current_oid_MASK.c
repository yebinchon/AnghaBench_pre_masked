
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct apply_state {TYPE_2__* repo; } ;
struct TYPE_6__ {TYPE_1__** cache; } ;
struct TYPE_5__ {TYPE_3__* index; } ;
struct TYPE_4__ {int oid; } ;


 int FUNC_0 (TYPE_3__*,char const*,int ) ;
 int FUNC_1 (struct object_id*,int *) ;
 scalar_t__ FUNC_2 (struct apply_state*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct apply_state *VAR_0, const char *VAR_1,
      struct object_id *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_0) < 0)
  return -1;
 VAR_3 = FUNC_0(VAR_0->repo->index, VAR_1, FUNC_3(VAR_1));
 if (VAR_3 < 0)
  return -1;
 FUNC_1(VAR_2, &VAR_0->repo->index->cache[VAR_3]->oid);
 return 0;
}
