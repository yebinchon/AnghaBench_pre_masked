
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int width ;
struct lbc_softc {TYPE_1__* sc_banks; } ;
struct lbc_devinfo {int di_bank; } ;
typedef int phandle_t ;
typedef int pcell_t ;
struct TYPE_2__ {scalar_t__ size; int width; } ;


 scalar_t__ FUNC_0 (int ,char*,void*,int) ;

__attribute__((used)) static void
FUNC_1(phandle_t VAR_0, struct lbc_softc *VAR_1, struct lbc_devinfo *VAR_2)
{
 pcell_t VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_0, "bank-width", (void *)&VAR_3, sizeof(VAR_3)) <= 0)
  return;

 VAR_4 = VAR_2->di_bank;
 if (VAR_1->sc_banks[VAR_4].size == 0)
  return;


 VAR_1->sc_banks[VAR_4].width = VAR_3 * 8;
}
