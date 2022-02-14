
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int async; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;int reg_stride; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct regmap *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_2, VAR_1->reg_stride))
  return -VAR_0;

 VAR_1->lock(VAR_1->lock_arg);

 VAR_1->async = 1;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_1->async = 0;

 VAR_1->unlock(VAR_1->lock_arg);

 return VAR_4;
}
