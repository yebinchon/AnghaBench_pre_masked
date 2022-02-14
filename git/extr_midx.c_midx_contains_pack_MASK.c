
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct multi_pack_index {scalar_t__ num_packs; char** pack_names; } ;


 int FUNC_0 (char const*,char const*) ;

int FUNC_1(struct multi_pack_index *VAR_0, const char *VAR_1)
{
 uint32_t VAR_2 = 0, VAR_3 = VAR_0->num_packs;

 while (VAR_2 < VAR_3) {
  uint32_t VAR_4 = VAR_2 + (VAR_3 - VAR_2) / 2;
  const char *VAR_5;
  int VAR_6;

  VAR_5 = VAR_0->pack_names[VAR_4];
  VAR_6 = FUNC_0(VAR_1, VAR_5);
  if (!VAR_6)
   return 1;
  if (VAR_6 > 0) {
   VAR_2 = VAR_4 + 1;
   continue;
  }
  VAR_3 = VAR_4;
 }

 return 0;
}
