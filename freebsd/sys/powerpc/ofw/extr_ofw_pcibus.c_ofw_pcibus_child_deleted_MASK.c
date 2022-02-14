
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pcibus_devinfo {int opd_obdinfo; } ;
typedef int device_t ;


 struct ofw_pcibus_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct ofw_pcibus_devinfo *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(&VAR_2->opd_obdinfo);
 FUNC_2(VAR_0, VAR_1);
}
