
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int data_stress_test; int control_ep_test; int random_tx_length; int random_tx_delay; int use_vendor_specific; int loop_data; scalar_t__ duration; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int,char*,char*,char*,char*,char*,char*,char*,char*,int,int,int) ;

void
FUNC_5(uint8_t VAR_1, uint16_t VAR_2, uint16_t VAR_3, uint32_t VAR_4)
{
 uint8_t VAR_5;

 FUNC_2(&VAR_0);

 VAR_0.duration = VAR_4;

 while (1) {

  VAR_5 = FUNC_4(VAR_1, "Modem Test Parameters",
      " 1) Execute Data Stress Test: <%s>\n"
      " 2) Execute Modem Control Endpoint Test: <%s>\n"
      " 3) Use random transmit length: <%s>\n"
      " 4) Use random transmit delay: <%s> ms\n"
      " 5) Use vendor specific interface: <%s>\n"
      "10) Loop data: <%s>\n"
      "13) Set test duration: <%d> seconds\n"
      "20) Reset parameters\n"
      "30) Start test (VID=0x%04x, PID=0x%04x)\n"
      "40) Select another device\n"
      " x) Return to previous menu \n",
      (VAR_0.data_stress_test ? "YES" : "NO"),
      (VAR_0.control_ep_test ? "YES" : "NO"),
      (VAR_0.random_tx_length ? "YES" : "NO"),
      (VAR_0.random_tx_delay ? "16" : "0"),
      (VAR_0.use_vendor_specific ? "YES" : "NO"),
      (VAR_0.loop_data ? "YES" : "NO"),
      (int)(VAR_0.duration),
      (int)VAR_2, (int)VAR_3);

  switch (VAR_5) {
  case 0:
   break;
  case 1:
   VAR_0.data_stress_test ^= 1;
   break;
  case 2:
   VAR_0.control_ep_test ^= 1;
   break;
  case 3:
   VAR_0.random_tx_length ^= 1;
   break;
  case 4:
   VAR_0.random_tx_delay ^= 1;
   break;
  case 5:
   VAR_0.use_vendor_specific ^= 1;
   VAR_0.control_ep_test = 0;
   break;
  case 10:
   VAR_0.loop_data ^= 1;
   break;
  case 13:
   VAR_0.duration = FUNC_1();
   break;
  case 20:
   FUNC_2(&VAR_0);
   break;
  case 30:
   FUNC_0(&VAR_0, VAR_2, VAR_3);
   break;
  case 40:
   FUNC_3(VAR_1 + 1, &VAR_2, &VAR_3);
   break;
  default:
   return;
  }
 }
}
