
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_dev {struct d71_dev* chip_data; } ;
struct d71_pipeline {int dou_addr; } ;
struct d71_dev {struct d71_pipeline** pipes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct komeda_dev *VAR_2, int VAR_3, bool VAR_4)
{
 struct d71_dev *VAR_5 = VAR_2->chip_data;
 struct d71_pipeline *VAR_6 = VAR_5->pipes[VAR_3];

 FUNC_0(VAR_6->dou_addr, VAR_0,
       VAR_1, VAR_4 ? VAR_1 : 0);
}
