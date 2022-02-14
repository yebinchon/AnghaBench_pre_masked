
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t val_bytes; } ;
struct regmap {size_t max_raw_write; scalar_t__ use_single_write; TYPE_1__ format; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,unsigned int,void const*,size_t) ;
 scalar_t__ FUNC_1 (struct regmap*,size_t) ;

int FUNC_2(struct regmap *VAR_1, unsigned int VAR_2,
        const void *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = VAR_1->format.val_bytes;
 size_t VAR_6 = VAR_4 / VAR_5;
 size_t VAR_7, VAR_8;
 size_t VAR_9 = VAR_6;
 int VAR_10, VAR_11;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_1->use_single_write)
  VAR_9 = 1;
 else if (VAR_1->max_raw_write && VAR_4 > VAR_1->max_raw_write)
  VAR_9 = VAR_1->max_raw_write / VAR_5;

 VAR_7 = VAR_6 / VAR_9;
 VAR_8 = VAR_9 * VAR_5;


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_8);
  if (VAR_10)
   return VAR_10;

  VAR_2 += FUNC_1(VAR_1, VAR_9);
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;
 }


 if (VAR_4)
  VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_10;
}
