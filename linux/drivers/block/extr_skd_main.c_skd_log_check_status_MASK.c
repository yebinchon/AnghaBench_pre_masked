
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct skd_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct skd_device *VAR_1, u8 VAR_2, u8 VAR_3,
     u8 VAR_4, u8 VAR_5, u8 VAR_6)
{

 if ((VAR_2 == VAR_0) && (VAR_3 == 0x02)
     && (VAR_4 == 0x04) && (VAR_5 == 0x06)) {
  FUNC_0(&VAR_1->pdev->dev,
   "*** LOST_WRITE_DATA ERROR *** key/asc/ascq/fruc %02x/%02x/%02x/%02x\n",
   VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
