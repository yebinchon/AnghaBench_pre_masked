
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* cache; } ;
struct hfi1_pportdata {int max_power_class; int default_atten; int port_type; int local_atten; int remote_atten; int rx_preset; int tx_preset_eq; int tx_preset_noeq; TYPE_1__ qsfp_info; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;
typedef enum platform_config_table_type_encoding { ____Placeholder_platform_config_table_type_encoding } platform_config_table_type_encoding ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;

__attribute__((used)) static void FUNC_0(
  struct hfi1_devdata *VAR_45,
  enum platform_config_table_type_encoding VAR_46,
  int VAR_47, u32 *VAR_48)
{
 struct hfi1_pportdata *VAR_49 = VAR_45->pport;
 u8 *VAR_50 = VAR_49->qsfp_info.cache;
 u32 VAR_51 = 0;

 switch (VAR_46) {
 case 130:
  if (VAR_47 == VAR_31)
   *VAR_48 = VAR_49->max_power_class;
  else if (VAR_47 == VAR_30)
   *VAR_48 = VAR_49->default_atten;
  break;
 case 133:
  if (VAR_47 == VAR_1)
   *VAR_48 = VAR_49->port_type;
  else if (VAR_47 == VAR_0)
   *VAR_48 = VAR_49->local_atten;
  else if (VAR_47 == VAR_2)
   *VAR_48 = VAR_49->remote_atten;
  break;
 case 131:
  if (VAR_47 == VAR_27)
   *VAR_48 = (VAR_49->rx_preset & VAR_9) >>
    VAR_8;
  else if (VAR_47 == VAR_29)
   *VAR_48 = (VAR_49->rx_preset & VAR_13) >>
    VAR_12;
  else if (VAR_47 == VAR_25)
   *VAR_48 = (VAR_49->rx_preset & VAR_5) >>
    VAR_4;
  else if (VAR_47 == VAR_26)
   *VAR_48 = (VAR_49->rx_preset & VAR_11) >>
    VAR_10;
  else if (VAR_47 == VAR_28)
   *VAR_48 = (VAR_49->rx_preset & VAR_15) >>
    VAR_14;
  else if (VAR_47 == VAR_24)
   *VAR_48 = (VAR_49->rx_preset & VAR_7) >>
    VAR_6;
  break;
 case 129:
  if (VAR_50[VAR_3] & 0x4)
   VAR_51 = VAR_49->tx_preset_eq;
  else
   VAR_51 = VAR_49->tx_preset_noeq;
  if (VAR_47 == VAR_40)
   *VAR_48 = (VAR_51 & VAR_37) >>
    VAR_36;
  else if (VAR_47 == VAR_38)
   *VAR_48 = (VAR_51 & VAR_33) >>
    VAR_32;
  else if (VAR_47 == VAR_39)
   *VAR_48 = (VAR_51 & VAR_35) >>
    VAR_34;
  else if (VAR_47 == VAR_42)
   *VAR_48 = (VAR_51 & VAR_17) >>
    VAR_16;
  else if (VAR_47 == VAR_44)
   *VAR_48 = (VAR_51 & VAR_21) >>
    VAR_20;
  else if (VAR_47 == VAR_41)
   *VAR_48 = (VAR_51 & VAR_19) >>
    VAR_18;
  else if (VAR_47 == VAR_43)
   *VAR_48 = (VAR_51 & VAR_23) >>
    VAR_22;
  break;
 case 132:
 case 128:
 default:
  break;
 }
}
