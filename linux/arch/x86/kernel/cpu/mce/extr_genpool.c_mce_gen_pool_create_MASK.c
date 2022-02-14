
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce_evt_llist {int dummy; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gen_pool*,unsigned long,int ,int) ;
 scalar_t__ VAR_2 ;
 struct gen_pool* FUNC_1 (int ,int) ;
 int FUNC_2 (struct gen_pool*) ;
 int FUNC_3 (int) ;
 struct gen_pool* VAR_3 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct gen_pool *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_1(FUNC_3(sizeof(struct mce_evt_llist)), -1);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_0(VAR_4, (unsigned long)VAR_2, VAR_1, -1);
 if (VAR_5) {
  FUNC_2(VAR_4);
  goto out;
 }

 VAR_3 = VAR_4;

out:
 return VAR_5;
}
