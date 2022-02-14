
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {int obd_name; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,struct ofw_bus_devinfo*) ;
 int FUNC_6 (struct ofw_bus_devinfo*,int ) ;
 struct ofw_bus_devinfo* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct ofw_bus_devinfo*) ;
 scalar_t__ FUNC_9 (struct ofw_bus_devinfo*,scalar_t__) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 phandle_t VAR_4;
 device_t VAR_5;
 struct ofw_bus_devinfo *VAR_6;

 for (VAR_4 = FUNC_0(FUNC_10(VAR_3)); VAR_4 != 0;
     VAR_4 = FUNC_1(VAR_4)) {
  VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
  if (FUNC_9(VAR_6, VAR_4) != 0) {
   FUNC_6(VAR_6, VAR_0);
   continue;
  }
  VAR_5 = FUNC_3(VAR_3, ((void*)0), -1);
  if (VAR_5 == ((void*)0)) {
   FUNC_4(VAR_3, "<%s>: device_add_child failed\n",
       VAR_6->obd_name);
   FUNC_8(VAR_6);
   FUNC_6(VAR_6, VAR_0);
   continue;
  }
  FUNC_5(VAR_5, VAR_6);
 }

 return (FUNC_2(VAR_3));
}
