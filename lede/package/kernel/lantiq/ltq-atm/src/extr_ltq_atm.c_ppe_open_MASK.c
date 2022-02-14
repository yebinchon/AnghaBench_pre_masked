
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct port {scalar_t__ tx_max_cell_rate; scalar_t__ tx_current_cell_rate; } ;
struct TYPE_8__ {int traffic_class; scalar_t__ max_pcr; scalar_t__ scr; scalar_t__ min_pcr; } ;
struct TYPE_10__ {scalar_t__ aal; TYPE_2__ txtp; } ;
struct atm_vcc {short vpi; int vci; int itf; TYPE_4__ qos; TYPE_3__* dev; int flags; } ;
struct TYPE_12__ {int sbid; } ;
struct TYPE_11__ {scalar_t__ conn_table; TYPE_1__* conn; struct port* port; } ;
struct TYPE_9__ {scalar_t__ dev_data; } ;
struct TYPE_7__ {struct atm_vcc* vcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_6__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (short,int) ;
 TYPE_5__ VAR_13 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (short,int,int,int,int ) ;
 int FUNC_5 (struct atm_vcc*,TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct atm_vcc *VAR_14)
{
 int VAR_15;
 short VAR_16 = VAR_14->vpi;
 int VAR_17 = VAR_14->vci;
 struct port *VAR_18 = &VAR_13.port[(int)VAR_14->dev->dev_data];
 int VAR_19;
 int VAR_20 = 0;

 if ( VAR_14->qos.aal != VAR_1 && VAR_14->qos.aal != VAR_0 )
  return -VAR_5;



 if ( (VAR_14->qos.txtp.traffic_class == 131 && VAR_14->qos.txtp.max_pcr > (VAR_18->tx_max_cell_rate - VAR_18->tx_current_cell_rate))
  || (VAR_14->qos.txtp.traffic_class == 128 && VAR_14->qos.txtp.max_pcr > (VAR_18->tx_max_cell_rate - VAR_18->tx_current_cell_rate))



  || (VAR_14->qos.txtp.traffic_class == 130 && VAR_14->qos.txtp.min_pcr > (VAR_18->tx_max_cell_rate - VAR_18->tx_current_cell_rate)) )
 {
  VAR_15 = -VAR_4;
  goto PPE_OPEN_EXIT;
 }



 VAR_19 = FUNC_2(VAR_16, VAR_17);
 if ( VAR_19 >= 0 ) {
  VAR_15 = -VAR_3;
  goto PPE_OPEN_EXIT;
 }


 if ( VAR_13.conn_table == 0 )
  VAR_20 = 1;


 for ( VAR_19 = 0; VAR_19 < VAR_7; VAR_19++ ) {
  if ( FUNC_6(VAR_19, &VAR_13.conn_table) == 0 ) {
   VAR_13.conn[VAR_19].vcc = VAR_14;
   break;
  }
 }
 if ( VAR_19 == VAR_7 ) {
  VAR_15 = -VAR_4;
  goto PPE_OPEN_EXIT;
 }


 switch ( VAR_14->qos.txtp.traffic_class ) {
 case 131:
 case 128:
  VAR_18->tx_current_cell_rate += VAR_14->qos.txtp.max_pcr;
  break;
 case 129:



  break;
 case 130:
  VAR_18->tx_current_cell_rate += VAR_14->qos.txtp.min_pcr;
  break;
 }


 FUNC_5(VAR_14, &VAR_14->qos, VAR_19);


 VAR_14->itf = (int)VAR_14->dev->dev_data;
 VAR_14->vpi = VAR_16;
 VAR_14->vci = VAR_17;
 FUNC_3(VAR_2, &VAR_14->flags);


 if ( VAR_20 ) {
  *VAR_9 = (1 << VAR_11) | (1 << VAR_12);
  *VAR_8 = (1 << VAR_11) | (1 << VAR_12);

  FUNC_1(VAR_10);
 }


 FUNC_0(VAR_19 + VAR_6)->sbid = (int)VAR_14->dev->dev_data;


 FUNC_4(VAR_16, VAR_17, VAR_19, VAR_14->qos.aal == VAR_1 ? 1 : 0, 0);

 *VAR_9 |= (1 << (VAR_19 + VAR_6 + 16));
 *VAR_8 |= (1 << (VAR_19 + VAR_6 + 16));

 VAR_15 = 0;

PPE_OPEN_EXIT:
 return VAR_15;
}
