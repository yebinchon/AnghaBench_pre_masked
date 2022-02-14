
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct TYPE_2__ {unsigned int (* parse_val ) (int ) ;} ;
struct regmap {int cache_word_size; TYPE_1__ format; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct regmap*,void const*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;

unsigned int FUNC_3(struct regmap *VAR_1, const void *VAR_2,
         unsigned int VAR_3)
{
 if (!VAR_2)
  return -VAR_0;


 if (VAR_1->format.parse_val)
  return VAR_1->format.parse_val(FUNC_1(VAR_1, VAR_2,
           VAR_3));

 switch (VAR_1->cache_word_size) {
 case 1: {
  const u8 *VAR_4 = VAR_2;

  return VAR_4[VAR_3];
 }
 case 2: {
  const u16 *VAR_5 = VAR_2;

  return VAR_5[VAR_3];
 }
 case 4: {
  const u32 *VAR_6 = VAR_2;

  return VAR_6[VAR_3];
 }







 default:
  FUNC_0();
 }

 return -1;
}
