
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct repository {int dummy; } ;
struct pack_entry {int dummy; } ;
struct object_id {int dummy; } ;
struct multi_pack_index {int dummy; } ;


 int FUNC_0 (struct object_id const*,struct multi_pack_index*,int *) ;
 int FUNC_1 (struct repository*,struct multi_pack_index*,struct pack_entry*,int ) ;

int FUNC_2(struct repository * VAR_0,
      const struct object_id *VAR_1,
      struct pack_entry *VAR_2,
      struct multi_pack_index *VAR_3)
{
 uint32_t VAR_4;

 if (!FUNC_0(VAR_1, VAR_3, &VAR_4))
  return 0;

 return FUNC_1(VAR_0, VAR_3, VAR_2, VAR_4);
}
