
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packed_git {unsigned char* index_data; int index_version; unsigned long num_objects; scalar_t__ pack_local; } ;
struct pack_list {int * unique_objects; TYPE_2__* remaining_objects; int all_objects_size; struct packed_git* pack; } ;
struct object_id {int dummy; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int rawsz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,struct object_id const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct packed_git*) ;
 struct pack_list* FUNC_3 (int *,struct pack_list*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct pack_list * FUNC_4(struct packed_git *VAR_5)
{
 struct pack_list VAR_6;
 unsigned long VAR_7 = 0, VAR_8;
 const unsigned char *VAR_9;

 if (!VAR_5->pack_local && !(VAR_0 || VAR_4))
  return ((void*)0);

 VAR_6.pack = VAR_5;
 FUNC_0(&VAR_6.remaining_objects);

 if (FUNC_2(VAR_5))
  return ((void*)0);

 VAR_9 = VAR_5->index_data;
 VAR_9 += 256 * 4 + ((VAR_5->index_version < 2) ? 4 : 8);
 VAR_8 = VAR_3->rawsz + ((VAR_5->index_version < 2) ? 4 : 0);
 while (VAR_7 < VAR_5->num_objects * VAR_8) {
  FUNC_1(VAR_6.remaining_objects, (const struct object_id *)(VAR_9 + VAR_7));
  VAR_7 += VAR_8;
 }
 VAR_6.all_objects_size = VAR_6.remaining_objects->size;
 VAR_6.unique_objects = ((void*)0);
 if (VAR_5->pack_local)
  return FUNC_3(&VAR_2, &VAR_6);
 else
  return FUNC_3(&VAR_1, &VAR_6);
}
