
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device {int dummy; } ;
struct siw_device {TYPE_1__* netdev; int vendor_part_id; struct ib_device base_dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct ib_device*,char const*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ib_device*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct siw_device *VAR_0, const char *VAR_1)
{
 struct ib_device *VAR_2 = &VAR_0->base_dev;
 static int VAR_3 = 1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_1("siw: device registration error %d\n", VAR_4);
  return VAR_4;
 }
 VAR_0->vendor_part_id = VAR_3++;

 FUNC_2(VAR_2, "HWaddr=%pM\n", VAR_0->netdev->dev_addr);

 return 0;
}
