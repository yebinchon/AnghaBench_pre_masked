
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_lsm6dsx_hw {int page_lock; int regmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned int,void*,unsigned int) ;

__attribute__((used)) static inline int
FUNC_3(struct st_lsm6dsx_hw *VAR_0, unsigned int VAR_1,
         void *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->page_lock);
 VAR_4 = FUNC_2(VAR_0->regmap, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->page_lock);

 return VAR_4;
}
