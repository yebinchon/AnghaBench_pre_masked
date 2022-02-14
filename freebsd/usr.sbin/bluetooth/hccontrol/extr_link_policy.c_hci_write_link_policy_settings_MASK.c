
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int rp ;
struct TYPE_3__ {int status; } ;
typedef TYPE_1__ ng_hci_write_link_policy_settings_rp ;
struct TYPE_4__ {void* settings; void* con_handle; } ;
typedef TYPE_2__ ng_hci_write_link_policy_settings_cp ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char*,int) ;
 scalar_t__ FUNC_2 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_3 (int) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (char*,char*,int*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(int VAR_7, int VAR_8, char **VAR_9)
{
 ng_hci_write_link_policy_settings_cp VAR_10;
 ng_hci_write_link_policy_settings_rp VAR_11;
 int VAR_12;


 switch (VAR_8) {
 case 2:

  if (FUNC_5(VAR_9[0], "%d", &VAR_12) != 1 || VAR_12 <= 0 || VAR_12 > 0x0eff)
   return (VAR_5);

  VAR_10.con_handle = (uint16_t) (VAR_12 & 0x0fff);
  VAR_10.con_handle = FUNC_4(VAR_10.con_handle);


  if (FUNC_5(VAR_9[1], "%x", &VAR_12) != 1)
   return (VAR_5);

  VAR_10.settings = (uint16_t) (VAR_12 & 0x0ffff);
  VAR_10.settings = FUNC_4(VAR_10.settings);
  break;

 default:
  return (VAR_5);
 }


 VAR_12 = sizeof(VAR_11);
 if (FUNC_2(VAR_7, FUNC_0(VAR_3,
   VAR_2),
   (char const *) &VAR_10, sizeof(VAR_10),
   (char *) &VAR_11, &VAR_12) == VAR_0)
  return (VAR_0);

 if (VAR_11.status != 0x00) {
  FUNC_1(VAR_6, "Status: %s [%#02x]\n",
   FUNC_3(VAR_11.status), VAR_11.status);
  return (VAR_1);
 }

 return (VAR_4);
}
