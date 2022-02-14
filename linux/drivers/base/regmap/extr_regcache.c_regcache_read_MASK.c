
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {scalar_t__ cache_type; TYPE_1__* cache_ops; } ;
struct TYPE_2__ {int (* read ) (struct regmap*,unsigned int,unsigned int*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_4(struct regmap *VAR_3,
    unsigned int VAR_4, unsigned int *VAR_5)
{
 int VAR_6;

 if (VAR_3->cache_type == VAR_2)
  return -VAR_1;

 FUNC_0(!VAR_3->cache_ops);

 if (!FUNC_1(VAR_3, VAR_4)) {
  VAR_6 = VAR_3->cache_ops->read(VAR_3, VAR_4, VAR_5);

  if (VAR_6 == 0)
   FUNC_3(VAR_3, VAR_4, *VAR_5);

  return VAR_6;
 }

 return -VAR_0;
}
