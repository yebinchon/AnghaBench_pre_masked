
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {struct ct_softc* tc_priv; } ;
struct ct_softc {int sc_offset; int sc_handle; int sc_tag; } ;


 unsigned int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_1(struct timecounter *VAR_0)
{
 struct ct_softc *VAR_1;

 VAR_1 = VAR_0->tc_priv;
 return (FUNC_0(VAR_1->sc_tag, VAR_1->sc_handle, VAR_1->sc_offset));
}
