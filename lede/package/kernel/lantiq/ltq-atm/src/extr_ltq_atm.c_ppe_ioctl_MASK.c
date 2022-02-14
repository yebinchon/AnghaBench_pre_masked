
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct atm_dev {int dummy; } ;
typedef int mib_vcc ;
typedef int mib_cell ;
typedef int mib_aal5 ;
struct TYPE_14__ {int aal5VccSarTimeOuts; int aal5VccOverSizedSDUs; int aal5VccCrcErrors; } ;
struct TYPE_15__ {TYPE_2__ mib_vcc; int vci; int vpi; int ifOutDiscards; int ifOutErros; scalar_t__ ifInDiscards; int ifInErrors; int ifOutUcastPkts; int ifInUcastPkts; int ifHCOutOctets_l; int ifHCOutOctets_h; int ifHCInOctets_l; int ifHCInOctets_h; int ifOutErrors; int ifInUnknownProtos; } ;
typedef TYPE_3__ atm_cell_ifEntry_t ;
typedef TYPE_3__ atm_aal5_vcc_x_t ;
typedef TYPE_3__ atm_aal5_ifEntry_t ;
struct TYPE_16__ {int l; int h; } ;
struct TYPE_17__ {unsigned int prev_wrx_total_byte; unsigned int prev_wtx_total_byte; TYPE_1__* conn; int wtx_drop_pdu; int wtx_err_pdu; scalar_t__ wrx_drop_pdu; int wrx_pdu; TYPE_6__ wtx_total_byte; TYPE_6__ wrx_total_byte; } ;
struct TYPE_13__ {int aal5_vcc_oversize_sdu; int aal5_vcc_crc_err; } ;
struct TYPE_12__ {unsigned int wrx_total_byte; unsigned int wtx_total_byte; scalar_t__ wrx_dropdes_pdu; int wrx_err_pdu; int wtx_total_pdu; int wrx_drophtu_cell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 TYPE_11__* VAR_8 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_9 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int VAR_10 ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (TYPE_3__*,void*,int) ;
 int FUNC_6 (void*,TYPE_3__*,int) ;
 int FUNC_7 (int ,int ) ;
 TYPE_8__ VAR_11 ;
 int FUNC_8 (TYPE_6__,int ,TYPE_6__*) ;

__attribute__((used)) static int FUNC_9(struct atm_dev *VAR_12, unsigned int VAR_13, void *VAR_14)
{
 int VAR_15 = 0;
 atm_cell_ifEntry_t VAR_16;
 atm_aal5_ifEntry_t VAR_17;
 atm_aal5_vcc_x_t VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 if ( FUNC_3(VAR_13) != VAR_4
   || FUNC_1(VAR_13) >= VAR_5 )
  return -VAR_3;

 if ( FUNC_0(VAR_13) & VAR_9 )
  VAR_15 = !FUNC_4(VAR_7, VAR_14, FUNC_2(VAR_13));
 else if ( FUNC_0(VAR_13) & VAR_10 )
  VAR_15 = !FUNC_4(VAR_6, VAR_14, FUNC_2(VAR_13));
 if ( VAR_15 )
  return -VAR_0;

 switch (VAR_13) {
 case 129:

  VAR_16.ifHCInOctets_h = 0;
  VAR_16.ifHCInOctets_l = 0;
  VAR_16.ifHCOutOctets_h = 0;
  VAR_16.ifHCOutOctets_l = 0;
  VAR_16.ifInErrors = 0;
  VAR_16.ifInUnknownProtos = VAR_8->wrx_drophtu_cell;
  VAR_16.ifOutErrors = 0;

  VAR_15 = sizeof(VAR_16) - FUNC_6(VAR_14, &VAR_16, sizeof(VAR_16));
  break;

 case 130:
  VAR_19 = VAR_8->wrx_total_byte;
  FUNC_8(VAR_11.wrx_total_byte, VAR_19 - VAR_11.prev_wrx_total_byte, &VAR_11.wrx_total_byte);
  VAR_11.prev_wrx_total_byte = VAR_19;
  VAR_17 = VAR_11.wrx_total_byte.h;
  VAR_17 = VAR_11.wrx_total_byte.l;

  VAR_19 = VAR_8->wtx_total_byte;
  FUNC_8(VAR_11.wtx_total_byte, VAR_19 - VAR_11.prev_wtx_total_byte, &VAR_11.wtx_total_byte);
  VAR_11.prev_wtx_total_byte = VAR_19;
  VAR_17 = VAR_11.wtx_total_byte.h;
  VAR_17 = VAR_11.wtx_total_byte.l;

  VAR_17 = VAR_11.wrx_pdu;
  VAR_17 = VAR_8->wtx_total_pdu;
  VAR_17 = VAR_8->wrx_err_pdu;
  VAR_17 = VAR_8->wrx_dropdes_pdu + VAR_11.wrx_drop_pdu;
  VAR_17 = VAR_11.wtx_err_pdu;
  VAR_17 = VAR_11.wtx_drop_pdu;

  VAR_15 = sizeof(VAR_17) - FUNC_6(VAR_14, &VAR_17, sizeof(VAR_17));
  break;

 case 128:
  FUNC_5(&VAR_18, VAR_14, sizeof(VAR_18));
  VAR_20 = FUNC_7(VAR_18.vpi, VAR_18.vci);
  if (VAR_20 >= 0) {
   VAR_18.mib_vcc.aal5VccCrcErrors = VAR_11.conn[VAR_20].aal5_vcc_crc_err;
   VAR_18.mib_vcc.aal5VccOverSizedSDUs = VAR_11.conn[VAR_20].aal5_vcc_oversize_sdu;
   VAR_18.mib_vcc.aal5VccSarTimeOuts = 0;
   VAR_15 = sizeof(VAR_18) - FUNC_6(VAR_14, &VAR_18, sizeof(VAR_18));
  } else
   VAR_15 = -VAR_1;
  break;

 default:
  VAR_15 = -VAR_2;
 }

 return VAR_15;
}
