
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;
struct dmatest_params {scalar_t__ iterations; } ;
struct dmatest_info {struct dmatest_params params; } ;


 int FUNC_0 (struct dmatest_info*) ;
 int FUNC_1 (char*,struct kernel_param const*) ;
 struct dmatest_info VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, const struct kernel_param *VAR_4)
{
 struct dmatest_info *VAR_5 = &VAR_0;
 struct dmatest_params *VAR_6 = &VAR_5->params;

 if (VAR_6->iterations)
  FUNC_2(VAR_1, !FUNC_0(VAR_5));
 VAR_2 = 1;
 return FUNC_1(VAR_3, VAR_4);
}
