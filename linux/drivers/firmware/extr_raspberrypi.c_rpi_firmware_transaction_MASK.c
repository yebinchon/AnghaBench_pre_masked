
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct rpi_firmware {TYPE_1__ cl; int c; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct rpi_firmware *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4, VAR_5);
 int VAR_7;

 FUNC_1(VAR_5 & 0xf);

 FUNC_5(&VAR_2);
 FUNC_7(&VAR_3->c);
 VAR_7 = FUNC_4(VAR_3->chan, &VAR_6);
 if (VAR_7 >= 0) {
  if (FUNC_8(&VAR_3->c, VAR_1)) {
   VAR_7 = 0;
  } else {
   VAR_7 = -VAR_0;
   FUNC_2(1, "Firmware transaction timeout");
  }
 } else {
  FUNC_3(VAR_3->cl.dev, "mbox_send_message returned %d\n", VAR_7);
 }
 FUNC_6(&VAR_2);

 return VAR_7;
}
