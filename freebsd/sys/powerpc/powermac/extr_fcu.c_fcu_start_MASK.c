
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcu_softc {int enum_hook; int sc_addr; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct fcu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,unsigned char*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 unsigned char VAR_2[1] = { 0xff };
 struct fcu_softc *VAR_3;

 device_t VAR_4 = (device_t)VAR_1;

 VAR_3 = FUNC_1(VAR_4);


 FUNC_5(VAR_3->sc_dev, VAR_3->sc_addr, 0xe, VAR_2, 1);
 FUNC_5(VAR_3->sc_dev, VAR_3->sc_addr, 0x2e, VAR_2, 1);
 FUNC_4(VAR_3->sc_dev, VAR_3->sc_addr, 0, VAR_2);
 VAR_0 = (VAR_2[0] == 1) ? 2 : 3;

 FUNC_2(VAR_4, "FCU initialized, RPM shift: %d\n",
        VAR_0);



 FUNC_3(VAR_4);

 FUNC_0(&VAR_3->enum_hook);

}
