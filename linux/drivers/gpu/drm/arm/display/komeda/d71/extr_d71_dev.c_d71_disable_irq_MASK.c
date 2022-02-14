
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct komeda_dev {struct d71_dev* chip_data; } ;
struct d71_pipeline {int dou_addr; int lpu_addr; int cu_addr; } ;
struct d71_dev {size_t num_pipelines; struct d71_pipeline** pipes; int gcu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct komeda_dev *VAR_5)
{
 struct d71_dev *VAR_6 = VAR_5->chip_data;
 struct d71_pipeline *VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_6->gcu_addr, VAR_0, VAR_3, 0);
 for (VAR_8 = 0; VAR_8 < VAR_6->num_pipelines; VAR_8++) {
  VAR_7 = VAR_6->pipes[VAR_8];
  FUNC_0(VAR_7->cu_addr, VAR_0,
        VAR_1, 0);
  FUNC_0(VAR_7->lpu_addr, VAR_0,
        VAR_4, 0);
  FUNC_0(VAR_7->dou_addr, VAR_0,
        VAR_2, 0);
 }
 return 0;
}
