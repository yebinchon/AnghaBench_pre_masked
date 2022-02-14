
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_oe; int output_sel; } ;
union cvmx_gpio_bit_cfgx {void* u64; TYPE_1__ s; } ;
struct TYPE_4__ {int ppc_en; int ppc_active_high_en; } ;
union cvm_usbdrd_uctl_host_cfg {void* u64; TYPE_2__ s; } ;
typedef int uint32_t ;
typedef int u64 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,void*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 int * FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4, u64 VAR_5)
{

 union cvm_usbdrd_uctl_host_cfg VAR_6;
 union cvmx_gpio_bit_cfgx VAR_7;
 uint32_t VAR_8[3];
 int VAR_9, VAR_10, VAR_11;
 struct device_node *VAR_12 = VAR_4->of_node;
 int VAR_13 = (VAR_5 >> 24) & 1;

 if (FUNC_7(VAR_12, "power", &VAR_10) != ((void*)0)) {
  if (VAR_10 == 12) {
   FUNC_8(VAR_12, "power", VAR_8, 3);
   VAR_11 = VAR_8[2] & 0x01;
   VAR_9 = VAR_8[1];
  } else if (VAR_10 == 8) {
   FUNC_8(VAR_12, "power", VAR_8, 2);
   VAR_11 = 0;
   VAR_9 = VAR_8[1];
  } else {
   FUNC_5(VAR_4, "dwc3 controller clock init failure.\n");
   return -VAR_0;
  }
  if ((FUNC_2(VAR_1) ||
      FUNC_2(VAR_2))
      && VAR_9 <= 31) {
   VAR_7.u64 = FUNC_3(FUNC_0(VAR_9));
   VAR_7.s.tx_oe = 1;
   VAR_7.s.output_sel = (VAR_13 == 0 ? 0x14 : 0x15);
   FUNC_4(FUNC_0(VAR_9), VAR_7.u64);
  } else if (VAR_9 <= 15) {
   VAR_7.u64 = FUNC_3(FUNC_0(VAR_9));
   VAR_7.s.tx_oe = 1;
   VAR_7.s.output_sel = (VAR_13 == 0 ? 0x14 : 0x19);
   FUNC_4(FUNC_0(VAR_9), VAR_7.u64);
  } else {
   VAR_7.u64 = FUNC_3(FUNC_1(VAR_9));
   VAR_7.s.tx_oe = 1;
   VAR_7.s.output_sel = (VAR_13 == 0 ? 0x14 : 0x19);
   FUNC_4(FUNC_1(VAR_9), VAR_7.u64);
  }


  VAR_6.u64 = FUNC_3(VAR_5 + 0xe0);
  VAR_6.s.ppc_en = 1;
  VAR_6.s.ppc_active_high_en = !VAR_11;
  FUNC_4(VAR_5 + 0xe0, VAR_6.u64);
 } else {

  VAR_6.u64 = FUNC_3(VAR_5 + 0xe0);
  VAR_6.s.ppc_en = 0;
  VAR_6.s.ppc_active_high_en = 0;
  FUNC_4(VAR_5 + 0xe0, VAR_6.u64);
  FUNC_6(VAR_4, "dwc3 controller clock init failure.\n");
 }
 return 0;
}
