
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {scalar_t__ ifr_data; } ;
struct TYPE_10__ {int rx_eth_crc_present; int rx_eth_crc_check; int rx_tc_crc_check; int rx_tc_crc_len; int tx_eth_crc_gen; int tx_tc_crc_gen; int tx_tc_crc_len; } ;
struct TYPE_9__ {int wtx_total_pdu; scalar_t__ wrx_len_violation_drop_pdu; scalar_t__ wrx_nodesc_drop_pdu; int wrx_tccrc_err_pdu; int wrx_correct_pdu; int wrx_err_cw; int wrx_idle_cw; int wrx_nonidle_cw; } ;
struct TYPE_8__ {int RxEthCrcPresent; int RxEthCrcCheck; int RxTcCrcCheck; int RxTcCrcLen; int TxEthCrcGen; int TxTcCrcGen; int TxTcCrcLen; } ;
struct TYPE_7__ {int ifTxIdleCodewords; int ifTxNoIdleCodewords; int ifRxCodingViolation; int ifRxIdleCodewords; int ifRxNoIdleCodewords; } ;
struct TYPE_6__ {int TxSend; scalar_t__ RxDropped; int TC_CrcError; int RxCorrect; } ;
typedef TYPE_1__ PTM_FRAME_MIB_T ;
typedef TYPE_2__ PTM_CW_IF_ENTRY_T ;
typedef TYPE_3__ IFX_PTM_CFG_T ;


 int FUNC_0 (struct net_device**) ;
 int FUNC_1 (int,char*,int) ;
 TYPE_5__* VAR_0 ;
 int VAR_1 ;




 TYPE_4__* VAR_2 ;
 struct net_device** VAR_3 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
    int VAR_7;

    for ( VAR_7 = 0; VAR_7 < FUNC_0(VAR_3) && VAR_3[VAR_7] != VAR_4; VAR_7++ );
    FUNC_1(VAR_7 >= 0 && VAR_7 < FUNC_0(VAR_3), "ndev = %d (wrong value)", VAR_7);

    switch ( VAR_6 )
    {
    case 129:
        ((PTM_CW_IF_ENTRY_T *)VAR_5->ifr_data)->ifRxNoIdleCodewords = VAR_2[VAR_7].wrx_nonidle_cw;
        ((PTM_CW_IF_ENTRY_T *)VAR_5->ifr_data)->ifRxIdleCodewords = VAR_2[VAR_7].wrx_idle_cw;
        ((PTM_CW_IF_ENTRY_T *)VAR_5->ifr_data)->ifRxCodingViolation = VAR_2[VAR_7].wrx_err_cw;
        ((PTM_CW_IF_ENTRY_T *)VAR_5->ifr_data)->ifTxNoIdleCodewords = 0;
        ((PTM_CW_IF_ENTRY_T *)VAR_5->ifr_data)->ifTxIdleCodewords = 0;
        break;
    case 128:
        ((PTM_FRAME_MIB_T *)VAR_5->ifr_data)->RxCorrect = VAR_2[VAR_7].wrx_correct_pdu;
        ((PTM_FRAME_MIB_T *)VAR_5->ifr_data)->TC_CrcError = VAR_2[VAR_7].wrx_tccrc_err_pdu;
        ((PTM_FRAME_MIB_T *)VAR_5->ifr_data)->RxDropped = VAR_2[VAR_7].wrx_nodesc_drop_pdu + VAR_2[VAR_7].wrx_len_violation_drop_pdu;
        ((PTM_FRAME_MIB_T *)VAR_5->ifr_data)->TxSend = VAR_2[VAR_7].wtx_total_pdu;
        break;
    case 131:
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxEthCrcPresent = VAR_0->rx_eth_crc_present;
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxEthCrcCheck = VAR_0->rx_eth_crc_check;
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxTcCrcCheck = VAR_0->rx_tc_crc_check;
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxTcCrcLen = VAR_0->rx_tc_crc_len;
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxEthCrcGen = VAR_0->tx_eth_crc_gen;
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxTcCrcGen = VAR_0->tx_tc_crc_gen;
        ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxTcCrcLen = VAR_0->tx_tc_crc_len;
        break;
    case 130:
        VAR_0->rx_eth_crc_present = ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxEthCrcPresent ? 1 : 0;
        VAR_0->rx_eth_crc_check = ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxEthCrcCheck ? 1 : 0;
        if ( ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxTcCrcCheck && (((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxTcCrcLen == 16 || ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxTcCrcLen == 32) )
        {
            VAR_0->rx_tc_crc_check = 1;
            VAR_0->rx_tc_crc_len = ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->RxTcCrcLen;
        }
        else
        {
            VAR_0->rx_tc_crc_check = 0;
            VAR_0->rx_tc_crc_len = 0;
        }
        VAR_0->tx_eth_crc_gen = ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxEthCrcGen ? 1 : 0;
        if ( ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxTcCrcGen && (((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxTcCrcLen == 16 || ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxTcCrcLen == 32) )
        {
            VAR_0->tx_tc_crc_gen = 1;
            VAR_0->tx_tc_crc_len = ((IFX_PTM_CFG_T *)VAR_5->ifr_data)->TxTcCrcLen;
        }
        else
        {
            VAR_0->tx_tc_crc_gen = 0;
            VAR_0->tx_tc_crc_len = 0;
        }
        break;
    default:
        return -VAR_1;
    }

    return 0;
}
