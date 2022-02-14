
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi_cec {int tx_done; int rx_done; int rx_msg; int tx_status; } ;
struct cec_adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct dw_hdmi_cec* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct cec_adapter*,int *) ;
 int FUNC_2 (struct cec_adapter*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct cec_adapter *VAR_3 = VAR_2;
 struct dw_hdmi_cec *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->tx_done) {
  VAR_4->tx_done = 0;
  FUNC_2(VAR_3, VAR_4->tx_status);
 }
 if (VAR_4->rx_done) {
  VAR_4->rx_done = 0;
  FUNC_3();
  FUNC_1(VAR_3, &VAR_4->rx_msg);
 }
 return VAR_0;
}
