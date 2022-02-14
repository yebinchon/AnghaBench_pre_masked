
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * proposed_mac; } ;
struct flexcop_device {scalar_t__ (* get_mac_addr ) (struct flexcop_device*,int ) ;TYPE_1__ dvb_adapter; } ;
struct TYPE_4__ {scalar_t__ raw; } ;


 int FUNC_0 (struct flexcop_device*) ;
 int FUNC_1 (struct flexcop_device*) ;
 int FUNC_2 (struct flexcop_device*,char*,char*) ;
 int FUNC_3 (struct flexcop_device*) ;
 int FUNC_4 (struct flexcop_device*) ;
 int FUNC_5 (struct flexcop_device*) ;
 int FUNC_6 (struct flexcop_device*) ;
 int FUNC_7 (struct flexcop_device*,int) ;
 int FUNC_8 (struct flexcop_device*) ;
 int FUNC_9 (struct flexcop_device*,int *) ;
 int FUNC_10 (struct flexcop_device*,int ) ;
 int FUNC_11 (struct flexcop_device*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_12 (char*,int *) ;
 scalar_t__ FUNC_13 (struct flexcop_device*,int ) ;
 int FUNC_14 (char*) ;

int FUNC_15(struct flexcop_device *VAR_1)
{
 int VAR_2;
 VAR_0.raw = 0;

 FUNC_8(VAR_1);
 FUNC_0(VAR_1);
 FUNC_11(VAR_1);
 FUNC_5(VAR_1);
 FUNC_10(VAR_1, 0);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto error;



 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto error;


 if (VAR_1->get_mac_addr(VAR_1, 0) == 0) {
  u8 *VAR_3 = VAR_1->dvb_adapter.proposed_mac;
  FUNC_12("MAC address = %pM", VAR_3);
  FUNC_9(VAR_1,VAR_3);
  FUNC_7(VAR_1,1);
 } else
  FUNC_14("reading of MAC address failed.\n");

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto error;

 FUNC_2(VAR_1,"initialization of","complete");
 return 0;

error:
 FUNC_1(VAR_1);
 return VAR_2;
}
