
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxl {TYPE_1__* base; int i2cdev; } ;
struct TYPE_2__ {int fwversion; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mxl*,int,int,int,int *) ;
 int FUNC_2 (struct mxl*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct mxl *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1, 0x90000190, 0, 3, &VAR_3);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->i2cdev, "chipID=%08x\n", VAR_3);

 VAR_2 = FUNC_1(VAR_1, 0x80030004, 8, 8, &VAR_3);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->i2cdev, "chipVer=%08x\n", VAR_3);

 VAR_2 = FUNC_2(VAR_1, VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->i2cdev, "FWVer=%08x\n", VAR_3);

 VAR_1->base->fwversion = VAR_3;
 return VAR_2;
}
