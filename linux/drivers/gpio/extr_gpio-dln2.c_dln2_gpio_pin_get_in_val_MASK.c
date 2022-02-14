
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dln2_gpio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dln2_gpio*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct dln2_gpio *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 return !!VAR_3;
}
