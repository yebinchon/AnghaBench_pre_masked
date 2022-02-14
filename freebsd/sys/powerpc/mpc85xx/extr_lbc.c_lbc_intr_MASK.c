
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lbc_softc {int sc_dev; int sc_bsh; int sc_bst; int sc_ltesr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct lbc_softc *VAR_2 = VAR_1;
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->sc_bst, VAR_2->sc_bsh, VAR_0);
 VAR_2->sc_ltesr = VAR_3;
 FUNC_1(VAR_2->sc_bst, VAR_2->sc_bsh, VAR_0, VAR_3);
 FUNC_2(VAR_2->sc_dev);
}
