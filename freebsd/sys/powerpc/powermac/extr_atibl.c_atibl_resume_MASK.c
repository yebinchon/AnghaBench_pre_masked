
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atibl_softc {int sc_level; } ;
typedef int device_t ;


 int FUNC_0 (struct atibl_softc*,int ) ;
 struct atibl_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct atibl_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_1->sc_level);

 return (0);
}
