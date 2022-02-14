
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct qib_devdata {int msi_data; int flags; TYPE_1__* pcidev; int msi_hi; int msi_lo; } ;
struct TYPE_5__ {int msi_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (struct qib_devdata*,char*) ;
 int FUNC_5 (struct qib_devdata*) ;

int FUNC_6(struct qib_devdata *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 int VAR_9 = 0;


 if (!VAR_6->msi_lo)
  goto bail;

 VAR_7 = VAR_6->pcidev->msi_cap;
 if (!VAR_7) {
  FUNC_4(VAR_6,
   "Can't find MSI capability, can't restore MSI settings\n");
  VAR_9 = 0;

  goto bail;
 }
 FUNC_2(VAR_6->pcidev, VAR_7 + VAR_1,
          VAR_6->msi_lo);
 FUNC_2(VAR_6->pcidev, VAR_7 + VAR_0,
          VAR_6->msi_hi);
 FUNC_0(VAR_6->pcidev, VAR_7 + VAR_2, &VAR_8);
 if (!(VAR_8 & VAR_4)) {
  VAR_8 |= VAR_4;
  FUNC_3(VAR_6->pcidev, VAR_7 + VAR_2,
          VAR_8);
 }

 FUNC_3(VAR_6->pcidev, VAR_7 +
         ((VAR_8 & VAR_3) ? 12 : 8),
         VAR_6->msi_data);
 VAR_9 = 1;
bail:
 FUNC_5(VAR_6);

 if (!VAR_9 && (VAR_6->flags & VAR_5))
  VAR_9 = 1;


 FUNC_1(VAR_6->pcidev);

 return VAR_9;
}
