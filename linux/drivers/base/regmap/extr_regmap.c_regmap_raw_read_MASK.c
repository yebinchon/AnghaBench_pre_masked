
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t val_bytes; int (* format_val ) (void*,unsigned int,int ) ;} ;
struct regmap {scalar_t__ cache_type; size_t max_raw_read; int lock_arg; int (* unlock ) (int ) ;TYPE_2__ format; scalar_t__ use_single_read; TYPE_1__* bus; scalar_t__ cache_bypass; int (* lock ) (int ) ;int reg_stride; } ;
struct TYPE_3__ {int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct regmap*,unsigned int,void*,size_t) ;
 int FUNC_2 (struct regmap*,scalar_t__,unsigned int*) ;
 scalar_t__ FUNC_3 (struct regmap*,int) ;
 scalar_t__ FUNC_4 (struct regmap*,unsigned int,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,unsigned int,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct regmap *VAR_3, unsigned int VAR_4, void *VAR_5,
      size_t VAR_6)
{
 size_t VAR_7 = VAR_3->format.val_bytes;
 size_t VAR_8 = VAR_6 / VAR_7;
 unsigned int VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_3->bus)
  return -VAR_0;
 if (VAR_6 % VAR_3->format.val_bytes)
  return -VAR_0;
 if (!FUNC_0(VAR_4, VAR_3->reg_stride))
  return -VAR_0;
 if (VAR_8 == 0)
  return -VAR_0;

 VAR_3->lock(VAR_3->lock_arg);

 if (FUNC_4(VAR_3, VAR_4, VAR_8) || VAR_3->cache_bypass ||
     VAR_3->cache_type == VAR_2) {
  size_t VAR_12, VAR_13;
  size_t VAR_14 = VAR_8;

  if (!VAR_3->bus->read) {
   VAR_10 = -VAR_1;
   goto out;
  }

  if (VAR_3->use_single_read)
   VAR_14 = 1;
  else if (VAR_3->max_raw_read && VAR_6 > VAR_3->max_raw_read)
   VAR_14 = VAR_3->max_raw_read / VAR_7;

  VAR_12 = VAR_8 / VAR_14;
  VAR_13 = VAR_14 * VAR_7;


  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_13);
   if (VAR_10 != 0)
    goto out;

   VAR_4 += FUNC_3(VAR_3, VAR_14);
   VAR_5 += VAR_13;
   VAR_6 -= VAR_13;
  }


  if (VAR_6) {
   VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
   if (VAR_10 != 0)
    goto out;
  }
 } else {



  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_10 = FUNC_2(VAR_3, VAR_4 + FUNC_3(VAR_3, VAR_11),
        &VAR_9);
   if (VAR_10 != 0)
    goto out;

   VAR_3->format.format_val(VAR_5 + (VAR_11 * VAR_7), VAR_9, 0);
  }
 }

 out:
 VAR_3->unlock(VAR_3->lock_arg);

 return VAR_10;
}
