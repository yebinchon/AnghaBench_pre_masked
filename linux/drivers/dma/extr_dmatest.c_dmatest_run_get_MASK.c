
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;
struct dmatest_info {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmatest_info*) ;
 scalar_t__ FUNC_1 (struct dmatest_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct kernel_param const*) ;
 int FUNC_5 (struct dmatest_info*) ;
 struct dmatest_info VAR_1 ;

__attribute__((used)) static int FUNC_6(char *VAR_2, const struct kernel_param *VAR_3)
{
 struct dmatest_info *VAR_4 = &VAR_1;

 FUNC_2(&VAR_4->lock);
 if (FUNC_1(VAR_4)) {
  VAR_0 = 1;
 } else {
  if (!FUNC_0(VAR_4))
   FUNC_5(VAR_4);
  VAR_0 = 0;
 }
 FUNC_3(&VAR_4->lock);

 return FUNC_4(VAR_2, VAR_3);
}
