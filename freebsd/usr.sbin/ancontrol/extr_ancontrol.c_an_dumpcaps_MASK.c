
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct an_req {int an_len; int an_type; } ;
struct an_ltv_caps {int an_radiotype; scalar_t__ an_rx_diversity; scalar_t__ an_tx_diversity; int an_bootblockrev; int an_ifacerev; int an_fwsubrev; int an_fwrev; int an_hwrev; int * an_tx_powerlevels; int an_rates; int an_callid; int an_regdomain; int an_aironetaddr; int an_oemaddr; int an_prodvers; int an_prodname; int an_manufname; int an_prodnum; int an_oui; } ;
typedef int areq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char const*,struct an_req*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_9)
{
 struct an_ltv_caps *VAR_10;
 struct an_req VAR_11;
 u_int16_t VAR_12;

 VAR_11.an_len = sizeof(VAR_11);
 VAR_11.an_type = VAR_7;

 FUNC_0(VAR_9, &VAR_11);

 VAR_10 = (struct an_ltv_caps *)&VAR_11;

 FUNC_6("OUI:\t\t\t");
 FUNC_1((char *)&VAR_10->an_oui, 3);
 FUNC_6("\nProduct number:\t\t");
 FUNC_4(&VAR_10->an_prodnum, 1);
 FUNC_6("\nManufacturer name:\t");
 FUNC_3((char *)&VAR_10->an_manufname, 32);
 FUNC_6("\nProduce name:\t\t");
 FUNC_3((char *)&VAR_10->an_prodname, 16);
 FUNC_6("\nFirmware version:\t");
 FUNC_3((char *)&VAR_10->an_prodvers, 1);
 FUNC_6("\nOEM MAC address:\t");
 FUNC_1((char *)&VAR_10->an_oemaddr, VAR_8);
 FUNC_6("\nAironet MAC address:\t");
 FUNC_1((char *)&VAR_10->an_aironetaddr, VAR_8);
 FUNC_6("\nRadio type:\t\t[ ");
 if (VAR_10->an_radiotype & VAR_5)
  FUNC_6("802.11 FH");
 else if (VAR_10->an_radiotype & VAR_4)
  FUNC_6("802.11 DS");
 else if (VAR_10->an_radiotype & VAR_6)
  FUNC_6("LM2000 DS");
 else
  FUNC_6("unknown (%x)", VAR_10->an_radiotype);
 FUNC_6(" ]");
 FUNC_6("\nRegulatory domain:\t");
 FUNC_4(&VAR_10->an_regdomain, 1);
 FUNC_6("\nAssigned CallID:\t");
 FUNC_1((char *)&VAR_10->an_callid, 6);
 FUNC_6("\nSupported speeds:\t");
 FUNC_2(VAR_10->an_rates, 8);
 FUNC_6("\nRX Diversity:\t\t[ ");
 if (VAR_10->an_rx_diversity == VAR_3)
  FUNC_6("factory default");
 else if (VAR_10->an_rx_diversity == VAR_1)
  FUNC_6("antenna 1 only");
 else if (VAR_10->an_rx_diversity == VAR_2)
  FUNC_6("antenna 2 only");
 else if (VAR_10->an_rx_diversity == VAR_0)
  FUNC_6("antenna 1 and 2");
 FUNC_6(" ]");
 FUNC_6("\nTX Diversity:\t\t[ ");
 if (VAR_10->an_tx_diversity == VAR_3)
  FUNC_6("factory default");
 else if (VAR_10->an_tx_diversity == VAR_1)
  FUNC_6("antenna 1 only");
 else if (VAR_10->an_tx_diversity == VAR_2)
  FUNC_6("antenna 2 only");
 else if (VAR_10->an_tx_diversity == VAR_0)
  FUNC_6("antenna 1 and 2");
 FUNC_6(" ]");
 FUNC_6("\nSupported power levels:\t");
 FUNC_4(VAR_10->an_tx_powerlevels, 8);
 FUNC_6("\nHardware revision:\t");
 VAR_12 = FUNC_5(VAR_10->an_hwrev);
 FUNC_1((char *)&VAR_12, 2);
 FUNC_6("\nSoftware revision:\t");
 VAR_12 = FUNC_5(VAR_10->an_fwrev);
 FUNC_1((char *)&VAR_12, 2);
 FUNC_6("\nSoftware subrevision:\t");
 VAR_12 = FUNC_5(VAR_10->an_fwsubrev);
 FUNC_1((char *)&VAR_12, 2);
 FUNC_6("\nInterface revision:\t");
 VAR_12 = FUNC_5(VAR_10->an_ifacerev);
 FUNC_1((char *)&VAR_12, 2);
 FUNC_6("\nBootblock revision:\t");
 VAR_12 = FUNC_5(VAR_10->an_bootblockrev);
 FUNC_1((char *)&VAR_12, 2);
 FUNC_6("\n");
 return;
}
