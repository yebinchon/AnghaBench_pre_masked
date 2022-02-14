
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_lsm6dsx_hw {int page_lock; int regmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,int) ;

__attribute__((used)) static int
FUNC_4(struct st_lsm6dsx_hw *VAR_0, u8 VAR_1,
        u8 VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->page_lock);
 VAR_4 = FUNC_3(VAR_0, 1);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_2(VAR_0->regmap, VAR_1, VAR_2, VAR_3);

 FUNC_3(VAR_0, 0);
out:
 FUNC_1(&VAR_0->page_lock);

 return VAR_4;
}
