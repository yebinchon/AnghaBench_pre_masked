
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int base_address ;
struct TYPE_8__ {int major; int minor; } ;
struct TYPE_7__ {int iData; int iAddress; } ;
struct TYPE_5__ {int* RxMessage; int * TxMessage; } ;
struct TYPE_6__ {TYPE_1__ msg; } ;
typedef TYPE_2__ DSL_DEV_WinHost_Message_t ;
typedef int DSL_DEV_Version_t ;
typedef TYPE_3__ DSL_DEV_MeiReg_t ;
typedef int DSL_DEV_HwVersion_t ;
typedef int DSL_DEV_Device_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*,char*,int) ;
 int FUNC_10 (int,char*,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_15 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (int ,int ,int,int ,int,int *,int *) ;

int
FUNC_17 (DSL_DEV_Device_t * VAR_17, int VAR_18, unsigned int VAR_19, unsigned long VAR_20)
{
 int VAR_21 = 0;
 int VAR_22 = VAR_5;
 u32 VAR_23 = VAR_11;
 DSL_DEV_WinHost_Message_t VAR_24, VAR_25;

 DSL_DEV_MeiReg_t VAR_26;

 switch (VAR_19) {

 case 141:
  FUNC_9 (VAR_18, (char *) VAR_24.msg.TxMessage,
          (char *) VAR_20, VAR_13 * 2);

  if ((VAR_22 = FUNC_1 (VAR_17, VAR_24.msg.TxMessage, VAR_14,
        VAR_24.msg.RxMessage)) != VAR_5) {
   FUNC_8 ("WINHOST CMV fail :TxMessage:%X %X %X %X, RxMessage:%X %X %X %X %X\n",
     VAR_24.msg.TxMessage[0], VAR_24.msg.TxMessage[1], VAR_24.msg.TxMessage[2], VAR_24.msg.TxMessage[3],
     VAR_24.msg.RxMessage[0], VAR_24.msg.RxMessage[1], VAR_24.msg.RxMessage[2], VAR_24.msg.RxMessage[3],
     VAR_24.msg.RxMessage[4]);
   VAR_22 = VAR_4;
  }
  else {
   FUNC_10 (VAR_18, (char *) VAR_20,
         (char *) VAR_24.msg.RxMessage,
         VAR_13 * 2);
  }
  break;

 case 142:
  FUNC_9 (VAR_18, (char *) (&VAR_26),
          (char *) VAR_20, sizeof (DSL_DEV_MeiReg_t));

  FUNC_12 ((u32) VAR_26.iAddress,
         (u32 *) & (VAR_26.iData));

  FUNC_10 (VAR_18, (char *) VAR_20,
        (char *) (&VAR_26),
        sizeof (DSL_DEV_MeiReg_t));

  break;

 case 140:
  FUNC_9 (VAR_18, (char *) (&VAR_26),
          (char *) VAR_20, sizeof (DSL_DEV_MeiReg_t));

  FUNC_13 ((u32) VAR_26.iAddress,
          VAR_26.iData);
  break;

 case 137:
  FUNC_10 (VAR_18, (char *) VAR_20,
        (char *) (&VAR_23),
        sizeof (VAR_23));
  break;

 case 133:
  VAR_21 = FUNC_11 (VAR_17);
  FUNC_10 (VAR_18, (char *) VAR_20,
        (char *) (&VAR_21), sizeof (int));
  VAR_22 = VAR_5;
  break;
 case 129:
 case 131:
  VAR_22 = FUNC_4 (VAR_17, VAR_2);
  VAR_22 = FUNC_4 (VAR_17, VAR_1);
  break;

 case 134:
  VAR_22 = FUNC_4 (VAR_17, VAR_1);
  break;

 case 128:
  VAR_22 = FUNC_4 (VAR_17, VAR_3);
  break;
 case 143:
  VAR_22 = FUNC_7 (VAR_17);
  break;
 case 132:
  VAR_22 = FUNC_3 (VAR_17, 1);
  break;

 case 130:
  FUNC_9 (VAR_18, (char *) (&VAR_21),
          (char *) VAR_20, sizeof (int));

  VAR_22 = FUNC_2 (VAR_17, VAR_21);
  break;

 case 139:
  FUNC_6("DSL_FIO_BSP_DSL_START\n");
  if ((VAR_22 = FUNC_14 (VAR_17)) != VAR_5) {
   FUNC_8 ("IFX_MEI_RunAdslModem() error...");
   VAR_22 = VAR_4;
  }
  break;
 case 135:
  FUNC_10 (VAR_18, (char *) VAR_20, (char *) (&VAR_16), sizeof (DSL_DEV_Version_t));
  break;


 case 136:
                VAR_15.major = 1;
                VAR_15.minor = (((*VAR_12) >> 28) & ((1 << 4) - 1));
                FUNC_10 (VAR_18, (char *) VAR_20, (char *) (&VAR_15), sizeof (DSL_DEV_HwVersion_t));
                VAR_22 = VAR_5;
  break;

        case 138:
                FUNC_16 (VAR_10, VAR_0, 4, 0, 1, ((void*)0), VAR_25.msg.TxMessage);
                if (FUNC_1 (VAR_17, VAR_25.msg.TxMessage, VAR_14, VAR_25.msg.RxMessage) != VAR_5) {
                        VAR_22 = VAR_4;
                        return -VAR_8;
                }
                FUNC_6("RxMessage[4] = %#x\n", VAR_25.msg.RxMessage[4]);
                if (!(VAR_25.msg.RxMessage[4] & VAR_6)) {
                        VAR_22 = VAR_4;
                        return -VAR_7;
                }
                FUNC_6("Freeing all memories marked FREE_SHOWTIME\n");
                FUNC_5 (VAR_17, VAR_9);
                VAR_22 = VAR_5;
  break;





 default:

  break;
 }
 return VAR_22;
}
