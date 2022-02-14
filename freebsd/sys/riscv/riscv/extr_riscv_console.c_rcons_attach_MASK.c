
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcons_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct rcons_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct rcons_softc *VAR_4;

 if (FUNC_3(VAR_3) != 0)
  return (VAR_0);

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->dev = VAR_3;

 FUNC_1(VAR_2, VAR_1);

 FUNC_0(VAR_4->dev);

 return (0);
}
