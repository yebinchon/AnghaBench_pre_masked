
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int mutex; int * iicbus; int * res; int bsh; int bst; scalar_t__ rid; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 struct i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 struct i2c_softc *VAR_6;
 VAR_6 = FUNC_4(VAR_5);

 VAR_6->dev = VAR_5;
 VAR_6->rid = 0;

 FUNC_7(&VAR_6->mutex, FUNC_3(VAR_5), "I2C", VAR_2);

 VAR_6->res = FUNC_0(VAR_5, VAR_4, &VAR_6->rid,
     VAR_3);
 if (VAR_6->res == ((void*)0)) {
  FUNC_5(VAR_5, "could not allocate resources");
  FUNC_6(&VAR_6->mutex);
  return (VAR_0);
 }

 VAR_6->bst = FUNC_9(VAR_6->res);
 VAR_6->bsh = FUNC_8(VAR_6->res);

 VAR_6->iicbus = FUNC_2(VAR_5, "iicbus", -1);
 if (VAR_6->iicbus == ((void*)0)) {
  FUNC_5(VAR_5, "could not add iicbus child");
  FUNC_6(&VAR_6->mutex);
  return (VAR_0);
 }

 FUNC_1(VAR_5);
 return (VAR_1);
}
