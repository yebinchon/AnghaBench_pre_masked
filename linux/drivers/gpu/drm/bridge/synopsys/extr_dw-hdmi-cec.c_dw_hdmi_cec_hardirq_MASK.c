
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; void** msg; } ;
struct dw_hdmi_cec {int tx_done; int rx_done; TYPE_1__ rx_msg; int tx_status; } ;
struct cec_adapter {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct dw_hdmi_cec* FUNC_0 (struct cec_adapter*) ;
 void* FUNC_1 (struct dw_hdmi_cec*,scalar_t__) ;
 int FUNC_2 (struct dw_hdmi_cec*,unsigned int,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_14, void *VAR_15)
{
 struct cec_adapter *VAR_16 = VAR_15;
 struct dw_hdmi_cec *VAR_17 = FUNC_0(VAR_16);
 unsigned int VAR_18 = FUNC_1(VAR_17, VAR_10);
 irqreturn_t VAR_19 = VAR_11;

 if (VAR_18 == 0)
  return VAR_12;

 FUNC_2(VAR_17, VAR_18, VAR_10);

 if (VAR_18 & VAR_2) {
  VAR_17->tx_status = VAR_4;
  VAR_17->tx_done = 1;
  VAR_19 = VAR_13;
 } else if (VAR_18 & VAR_0) {
  VAR_17->tx_status = VAR_6;
  VAR_17->tx_done = 1;
  VAR_19 = VAR_13;
 } else if (VAR_18 & VAR_3) {
  VAR_17->tx_status = VAR_5;
  VAR_17->tx_done = 1;
  VAR_19 = VAR_13;
 }

 if (VAR_18 & VAR_1) {
  unsigned int VAR_20, VAR_21;

  VAR_20 = FUNC_1(VAR_17, VAR_8);
  if (VAR_20 > sizeof(VAR_17->rx_msg.msg))
   VAR_20 = sizeof(VAR_17->rx_msg.msg);

  for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
   VAR_17->rx_msg.msg[VAR_21] =
    FUNC_1(VAR_17, VAR_9 + VAR_21);

  FUNC_2(VAR_17, 0, VAR_7);

  VAR_17->rx_msg.len = VAR_20;
  FUNC_3();
  VAR_17->rx_done = 1;

  VAR_19 = VAR_13;
 }

 return VAR_19;
}
