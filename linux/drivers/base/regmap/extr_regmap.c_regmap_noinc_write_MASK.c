
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {size_t val_bytes; } ;
struct regmap {size_t max_raw_write; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;int reg_stride; TYPE_2__ format; TYPE_1__* bus; } ;
struct TYPE_3__ {int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct regmap*,unsigned int,void const*,size_t) ;
 int FUNC_2 (struct regmap*,unsigned int) ;
 int FUNC_3 (struct regmap*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct regmap *VAR_2, unsigned int VAR_3,
        const void *VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 int VAR_7;

 if (!VAR_2->bus)
  return -VAR_0;
 if (!VAR_2->bus->write)
  return -VAR_1;
 if (VAR_5 % VAR_2->format.val_bytes)
  return -VAR_0;
 if (!FUNC_0(VAR_3, VAR_2->reg_stride))
  return -VAR_0;
 if (VAR_5 == 0)
  return -VAR_0;

 VAR_2->lock(VAR_2->lock_arg);

 if (!FUNC_2(VAR_2, VAR_3) || !FUNC_3(VAR_2, VAR_3)) {
  VAR_7 = -VAR_0;
  goto out_unlock;
 }

 while (VAR_5) {
  if (VAR_2->max_raw_write && VAR_2->max_raw_write < VAR_5)
   VAR_6 = VAR_2->max_raw_write;
  else
   VAR_6 = VAR_5;
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6);
  if (VAR_7)
   goto out_unlock;
  VAR_4 = ((u8 *)VAR_4) + VAR_6;
  VAR_5 -= VAR_6;
 }

out_unlock:
 VAR_2->unlock(VAR_2->lock_arg);
 return VAR_7;
}
