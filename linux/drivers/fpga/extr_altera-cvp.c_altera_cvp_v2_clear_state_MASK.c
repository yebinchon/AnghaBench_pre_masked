
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct altera_cvp_conf {TYPE_1__* priv; TYPE_2__* pci_dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int poll_time_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct altera_cvp_conf*,int ,int ,int ) ;
 int FUNC_1 (struct altera_cvp_conf*,int ,int *) ;
 int FUNC_2 (struct altera_cvp_conf*,int ,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct altera_cvp_conf *VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4);
 if (VAR_5) {
  FUNC_3(&VAR_3->pci_dev->dev,
   "Error reading CVP Program Control Register\n");
  return VAR_5;
 }

 VAR_4 &= ~VAR_1;
 VAR_5 = FUNC_2(VAR_3, VAR_0, VAR_4);
 if (VAR_5) {
  FUNC_3(&VAR_3->pci_dev->dev,
   "Error writing CVP Program Control Register\n");
  return VAR_5;
 }

 return FUNC_0(VAR_3, VAR_2, 0,
          VAR_3->priv->poll_time_us);
}
