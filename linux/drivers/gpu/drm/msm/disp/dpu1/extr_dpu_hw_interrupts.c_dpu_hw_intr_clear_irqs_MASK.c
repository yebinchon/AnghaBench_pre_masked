
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_hw_intr {int hw; } ;
struct TYPE_3__ {int clr_off; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct dpu_hw_intr *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  FUNC_1(&VAR_2->hw, VAR_1[VAR_3].clr_off, 0xffffffff);


 FUNC_2();

 return 0;
}
