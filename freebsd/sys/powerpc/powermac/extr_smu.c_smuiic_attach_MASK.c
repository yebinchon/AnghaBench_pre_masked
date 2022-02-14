
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smuiic_softc {int sc_busno; scalar_t__ sc_iic_inuse; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct smuiic_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct smuiic_softc *VAR_2 = FUNC_3(VAR_1);
 FUNC_4(&VAR_2->sc_mtx, "smuiic", ((void*)0), VAR_0);
 VAR_2->sc_iic_inuse = 0;


 FUNC_0(FUNC_5(VAR_1), "reg", &VAR_2->sc_busno,
     sizeof(VAR_2->sc_busno));


 FUNC_2(VAR_1, "iicbus", -1);

 return (FUNC_1(VAR_1));
}
