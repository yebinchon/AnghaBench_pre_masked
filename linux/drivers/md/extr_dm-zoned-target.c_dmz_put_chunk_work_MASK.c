
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_chunk_work {int chunk; TYPE_1__* target; int bio_list; int refcount; } ;
struct TYPE_2__ {int chunk_rxtree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_chunk_work*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_chunk_work *VAR_0)
{
 if (FUNC_4(&VAR_0->refcount)) {
  FUNC_0(!FUNC_1(&VAR_0->bio_list));
  FUNC_3(&VAR_0->target->chunk_rxtree, VAR_0->chunk);
  FUNC_2(VAR_0);
 }
}
