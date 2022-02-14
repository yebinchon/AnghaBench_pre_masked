
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_clone_metadata {TYPE_1__* dmap; TYPE_1__* current_dmap; int nr_words; } ;
struct TYPE_2__ {void* dirty_words; scalar_t__ changed; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_clone_metadata *VAR_2)
{
 VAR_2->dmap[0].changed = 0;
 VAR_2->dmap[0].dirty_words = FUNC_3(FUNC_1(VAR_2->nr_words), VAR_1);

 if (!VAR_2->dmap[0].dirty_words) {
  FUNC_0("Failed to allocate dirty bitmap");
  return -VAR_0;
 }

 VAR_2->dmap[1].changed = 0;
 VAR_2->dmap[1].dirty_words = FUNC_3(FUNC_1(VAR_2->nr_words), VAR_1);

 if (!VAR_2->dmap[1].dirty_words) {
  FUNC_0("Failed to allocate dirty bitmap");
  FUNC_2(VAR_2->dmap[0].dirty_words);
  return -VAR_0;
 }

 VAR_2->current_dmap = &VAR_2->dmap[0];

 return 0;
}
