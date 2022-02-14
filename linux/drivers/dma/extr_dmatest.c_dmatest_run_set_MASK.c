
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;
struct dmatest_info {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct dmatest_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,struct kernel_param const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct dmatest_info*) ;
 int FUNC_6 (struct dmatest_info*) ;
 struct dmatest_info VAR_1 ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, const struct kernel_param *VAR_3)
{
 struct dmatest_info *VAR_4 = &VAR_1;
 int VAR_5;

 FUNC_1(&VAR_4->lock);
 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_2(&VAR_4->lock);
  return VAR_5;
 } else if (VAR_0) {
  if (FUNC_0(VAR_4))
   FUNC_5(VAR_4);
  else
   FUNC_4("Could not start test, no channels configured\n");
 } else {
  FUNC_6(VAR_4);
 }

 FUNC_2(&VAR_4->lock);

 return VAR_5;
}
