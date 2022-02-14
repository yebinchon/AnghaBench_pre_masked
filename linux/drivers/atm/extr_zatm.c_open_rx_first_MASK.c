
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zatm_vcc {unsigned short rx_chan; unsigned short pool; } ;
struct zatm_dev {int lock; struct atm_vcc** rx_map; } ;
struct TYPE_3__ {scalar_t__ traffic_class; int max_sdu; } ;
struct TYPE_4__ {scalar_t__ aal; TYPE_1__ rxtp; } ;
struct atm_vcc {TYPE_2__ qos; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,unsigned short,...) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 struct zatm_dev* FUNC_2 (int ) ;
 struct zatm_vcc* FUNC_3 (struct atm_vcc*) ;
 unsigned short FUNC_4 (int) ;
 unsigned short FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ,unsigned short) ;
 unsigned short FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct zatm_dev*,int,unsigned short) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct atm_vcc *VAR_16)
{
 struct zatm_dev *VAR_17;
 struct zatm_vcc *VAR_18;
 unsigned long VAR_19;
 unsigned short VAR_20;
 int VAR_21;

 FUNC_1("open_rx_first (0x%x)\n",FUNC_4(0xc053));
 VAR_17 = FUNC_2(VAR_16->dev);
 VAR_18 = FUNC_3(VAR_16);
 VAR_18->rx_chan = 0;
 if (VAR_16->qos.rxtp.traffic_class == VAR_3) return 0;
 if (VAR_16->qos.aal == VAR_0) {
  if (VAR_16->qos.rxtp.max_sdu > 65464)
   VAR_16->qos.rxtp.max_sdu = 65464;


  VAR_21 = FUNC_0(VAR_16->qos.rxtp.max_sdu + VAR_1,
    VAR_2);
  VAR_18->pool = FUNC_5(VAR_21*VAR_2);
 }
 else {
  VAR_21 = 1;
  VAR_18->pool = VAR_9;
 }
 if (VAR_18->pool < 0) return -VAR_7;
 FUNC_6(&VAR_17->lock, VAR_19);
 FUNC_12();
 FUNC_10(VAR_12,VAR_5);
 FUNC_12();
 FUNC_1("0x%x 0x%x\n",FUNC_9(VAR_5),FUNC_9(VAR_4));
 VAR_20 = (FUNC_9(VAR_5) & VAR_10) >> VAR_11;
 FUNC_7(&VAR_17->lock, VAR_19);
 FUNC_1("chan is %d\n",VAR_20);
 if (!VAR_20) return -VAR_6;
 FUNC_8(VAR_16->dev,VAR_18->pool);
 FUNC_1("pool %d\n",VAR_18->pool);

 FUNC_6(&VAR_17->lock, VAR_19);
 FUNC_11(VAR_17,VAR_18->pool << VAR_15,
     VAR_20*VAR_8/4);
 FUNC_11(VAR_17,VAR_14 | (VAR_16->qos.aal == VAR_0 ?
     VAR_13 : 0) | VAR_21,VAR_20*VAR_8/4+1);
 FUNC_11(VAR_17,0,VAR_20*VAR_8/4+2);
 VAR_18->rx_chan = VAR_20;
 VAR_17->rx_map[VAR_20] = VAR_16;
 FUNC_7(&VAR_17->lock, VAR_19);
 return 0;
}
