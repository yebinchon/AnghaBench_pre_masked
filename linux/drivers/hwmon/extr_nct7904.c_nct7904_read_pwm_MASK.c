
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nct7904_data* FUNC_0 (struct device*) ;


 int FUNC_1 (struct nct7904_data*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, u32 VAR_5, int VAR_6,
       long *VAR_7)
{
 struct nct7904_data *VAR_8 = FUNC_0(VAR_4);
 int VAR_9;

 switch (VAR_5) {
 case 128:
  VAR_9 = FUNC_1(VAR_8, VAR_0, VAR_3 + VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_7 = VAR_9;
  return 0;
 case 129:
  VAR_9 = FUNC_1(VAR_8, VAR_0, VAR_2 + VAR_6);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_7 = VAR_9 ? 2 : 1;
  return 0;
 default:
  return -VAR_1;
 }
}
