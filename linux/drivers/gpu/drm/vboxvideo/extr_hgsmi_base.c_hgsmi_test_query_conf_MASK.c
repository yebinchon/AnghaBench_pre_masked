
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gen_pool*,scalar_t__,scalar_t__*) ;

int FUNC_1(struct gen_pool *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return VAR_3 == VAR_1 ? 0 : -VAR_0;
}
