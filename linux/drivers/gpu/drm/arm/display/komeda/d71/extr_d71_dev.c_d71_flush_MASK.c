
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct komeda_dev {struct d71_dev* chip_data; } ;
struct d71_dev {int gcu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct komeda_dev *VAR_3,
        int VAR_4, u32 VAR_5)
{
 struct d71_dev *VAR_6 = VAR_3->chip_data;
 u32 VAR_7 = (VAR_4 == 0) ?
    VAR_1 : VAR_2;

 FUNC_0(VAR_6->gcu_addr, VAR_7, VAR_0);
}
