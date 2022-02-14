
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pack_midx_entry {scalar_t__ pack_mtime; int offset; int pack_int_id; int oid; } ;
struct multi_pack_index {scalar_t__ num_objects; } ;


 int FUNC_0 (int *,struct multi_pack_index*,scalar_t__) ;
 int FUNC_1 (struct multi_pack_index*,scalar_t__) ;
 int FUNC_2 (struct multi_pack_index*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct multi_pack_index *VAR_0,
          struct pack_midx_entry *VAR_1,
          uint32_t VAR_2)
{
 if (VAR_2 >= VAR_0->num_objects)
  return 1;

 FUNC_0(&VAR_1->oid, VAR_0, VAR_2);
 VAR_1->pack_int_id = FUNC_2(VAR_0, VAR_2);
 VAR_1->offset = FUNC_1(VAR_0, VAR_2);


 VAR_1->pack_mtime = 0;
 return 0;
}
