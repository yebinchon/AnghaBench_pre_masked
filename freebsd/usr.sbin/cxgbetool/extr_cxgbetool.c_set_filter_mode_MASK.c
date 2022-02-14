
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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_13, const char *VAR_14[])
{
 uint32_t VAR_15 = 0;
 int VAR_16 = 0, VAR_17 = 0;

 for (; VAR_13; VAR_13--, VAR_14++) {
  if (!FUNC_1(VAR_14[0], "frag"))
   VAR_15 |= VAR_5;

  if (!FUNC_1(VAR_14[0], "matchtype"))
   VAR_15 |= VAR_9;

  if (!FUNC_1(VAR_14[0], "macidx"))
   VAR_15 |= VAR_8;

  if (!FUNC_1(VAR_14[0], "ethtype"))
   VAR_15 |= VAR_2;

  if (!FUNC_1(VAR_14[0], "proto"))
   VAR_15 |= VAR_6;

  if (!FUNC_1(VAR_14[0], "tos"))
   VAR_15 |= VAR_7;

  if (!FUNC_1(VAR_14[0], "vlan"))
   VAR_15 |= VAR_11;

  if (!FUNC_1(VAR_14[0], "ovlan")) {
   VAR_15 |= VAR_12;
   VAR_17++;
  }

  if (!FUNC_1(VAR_14[0], "vnic_id")) {
   VAR_15 |= VAR_12;
   VAR_15 |= VAR_4;
   VAR_16++;
  }

  if (!FUNC_1(VAR_14[0], "iport"))
   VAR_15 |= VAR_10;

  if (!FUNC_1(VAR_14[0], "fcoe"))
   VAR_15 |= VAR_3;
 }

 if (VAR_16 > 0 && VAR_17 > 0) {
  FUNC_2("\"vnic_id\" and \"ovlan\" are mutually exclusive.");
  return (VAR_1);
 }

 return FUNC_0(VAR_0, &VAR_15);
}
