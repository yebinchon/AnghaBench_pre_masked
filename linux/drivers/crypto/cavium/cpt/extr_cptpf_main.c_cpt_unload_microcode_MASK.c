
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct microcode {int * code; int phys_base; int code_size; } ;
struct cpt_device {int reg_base; TYPE_1__* pdev; struct microcode* mcode; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ,unsigned long long) ;
 int FUNC_2 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct cpt_device *VAR_2)
{
 u32 VAR_3 = 0, VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct microcode *VAR_5 = &VAR_2->mcode[VAR_3];

  if (VAR_2->mcode[VAR_3].code)
   FUNC_2(&VAR_2->pdev->dev, VAR_5->code_size,
       VAR_5->code, VAR_5->phys_base);
  VAR_5->code = ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_2->reg_base,
    FUNC_0(0, VAR_4), 0ull);
}
