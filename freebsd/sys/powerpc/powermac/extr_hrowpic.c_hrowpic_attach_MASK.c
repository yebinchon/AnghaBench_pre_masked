
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrowpic_softc {int * sc_rres; int sc_bh; int sc_bt; scalar_t__ sc_rrid; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int ) ;
 struct hrowpic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct hrowpic_softc*,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_8)
{
 struct hrowpic_softc *VAR_9;

 VAR_9 = FUNC_1(VAR_8);
 VAR_9->sc_dev = VAR_8;

 VAR_9->sc_rrid = 0;
 VAR_9->sc_rres = FUNC_0(VAR_8, VAR_7, &VAR_9->sc_rrid,
     VAR_6);

 if (VAR_9->sc_rres == ((void*)0)) {
  FUNC_2(VAR_8, "Could not alloc mem resource!\n");
  return (VAR_0);
 }

 VAR_9->sc_bt = FUNC_7(VAR_9->sc_rres);
 VAR_9->sc_bh = FUNC_6(VAR_9->sc_rres);




 FUNC_3(VAR_9, VAR_3, VAR_4, 0);
 FUNC_3(VAR_9, VAR_2, VAR_4, 0xffffffff);
 FUNC_3(VAR_9, VAR_3, VAR_5, 0);
 FUNC_3(VAR_9, VAR_2, VAR_5, 0xffffffff);

 FUNC_5(VAR_8, FUNC_4(VAR_8), 64, 0, VAR_1);
 return (0);
}
