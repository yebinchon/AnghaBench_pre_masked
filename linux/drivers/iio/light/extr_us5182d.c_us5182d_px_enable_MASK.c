
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us5182d_data {scalar_t__ power_mode; int als_enabled; int px_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct us5182d_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct us5182d_data *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 if (VAR_3->power_mode == VAR_1) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_3->als_enabled = 0;
 }

 if (VAR_3->px_enabled)
  return 0;

 VAR_5 = VAR_3->als_enabled ? VAR_0 : VAR_2;

 VAR_4 = FUNC_0(VAR_3, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->px_enabled = 1;

 return 0;
}
