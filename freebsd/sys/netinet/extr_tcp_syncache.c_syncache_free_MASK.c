
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syncache {int sc_label; scalar_t__ sc_cred; scalar_t__ sc_ipopts; } ;
struct TYPE_2__ {int zone; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct syncache*) ;

__attribute__((used)) static void
FUNC_4(struct syncache *VAR_1)
{

 if (VAR_1->sc_ipopts)
  (void) FUNC_1(VAR_1->sc_ipopts);
 if (VAR_1->sc_cred)
  FUNC_0(VAR_1->sc_cred);




 FUNC_3(VAR_0.zone, VAR_1);
}
