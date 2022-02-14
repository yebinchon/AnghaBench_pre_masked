
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_dev {struct d71_dev* chip_data; } ;
struct d71_dev {int gcu_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct komeda_dev *VAR_1, int VAR_2)
{
 struct d71_dev *VAR_3 = VAR_1->chip_data;
 u32 VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 FUNC_2(VAR_3->gcu_addr, VAR_0, 0x7, VAR_4);

 VAR_5 = FUNC_0(((FUNC_1(VAR_3->gcu_addr, VAR_0) & 0x7) == VAR_4),
      100, 1000, 10000);

 return VAR_5;
}
