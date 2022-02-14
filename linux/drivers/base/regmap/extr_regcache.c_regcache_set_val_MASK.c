
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct TYPE_2__ {int (* format_val ) (void*,unsigned int,int ) ;} ;
struct regmap {unsigned int cache_word_size; TYPE_1__ format; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (struct regmap*,void*,unsigned int) ;
 int FUNC_2 (void*,unsigned int,int ) ;

bool FUNC_3(struct regmap *VAR_0, void *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 if (FUNC_1(VAR_0, VAR_1, VAR_2) == VAR_3)
  return 1;


 if (VAR_0->format.format_val) {
  VAR_0->format.format_val(VAR_1 + (VAR_0->cache_word_size * VAR_2),
           VAR_3, 0);
  return 0;
 }

 switch (VAR_0->cache_word_size) {
 case 1: {
  u8 *VAR_4 = VAR_1;

  VAR_4[VAR_2] = VAR_3;
  break;
 }
 case 2: {
  u16 *VAR_5 = VAR_1;

  VAR_5[VAR_2] = VAR_3;
  break;
 }
 case 4: {
  u32 *VAR_6 = VAR_1;

  VAR_6[VAR_2] = VAR_3;
  break;
 }
 default:
  FUNC_0();
 }
 return 0;
}
