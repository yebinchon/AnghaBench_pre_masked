
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct TYPE_2__ {size_t val_bytes; int (* parse_inplace ) (void*) ;} ;
struct regmap {scalar_t__ cache_type; int lock_arg; int (* unlock ) (int ) ;TYPE_1__ format; int (* lock ) (int ) ;scalar_t__ bus; int reg_stride; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct regmap*,scalar_t__,unsigned int*) ;
 scalar_t__ FUNC_2 (struct regmap*,int) ;
 int FUNC_3 (struct regmap*,unsigned int,void*,size_t) ;
 int FUNC_4 (struct regmap*,unsigned int,size_t) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct regmap *VAR_2, unsigned int VAR_3, void *VAR_4,
       size_t VAR_5)
{
 int VAR_6, VAR_7;
 size_t VAR_8 = VAR_2->format.val_bytes;
 bool VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_5);

 if (!FUNC_0(VAR_3, VAR_2->reg_stride))
  return -VAR_0;
 if (VAR_5 == 0)
  return -VAR_0;

 if (VAR_2->bus && VAR_2->format.parse_inplace && (VAR_9 || VAR_2->cache_type == VAR_1)) {
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_8 * VAR_5);
  if (VAR_6 != 0)
   return VAR_6;

  for (VAR_7 = 0; VAR_7 < VAR_5 * VAR_8; VAR_7 += VAR_8)
   VAR_2->format.parse_inplace(VAR_4 + VAR_7);
 } else {



  u32 *VAR_10 = VAR_4;
  u16 *VAR_11 = VAR_4;
  u8 *VAR_12 = VAR_4;

  VAR_2->lock(VAR_2->lock_arg);

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   unsigned int VAR_13;

   VAR_6 = FUNC_1(VAR_2, VAR_3 + FUNC_2(VAR_2, VAR_7),
        &VAR_13);
   if (VAR_6 != 0)
    goto out;

   switch (VAR_2->format.val_bytes) {





   case 4:
    VAR_10[VAR_7] = VAR_13;
    break;
   case 2:
    VAR_11[VAR_7] = VAR_13;
    break;
   case 1:
    VAR_12[VAR_7] = VAR_13;
    break;
   default:
    VAR_6 = -VAR_0;
    goto out;
   }
  }

out:
  VAR_2->unlock(VAR_2->lock_arg);
 }

 return VAR_6;
}
