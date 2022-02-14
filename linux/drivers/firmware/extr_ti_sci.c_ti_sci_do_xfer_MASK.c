
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sci_xfer {int done; int tx_message; } ;
struct ti_sci_info {int chan_tx; TYPE_1__* desc; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int max_rx_timeout_ms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,void*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static inline int FUNC_5(struct ti_sci_info *VAR_2,
     struct ti_sci_xfer *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct device *VAR_6 = VAR_2->dev;

 VAR_4 = FUNC_2(VAR_2->chan_tx, &VAR_3->tx_message);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = 0;


 VAR_5 = FUNC_3(VAR_2->desc->max_rx_timeout_ms);
 if (!FUNC_4(&VAR_3->done, VAR_5)) {
  FUNC_0(VAR_6, "Mbox timedout in resp(caller: %pS)\n",
   (void *)VAR_1);
  VAR_4 = -VAR_0;
 }






 FUNC_1(VAR_2->chan_tx, VAR_4);

 return VAR_4;
}
