
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rb91x_nand_info {int gpio_nce; int gpio_ale; int gpio_cle; } ;
struct mtd_info {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct rb91x_nand_info* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct rb91x_nand_info*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_5, int VAR_6,
    unsigned int VAR_7)
{
 struct rb91x_nand_info *VAR_8 = FUNC_1(VAR_5);

 if (VAR_7 & VAR_3) {
  FUNC_0(VAR_8->gpio_cle,
     (VAR_7 & VAR_1) ? 1 : 0);
  FUNC_0(VAR_8->gpio_ale,
     (VAR_7 & VAR_0) ? 1 : 0);
  FUNC_0(VAR_8->gpio_nce,
     (VAR_7 & VAR_4) ? 0 : 1);
 }

 if (VAR_6 != VAR_2) {
  u8 VAR_9 = VAR_6;

  FUNC_2(VAR_8, &VAR_9, 1);
 }
}
