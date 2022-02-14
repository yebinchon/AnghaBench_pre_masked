
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_qm {scalar_t__ ver; TYPE_1__* pdev; scalar_t__ io_base; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned int,unsigned int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hisi_qm *VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3->ver == VAR_2) {
  FUNC_3(0x1, VAR_3->io_base + VAR_1);
  if (FUNC_2(VAR_3->io_base + VAR_0,
            VAR_4, VAR_4 & FUNC_0(0), 10, 1000))
   FUNC_1(&VAR_3->pdev->dev, "QM writeback sqc cache fail!\n");
 }
}
