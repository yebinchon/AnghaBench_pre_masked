
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbios_softc {scalar_t__ res; int rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 struct smbios_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (device_t VAR_1)
{
 struct smbios_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->res)
  FUNC_0(VAR_1, VAR_0, VAR_2->rid, VAR_2->res);

 return (0);
}
