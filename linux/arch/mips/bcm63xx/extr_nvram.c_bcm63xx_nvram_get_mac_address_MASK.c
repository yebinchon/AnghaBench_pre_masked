
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int mac_addr_count; int mac_addr_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*) ;

int FUNC_2(u8 *VAR_4)
{
 u8 *VAR_5;
 int VAR_6;

 if (VAR_2 >= VAR_3.mac_addr_count) {
  FUNC_1("not enough mac addresses\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4, VAR_3.mac_addr_base, VAR_1);
 VAR_5 = VAR_4 + VAR_1/2 - 1;
 VAR_6 = VAR_2;

 while (VAR_6--) {
  u8 *VAR_7 = VAR_4 + VAR_1 - 1;

  do {
   (*VAR_7)++;
   if (*VAR_7 != 0)
    break;
   VAR_7--;
  } while (VAR_7 != VAR_5);

  if (VAR_7 == VAR_5) {
   FUNC_1("unable to fetch mac address\n");
   return -VAR_0;
  }
 }

 VAR_2++;
 return 0;
}
