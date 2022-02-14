
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_host {int dev; struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {int version; int cap; int cap2; int port_map; } ;


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
 int FUNC_0 (int ,char*,...) ;

void FUNC_1(struct ata_host *VAR_23, const char *VAR_24)
{
 struct ahci_host_priv *VAR_25 = VAR_23->private_data;
 u32 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 const char *VAR_31;

 VAR_26 = VAR_25->version;
 VAR_27 = VAR_25->cap;
 VAR_28 = VAR_25->cap2;
 VAR_29 = VAR_25->port_map;

 VAR_30 = (VAR_27 >> 20) & 0xf;
 if (VAR_30 == 1)
  VAR_31 = "1.5";
 else if (VAR_30 == 2)
  VAR_31 = "3";
 else if (VAR_30 == 3)
  VAR_31 = "6";
 else
  VAR_31 = "?";

 FUNC_0(VAR_23->dev,
  "AHCI %02x%02x.%02x%02x "
  "%u slots %u ports %s Gbps 0x%x impl %s mode\n"
  ,

  (VAR_26 >> 24) & 0xff,
  (VAR_26 >> 16) & 0xff,
  (VAR_26 >> 8) & 0xff,
  VAR_26 & 0xff,

  ((VAR_27 >> 8) & 0x1f) + 1,
  (VAR_27 & 0x1f) + 1,
  VAR_31,
  VAR_29,
  VAR_24);

 FUNC_0(VAR_23->dev,
  "flags: "
  "%s%s%s%s%s%s%s"
  "%s%s%s%s%s%s%s"
  "%s%s%s%s%s%s%s"
  "%s%s\n"
  ,

  VAR_27 & VAR_6 ? "64bit " : "",
  VAR_27 & VAR_14 ? "ncq " : "",
  VAR_27 & VAR_19 ? "sntf " : "",
  VAR_27 & VAR_13 ? "ilck " : "",
  VAR_27 & VAR_21 ? "stag " : "",
  VAR_27 & VAR_7 ? "pm " : "",
  VAR_27 & VAR_12 ? "led " : "",
  VAR_27 & VAR_9 ? "clo " : "",
  VAR_27 & VAR_15 ? "only " : "",
  VAR_27 & VAR_18 ? "pmp " : "",
  VAR_27 & VAR_11 ? "fbs " : "",
  VAR_27 & VAR_17 ? "pio " : "",
  VAR_27 & VAR_20 ? "slum " : "",
  VAR_27 & VAR_16 ? "part " : "",
  VAR_27 & VAR_8 ? "ccc " : "",
  VAR_27 & VAR_10 ? "ems " : "",
  VAR_27 & VAR_22 ? "sxs " : "",
  VAR_28 & VAR_2 ? "deso " : "",
  VAR_28 & VAR_4 ? "sadm " : "",
  VAR_28 & VAR_5 ? "sds " : "",
  VAR_28 & VAR_0 ? "apst " : "",
  VAR_28 & VAR_3 ? "nvmp " : "",
  VAR_28 & VAR_1 ? "boh " : ""
  );
}
