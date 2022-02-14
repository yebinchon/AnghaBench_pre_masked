
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


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
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_18)
{
 uint32_t VAR_19 = VAR_18;
 int VAR_20;

 VAR_20 = FUNC_0(VAR_0, &VAR_19);
 if (VAR_20 != 0)
  return (VAR_20);

 if (VAR_19 & VAR_11)
  FUNC_1("ipv4 ");

 if (VAR_19 & VAR_12)
  FUNC_1("ipv6 ");

 if (VAR_19 & VAR_8)
  FUNC_1("sip ");

 if (VAR_19 & VAR_4)
  FUNC_1("dip ");

 if (VAR_19 & VAR_9)
  FUNC_1("sport ");

 if (VAR_19 & VAR_5)
  FUNC_1("dport ");

 if (VAR_19 & VAR_6)
  FUNC_1("frag ");

 if (VAR_19 & VAR_14)
  FUNC_1("matchtype ");

 if (VAR_19 & VAR_13)
  FUNC_1("macidx ");

 if (VAR_19 & VAR_1)
  FUNC_1("ethtype ");

 if (VAR_19 & VAR_7)
  FUNC_1("proto ");

 if (VAR_19 & VAR_10)
  FUNC_1("tos ");

 if (VAR_19 & VAR_16)
  FUNC_1("vlan ");

 if (VAR_19 & VAR_17) {
  if (VAR_19 & VAR_3)
   FUNC_1("vnic_id ");
  else
   FUNC_1("ovlan ");
 }

 if (VAR_19 & VAR_15)
  FUNC_1("iport ");

 if (VAR_19 & VAR_2)
  FUNC_1("fcoe ");

 FUNC_1("\n");

 return (0);
}
