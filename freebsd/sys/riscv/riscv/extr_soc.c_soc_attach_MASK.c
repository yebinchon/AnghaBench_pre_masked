
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_softc {int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct soc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int *,int,int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct soc_softc *VAR_2;
 phandle_t VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 VAR_2->dev = VAR_1;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 == -1)
  return (VAR_0);

 FUNC_7(VAR_1, VAR_3);




 FUNC_3(VAR_1);




 for (VAR_3 = FUNC_0(VAR_3); VAR_3 > 0; VAR_3 = FUNC_1(VAR_3))
  FUNC_6(VAR_1, VAR_3, 0, ((void*)0), -1, ((void*)0));

 return (FUNC_2(VAR_1));
}
