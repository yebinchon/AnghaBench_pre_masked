
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fwnet_packet_task {TYPE_2__* dev; } ;
struct fw_card {int dummy; } ;
struct TYPE_4__ {TYPE_1__* netdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct fwnet_packet_task*) ;
 int FUNC_2 (struct fwnet_packet_task*) ;
 scalar_t__ FUNC_3 (unsigned long*,int) ;

__attribute__((used)) static void FUNC_4(struct fw_card *VAR_1, int VAR_2,
     void *VAR_3, size_t VAR_4, void *VAR_5)
{
 struct fwnet_packet_task *VAR_6 = VAR_5;
 static unsigned long VAR_7;
 static int VAR_8, VAR_9;

 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_6);
 } else {
  if (FUNC_3(&VAR_7, 1000) || VAR_2 != VAR_8) {
   FUNC_0(&VAR_6->dev->netdev->dev,
    "fwnet_write_complete failed: %x (skipped %d)\n",
    VAR_2, VAR_9);

   VAR_9 = 0;
   VAR_8 = VAR_2;
  } else {
   VAR_9++;
  }
  FUNC_2(VAR_6);
 }
}
