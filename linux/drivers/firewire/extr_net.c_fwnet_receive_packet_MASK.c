
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long offset; } ;
struct fwnet_device {TYPE_1__* netdev; TYPE_2__ handler; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fw_card*,struct fw_request*,int) ;
 scalar_t__ FUNC_2 (struct fwnet_device*,void*,size_t,int,int,int) ;
 int FUNC_3 (struct fw_request*) ;

__attribute__((used)) static void FUNC_4(struct fw_card *VAR_6, struct fw_request *VAR_7,
  int VAR_8, int VAR_9, int VAR_10, int VAR_11,
  unsigned long long VAR_12, void *VAR_13, size_t VAR_14,
  void *VAR_15)
{
 struct fwnet_device *VAR_16 = VAR_15;
 int VAR_17;

 if (VAR_9 == VAR_0) {
  FUNC_3(VAR_7);

  return;
 }

 if (VAR_12 != VAR_16->handler.offset)
  VAR_17 = VAR_1;
 else if (VAR_8 != VAR_5)
  VAR_17 = VAR_4;
 else if (FUNC_2(VAR_16, VAR_13, VAR_14,
           VAR_10, VAR_11, 0) != 0) {
  FUNC_0(&VAR_16->netdev->dev, "incoming packet failure\n");
  VAR_17 = VAR_3;
 } else
  VAR_17 = VAR_2;

 FUNC_1(VAR_6, VAR_7, VAR_17);
}
