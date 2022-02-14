
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int rp ;
struct TYPE_3__ {int status; } ;
typedef TYPE_1__ ng_hci_write_page_timo_rp ;
struct TYPE_4__ {int timeout; } ;
typedef TYPE_2__ ng_hci_write_page_timo_cp ;
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
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(int VAR_7, int VAR_8, char **VAR_9)
{
 ng_hci_write_page_timo_cp VAR_10;
 ng_hci_write_page_timo_rp VAR_11;
 int VAR_12;


 switch (VAR_8) {
 case 1:
  if (FUNC_5(VAR_9[0], "%d", &VAR_12) != 1 || VAR_12 < 1 || VAR_12 > 0xffff)
   return (VAR_5);

  VAR_10.timeout = (uint16_t) VAR_12;
  VAR_10.timeout = FUNC_4(VAR_10.timeout);
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
