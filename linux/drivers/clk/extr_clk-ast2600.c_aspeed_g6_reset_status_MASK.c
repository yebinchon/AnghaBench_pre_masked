
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct aspeed_reset {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int,int*) ;
 struct aspeed_reset* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_2,
      unsigned long VAR_3)
{
 struct aspeed_reset *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = FUNC_0(VAR_3);
 u32 VAR_8 = VAR_3 >= 32 ? VAR_1 : VAR_0;

 VAR_5 = FUNC_1(VAR_4->map, VAR_8, &VAR_6);
 if (VAR_5)
  return VAR_5;

 return !!(VAR_6 & VAR_7);
}
