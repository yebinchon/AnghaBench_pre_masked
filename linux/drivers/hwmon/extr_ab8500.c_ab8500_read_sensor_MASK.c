
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct abx500_temp {struct ab8500_temp* plat_data; } ;
struct ab8500_temp {int cfg; int gpadc; int btemp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,int*) ;

__attribute__((used)) static int FUNC_4(struct abx500_temp *VAR_2, u8 VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;
 struct ab8500_temp *VAR_7 = VAR_2->plat_data;

 if (VAR_3 == VAR_0) {
  *VAR_4 = FUNC_0(VAR_7->btemp);
 } else if (VAR_3 == VAR_1) {
  *VAR_4 = FUNC_1(VAR_7->btemp);
 } else {
  VAR_5 = FUNC_2(VAR_7->gpadc, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_6 = FUNC_3(&VAR_7->cfg, VAR_5, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
