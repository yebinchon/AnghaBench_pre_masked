
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct repository {int dummy; } ;
struct packed_git {scalar_t__ num_bad_objects; scalar_t__ bad_object_sha1; } ;
struct pack_entry {struct packed_git* p; int offset; } ;
struct object_id {int hash; } ;
struct multi_pack_index {scalar_t__ num_objects; struct packed_git** packs; } ;
struct TYPE_2__ {scalar_t__ rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct packed_git*) ;
 int FUNC_4 (struct object_id*,struct multi_pack_index*,scalar_t__) ;
 int FUNC_5 (struct multi_pack_index*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct multi_pack_index*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct repository*,struct multi_pack_index*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_1,
     struct multi_pack_index *VAR_2,
     struct pack_entry *VAR_3,
     uint32_t VAR_4)
{
 uint32_t VAR_5;
 struct packed_git *VAR_6;

 if (VAR_4 >= VAR_2->num_objects)
  return 0;

 VAR_5 = FUNC_6(VAR_2, VAR_4);

 if (FUNC_7(VAR_1, VAR_2, VAR_5))
  FUNC_1(FUNC_0("error preparing packfile from multi-pack-index"));
 VAR_6 = VAR_2->packs[VAR_5];
 if (!FUNC_3(VAR_6))
  return 0;

 if (VAR_6->num_bad_objects) {
  uint32_t VAR_7;
  struct object_id VAR_8;
  FUNC_4(&VAR_8, VAR_2, VAR_4);
  for (VAR_7 = 0; VAR_7 < VAR_6->num_bad_objects; VAR_7++)
   if (FUNC_2(VAR_8.hash,
       VAR_6->bad_object_sha1 + VAR_0->rawsz * VAR_7))
    return 0;
 }

 VAR_3->offset = FUNC_5(VAR_2, VAR_4);
 VAR_3->p = VAR_6;

 return 1;
}
