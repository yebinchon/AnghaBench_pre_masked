
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int hash; } ;
struct bitmap_index {int pack; } ;
typedef int off_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct bitmap_index *VAR_0,
        const struct object_id *VAR_1)
{
 off_t VAR_2 = FUNC_0(VAR_1->hash, VAR_0->pack);
 if (!VAR_2)
  return -1;

 return FUNC_1(VAR_0->pack, VAR_2);
}
