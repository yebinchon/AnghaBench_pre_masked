
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {long* fan_mode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nct7904_data* FUNC_0 (struct device*) ;


 int FUNC_1 (struct nct7904_data*,int ,int ,long) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_5, u32 VAR_6, int VAR_7,
        long VAR_8)
{
 struct nct7904_data *VAR_9 = FUNC_0(VAR_5);
 int VAR_10;

 switch (VAR_6) {
 case 128:
  if (VAR_8 < 0 || VAR_8 > 255)
   return -VAR_1;
  VAR_10 = FUNC_1(VAR_9, VAR_0, VAR_4 + VAR_7,
     VAR_8);
  return VAR_10;
 case 129:
  if (VAR_8 < 1 || VAR_8 > 2 ||
      (VAR_8 == 2 && !VAR_9->fan_mode[VAR_7]))
   return -VAR_1;
  VAR_10 = FUNC_1(VAR_9, VAR_0, VAR_3 + VAR_7,
     VAR_8 == 2 ? VAR_9->fan_mode[VAR_7] : 0);
  return VAR_10;
 default:
  return -VAR_2;
 }
}
