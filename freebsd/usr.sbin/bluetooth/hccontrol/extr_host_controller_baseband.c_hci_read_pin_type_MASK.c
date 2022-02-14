
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rp ;
struct TYPE_2__ {int status; int pin_type; } ;
typedef TYPE_1__ ng_hci_read_pin_type_rp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*,int) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,char*,int*) ;
 char* FUNC_4 (int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(int VAR_6, int VAR_7, char **VAR_8)
{
 ng_hci_read_pin_type_rp VAR_9;
 int VAR_10;

 VAR_10 = sizeof(VAR_9);
 if (FUNC_3(VAR_6, FUNC_0(VAR_3,
   VAR_2),
   (char *) &VAR_9, &VAR_10) == VAR_0)
  return (VAR_0);

 if (VAR_9.status != 0x00) {
  FUNC_1(VAR_5, "Status: %s [%#02x]\n",
   FUNC_4(VAR_9.status), VAR_9.status);
  return (VAR_1);
 }

 FUNC_1(VAR_5, "PIN type: %s [%#02x]\n",
   FUNC_2(VAR_9.pin_type), VAR_9.pin_type);

 return (VAR_4);
}
