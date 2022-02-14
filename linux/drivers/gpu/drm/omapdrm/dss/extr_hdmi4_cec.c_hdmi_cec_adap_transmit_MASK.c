
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hdmi_core_data {int base; } ;
struct cec_msg {int len; int* msg; } ;
struct cec_adapter {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ,scalar_t__,int,int) ;
 struct hdmi_core_data* FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct cec_msg*) ;
 int FUNC_3 (struct cec_msg*) ;
 int FUNC_4 (struct cec_adapter*) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct cec_adapter *VAR_11, u8 VAR_12,
       u32 VAR_13, struct cec_msg *VAR_14)
{
 struct hdmi_core_data *VAR_15 = FUNC_1(VAR_11);
 int VAR_16;
 u32 VAR_17;


 if (!FUNC_4(VAR_11)) {
  FUNC_6("cec-%s: could not clear TX FIFO for transmit\n",
         VAR_11->name);
  return -VAR_0;
 }


 FUNC_5(VAR_15->base, VAR_2,
         VAR_8);

 FUNC_5(VAR_15->base, VAR_3,
         VAR_4);


 FUNC_0(VAR_15->base, VAR_1, VAR_12 - 1, 6, 4);


 FUNC_5(VAR_15->base, VAR_9, FUNC_3(VAR_14));


 VAR_16 = FUNC_2(VAR_14);
 if (VAR_14->len == 1)
  VAR_16 |= 0x80;
 FUNC_5(VAR_15->base, VAR_7, VAR_16);
 if (VAR_14->len == 1)
  return 0;


 FUNC_5(VAR_15->base, VAR_6, VAR_14->msg[1]);

 for (VAR_17 = 0; VAR_17 < VAR_14->len - 2; VAR_17++)
  FUNC_5(VAR_15->base, VAR_10 + VAR_17 * 4,
          VAR_14->msg[2 + VAR_17]);


 FUNC_5(VAR_15->base, VAR_5,
         (VAR_14->len - 2) | 0x10);
 return 0;
}
