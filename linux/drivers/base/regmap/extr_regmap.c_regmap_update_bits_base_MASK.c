
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int async; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int FUNC_0 (struct regmap*,unsigned int,unsigned int,unsigned int,int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct regmap *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, unsigned int VAR_3,
       bool *VAR_4, bool VAR_5, bool VAR_6)
{
 int VAR_7;

 VAR_0->lock(VAR_0->lock_arg);

 VAR_0->async = VAR_5;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);

 VAR_0->async = 0;

 VAR_0->unlock(VAR_0->lock_arg);

 return VAR_7;
}
