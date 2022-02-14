
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* eq; } ;
struct mthca_dev {int pdev; TYPE_1__ eq_table; } ;
struct TYPE_4__ {void* msi_x_vector; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct mthca_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->pdev, 3, 3, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->eq_table.eq[VAR_2 ].msi_x_vector =
   FUNC_1(VAR_4->pdev, 0);
 VAR_4->eq_table.eq[VAR_0].msi_x_vector =
   FUNC_1(VAR_4->pdev, 1);
 VAR_4->eq_table.eq[VAR_1 ].msi_x_vector =
   FUNC_1(VAR_4->pdev, 2);

 return 0;
}
