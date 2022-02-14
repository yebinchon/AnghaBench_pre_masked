
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qib_devdata {int lbus_width; int lbus_speed; int flags; int lbus_info; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int msi_cap; scalar_t__ msi_enabled; int msix_enabled; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int,int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,char*,...) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct qib_devdata*) ;
 int FUNC_7 (int ,int,char*,int,int) ;

int FUNC_8(struct qib_devdata *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;
 unsigned int VAR_12 = VAR_3 | VAR_2;

 if (!FUNC_1(VAR_5->pcidev)) {
  FUNC_4(VAR_5, "Can't find PCI Express capability!\n");

  VAR_5->lbus_width = 1;
  VAR_5->lbus_speed = 2500;
  VAR_10 = -1;
  goto bail;
 }

 if (VAR_5->flags & VAR_4)
  VAR_12 |= VAR_1;
 VAR_11 = (VAR_7 && *VAR_7) ? *VAR_7 : 1;
 VAR_10 = FUNC_0(VAR_5->pcidev, 1, VAR_11, VAR_12);
 if (VAR_10 < 0)
  goto bail;






 if (VAR_7)
  *VAR_7 = !VAR_5->pcidev->msix_enabled ? 0 : VAR_10;

 if (VAR_5->pcidev->msi_enabled)
  FUNC_3(VAR_5, VAR_5->pcidev->msi_cap);

 FUNC_2(VAR_5->pcidev, VAR_0, &VAR_8);




 VAR_9 = VAR_8 & 0xf;
 VAR_8 >>= 4;
 VAR_8 &= 0x1f;
 VAR_5->lbus_width = VAR_8;

 switch (VAR_9) {
 case 1:
  VAR_5->lbus_speed = 2500;
  break;
 case 2:
  VAR_5->lbus_speed = 5000;
  break;
 default:
  VAR_5->lbus_speed = 2500;
  break;
 }





 if (VAR_6 && VAR_8 < VAR_6)
  FUNC_4(VAR_5,
       "PCIe width %u (x%u HCA), performance reduced\n",
       VAR_8, VAR_6);

 FUNC_5(VAR_5);

 FUNC_6(VAR_5);

bail:

 FUNC_7(VAR_5->lbus_info, sizeof(VAR_5->lbus_info),
   "PCIe,%uMHz,x%u\n", VAR_5->lbus_speed, VAR_5->lbus_width);
 return VAR_10 < 0 ? VAR_10 : 0;
}
