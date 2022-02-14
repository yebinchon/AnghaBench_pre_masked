
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u8 ;
typedef unsigned long long u64 ;
struct cpt_device {TYPE_1__* pdev; int reg_base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (struct cpt_device*,unsigned long long) ;
 int FUNC_2 (struct cpt_device*,unsigned long long) ;
 unsigned long long FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*,unsigned long long,...) ;

void FUNC_5 (struct cpt_device *VAR_1, int VAR_2)
{
 u64 VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_3(VAR_1->reg_base, FUNC_0(0, 0));
 FUNC_4(&VAR_1->pdev->dev, "PF interrupt Mbox%d 0x%llx\n", VAR_2, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3 & (1ULL << VAR_4)) {
   FUNC_4(&VAR_1->pdev->dev, "Intr from VF %d\n", VAR_4);
   FUNC_2(VAR_1, VAR_4);
   FUNC_1(VAR_1, VAR_4);
  }
 }
}
