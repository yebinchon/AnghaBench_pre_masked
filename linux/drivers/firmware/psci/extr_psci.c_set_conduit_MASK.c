
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum psci_conduit { ____Placeholder_psci_conduit } psci_conduit ;
struct TYPE_2__ {int conduit; } ;




 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_1(enum psci_conduit VAR_4)
{
 switch (VAR_4) {
 case 129:
  VAR_2 = VAR_0;
  break;
 case 128:
  VAR_2 = VAR_1;
  break;
 default:
  FUNC_0(1, "Unexpected PSCI conduit %d\n", VAR_4);
 }

 VAR_3.conduit = VAR_4;
}
