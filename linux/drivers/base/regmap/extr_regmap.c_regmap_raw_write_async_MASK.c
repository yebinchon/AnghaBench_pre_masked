
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t val_bytes; } ;
struct regmap {int async; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;int reg_stride; TYPE_1__ format; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct regmap*,unsigned int,void const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct regmap *VAR_1, unsigned int VAR_2,
      const void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 if (VAR_4 % VAR_1->format.val_bytes)
  return -VAR_0;
 if (!FUNC_0(VAR_2, VAR_1->reg_stride))
  return -VAR_0;

 VAR_1->lock(VAR_1->lock_arg);

 VAR_1->async = 1;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_1->async = 0;

 VAR_1->unlock(VAR_1->lock_arg);

 return VAR_5;
}
