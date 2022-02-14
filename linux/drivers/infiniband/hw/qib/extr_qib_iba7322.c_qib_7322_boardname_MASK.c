
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {char* boardname; int board_atten; int majrev; int minrev; int unit; int pcidev; int revision; int boardversion; int flags; } ;


 int VAR_0 ;



 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qib_devdata*,char*,...) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,int,char*,int,int,char*,unsigned int,int,int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_4(struct qib_devdata *VAR_12)
{

 u32 VAR_13;
 unsigned int VAR_14 = VAR_2;

 VAR_13 = FUNC_0(VAR_12->revision, VAR_8, VAR_1);

 switch (VAR_13) {
 case 0:
  VAR_12->boardname = "InfiniPath_QLE7342_Emulation";
  break;
 case 1:
  VAR_12->boardname = "InfiniPath_QLE7340";
  VAR_12->flags |= VAR_7;
  VAR_14 = VAR_3;
  break;
 case 2:
  VAR_12->boardname = "InfiniPath_QLE7342";
  VAR_12->flags |= VAR_7;
  break;
 case 3:
  VAR_12->boardname = "InfiniPath_QMI7342";
  break;
 case 4:
  VAR_12->boardname = "InfiniPath_Unsupported7342";
  FUNC_1(VAR_12, "Unsupported version of QMH7342\n");
  VAR_14 = 0;
  break;
 case 129:
  VAR_12->boardname = "InfiniPath_QMH7342";
  VAR_14 = 0x24;
  break;
 case 130:
  VAR_12->boardname = "InfiniPath_QME7342";
  break;
 case 8:
  VAR_12->boardname = "InfiniPath_QME7362";
  VAR_12->flags |= VAR_7;
  break;
 case 128:
  VAR_12->boardname = "Intel IB QDR 1P FLR-QSFP Adptr";
  VAR_12->flags |= VAR_7;
  break;
 case 15:
  VAR_12->boardname = "InfiniPath_QLE7342_TEST";
  VAR_12->flags |= VAR_7;
  break;
 default:
  VAR_12->boardname = "InfiniPath_QLE73xy_UNKNOWN";
  FUNC_1(VAR_12, "Unknown 7322 board type %u\n", VAR_13);
  break;
 }
 VAR_12->board_atten = 1;

 FUNC_3(VAR_12->boardversion, sizeof(VAR_12->boardversion),
   "ChipABI %u.%u, %s, InfiniPath%u %u.%u, SW Compat %u\n",
   VAR_5, VAR_6, VAR_12->boardname,
   (unsigned int)FUNC_0(VAR_12->revision, VAR_9, VAR_0),
   VAR_12->majrev, VAR_12->minrev,
   (unsigned int)FUNC_0(VAR_12->revision, VAR_9, VAR_10));

 if (VAR_11 && (VAR_14 >> VAR_4) & VAR_3) {
  FUNC_2(VAR_12->pcidev,
       "IB%u: Forced to single port mode by module parameter\n",
       VAR_12->unit);
  VAR_14 &= VAR_3;
 }

 return VAR_14;
}
