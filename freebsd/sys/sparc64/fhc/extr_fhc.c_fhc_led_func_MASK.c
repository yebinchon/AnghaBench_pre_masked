
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fhc_softc {int * sc_memres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_6, int VAR_7)
{
 struct fhc_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = (struct fhc_softc *)VAR_6;

 VAR_9 = FUNC_0(VAR_8->sc_memres[VAR_5], VAR_0);
 if (VAR_7)
  VAR_9 |= VAR_3;
 else
  VAR_9 &= ~VAR_3;
 VAR_9 &= ~(VAR_1 | VAR_2 | VAR_4);
 FUNC_1(VAR_8->sc_memres[VAR_5], VAR_0, VAR_9);
 (void)FUNC_0(VAR_8->sc_memres[VAR_5], VAR_0);
}
