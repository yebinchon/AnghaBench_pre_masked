
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rp ;
struct TYPE_2__ {int status; int* uclass; } ;
typedef TYPE_1__ ng_hci_read_unit_class_rp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,char*,int*) ;
 char* FUNC_3 (int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(int VAR_5, int VAR_6, char **VAR_7)
{
 ng_hci_read_unit_class_rp VAR_8;
 int VAR_9;

 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_5, FUNC_0(VAR_3,
   VAR_2),
   (char *) &VAR_8, &VAR_9) == VAR_0)
  return (VAR_0);

 if (VAR_8.status != 0x00) {
  FUNC_1(VAR_4, "Status: %s [%#02x]\n",
   FUNC_3(VAR_8.status), VAR_8.status);
  return (VAR_1);
 }

 FUNC_1(VAR_4, "Class: %02x:%02x:%02x\n",
  VAR_8.uclass[2], VAR_8.uclass[1], VAR_8.uclass[0]);

 return (0);
}
