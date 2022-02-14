
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
struct regmap {TYPE_1__ format; int alloc_flags; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;int bus; int reg_stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct regmap*,scalar_t__,unsigned int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void const*,size_t,int ) ;
 scalar_t__ FUNC_4 (struct regmap*,int) ;
 int FUNC_5 (struct regmap*,unsigned int,void*,size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;

int FUNC_9(struct regmap *VAR_2, unsigned int VAR_3, const void *VAR_4,
       size_t VAR_5)
{
 int VAR_6 = 0, VAR_7;
 size_t VAR_8 = VAR_2->format.val_bytes;

 if (!FUNC_0(VAR_3, VAR_2->reg_stride))
  return -VAR_0;





 if (!VAR_2->bus || !VAR_2->format.parse_inplace) {
  VAR_2->lock(VAR_2->lock_arg);
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   unsigned int VAR_9;

   switch (VAR_8) {
   case 1:
    VAR_9 = *(u8 *)(VAR_4 + (VAR_7 * VAR_8));
    break;
   case 2:
    VAR_9 = *(u16 *)(VAR_4 + (VAR_7 * VAR_8));
    break;
   case 4:
    VAR_9 = *(u32 *)(VAR_4 + (VAR_7 * VAR_8));
    break;





   default:
    VAR_6 = -VAR_0;
    goto out;
   }

   VAR_6 = FUNC_1(VAR_2,
         VAR_3 + FUNC_4(VAR_2, VAR_7),
         VAR_9);
   if (VAR_6 != 0)
    goto out;
  }
out:
  VAR_2->unlock(VAR_2->lock_arg);
 } else {
  void *VAR_10;

  VAR_10 = FUNC_3(VAR_4, VAR_5 * VAR_8, VAR_2->alloc_flags);
  if (!VAR_10)
   return -VAR_1;

  for (VAR_7 = 0; VAR_7 < VAR_5 * VAR_8; VAR_7 += VAR_8)
   VAR_2->format.parse_inplace(VAR_10 + VAR_7);

  VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_10, VAR_8 * VAR_5);

  FUNC_2(VAR_10);
 }
 return VAR_6;
}
