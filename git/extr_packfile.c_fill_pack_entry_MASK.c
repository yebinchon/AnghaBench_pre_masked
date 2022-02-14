
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_git {unsigned int num_bad_objects; scalar_t__ bad_object_sha1; } ;
struct pack_entry {struct packed_git* p; scalar_t__ offset; } ;
struct object_id {int hash; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {unsigned int rawsz; } ;


 scalar_t__ FUNC_0 (int ,struct packed_git*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct packed_git*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(const struct object_id *VAR_1,
      struct pack_entry *VAR_2,
      struct packed_git *VAR_3)
{
 off_t VAR_4;

 if (VAR_3->num_bad_objects) {
  unsigned VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3->num_bad_objects; VAR_5++)
   if (FUNC_1(VAR_1->hash,
       VAR_3->bad_object_sha1 + VAR_0->rawsz * VAR_5))
    return 0;
 }

 VAR_4 = FUNC_0(VAR_1->hash, VAR_3);
 if (!VAR_4)
  return 0;
 if (!FUNC_2(VAR_3))
  return 0;
 VAR_2->offset = VAR_4;
 VAR_2->p = VAR_3;
 return 1;
}
