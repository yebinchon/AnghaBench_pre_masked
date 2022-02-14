
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_i2c_softc {int * iicbus; int opal_id; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct opal_i2c_softc*) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*,int) ;
 struct opal_i2c_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct opal_i2c_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_1);
 VAR_2->dev = VAR_1;

 VAR_3 = FUNC_2(FUNC_7(VAR_1), "ibm,opal-id");
 if (VAR_3 <= 0)
  return (VAR_0);
 FUNC_1(FUNC_7(VAR_1), "ibm,opal-id", &VAR_2->opal_id, VAR_3);

 if ((VAR_2->iicbus = FUNC_4(VAR_1, "iicbus", -1)) == ((void*)0)) {
  FUNC_6(VAR_1, "could not allocate iicbus instance\n");
  return (VAR_0);
 }

 FUNC_0(VAR_2);

 return (FUNC_3(VAR_1));
}
