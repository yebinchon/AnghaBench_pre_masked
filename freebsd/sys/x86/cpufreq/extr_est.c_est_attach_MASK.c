
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct est_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct est_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct est_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_3;


 if (VAR_2 == -1 && VAR_1 > 1)
  VAR_2 = 0;

 if (FUNC_2(VAR_3))
  return (VAR_0);

 FUNC_0(VAR_3);
 return (0);
}
