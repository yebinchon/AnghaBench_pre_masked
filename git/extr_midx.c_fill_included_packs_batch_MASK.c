
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct repository {int dummy; } ;
struct repack_info {size_t pack_int_id; int referenced_objects; int mtime; } ;
struct packed_git {size_t num_objects; int pack_size; int mtime; } ;
struct multi_pack_index {size_t num_packs; size_t num_objects; struct packed_git** packs; } ;


 int FUNC_0 (struct repack_info*,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct repack_info*) ;
 size_t FUNC_2 (struct multi_pack_index*,size_t) ;
 scalar_t__ FUNC_3 (struct packed_git*) ;
 scalar_t__ FUNC_4 (struct repository*,struct multi_pack_index*,size_t) ;
 struct repack_info* FUNC_5 (size_t,int) ;

__attribute__((used)) static int FUNC_6(struct repository *VAR_1,
         struct multi_pack_index *VAR_2,
         unsigned char *VAR_3,
         size_t VAR_4)
{
 uint32_t VAR_5, VAR_6;
 size_t VAR_7;
 struct repack_info *VAR_8 = FUNC_5(VAR_2->num_packs, sizeof(struct repack_info));

 for (VAR_5 = 0; VAR_5 < VAR_2->num_packs; VAR_5++) {
  VAR_8[VAR_5].pack_int_id = VAR_5;

  if (FUNC_4(VAR_1, VAR_2, VAR_5))
   continue;

  VAR_8[VAR_5].mtime = VAR_2->packs[VAR_5]->mtime;
 }

 for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_2->num_objects; VAR_5++) {
  uint32_t VAR_9 = FUNC_2(VAR_2, VAR_5);
  VAR_8[VAR_9].referenced_objects++;
 }

 FUNC_0(VAR_8, VAR_2->num_packs, VAR_0);

 VAR_7 = 0;
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_7 < VAR_4 && VAR_5 < VAR_2->num_packs; VAR_5++) {
  int VAR_10 = VAR_8[VAR_5].pack_int_id;
  struct packed_git *VAR_11 = VAR_2->packs[VAR_10];
  size_t VAR_12;

  if (!VAR_11)
   continue;
  if (FUNC_3(VAR_11) || !VAR_11->num_objects)
   continue;

  VAR_12 = (size_t)(VAR_11->pack_size
      * VAR_8[VAR_5].referenced_objects);
  VAR_12 /= VAR_11->num_objects;

  if (VAR_12 >= VAR_4)
   continue;

  VAR_6++;
  VAR_7 += VAR_12;
  VAR_3[VAR_10] = 1;
 }

 FUNC_1(VAR_8);

 if (VAR_7 < VAR_4 || VAR_6 < 2)
  return 1;

 return 0;
}
