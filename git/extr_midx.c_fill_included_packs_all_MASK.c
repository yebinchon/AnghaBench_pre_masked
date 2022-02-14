
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct multi_pack_index {size_t num_packs; } ;



__attribute__((used)) static int FUNC_0(struct multi_pack_index *VAR_0,
       unsigned char *VAR_1)
{
 uint32_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_packs; VAR_2++)
  VAR_1[VAR_2] = 1;

 return VAR_0->num_packs < 2;
}
