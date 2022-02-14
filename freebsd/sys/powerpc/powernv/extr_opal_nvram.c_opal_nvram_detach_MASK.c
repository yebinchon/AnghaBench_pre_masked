
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_nvram_softc {int * sc_buf; int * sc_cdev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 struct opal_nvram_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct opal_nvram_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->sc_cdev != ((void*)0))
  FUNC_1(VAR_3->sc_cdev);
 if (VAR_3->sc_buf != ((void*)0))
  FUNC_0(VAR_3->sc_buf, VAR_1, VAR_0);

 return (0);
}
