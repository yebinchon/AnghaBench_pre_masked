
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_devinfo {int obd_name; } ;
typedef scalar_t__ phandle_t ;
typedef int name ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,struct ofw_bus_devinfo*) ;
 int FUNC_6 (struct ofw_bus_devinfo*,int ) ;
 struct ofw_bus_devinfo* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct ofw_bus_devinfo*) ;
 scalar_t__ FUNC_9 (struct ofw_bus_devinfo*,scalar_t__) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(device_t VAR_3, phandle_t VAR_4)
{
 phandle_t VAR_5;
 device_t VAR_6;
 struct ofw_bus_devinfo *VAR_7;
 char VAR_8[32];

 for (VAR_5 = FUNC_0(VAR_4); VAR_5 != 0; VAR_5 = FUNC_2(VAR_5)) {
  if (FUNC_1(VAR_5, "name", VAR_8, sizeof(VAR_8)) <= 0)
   continue;

  if (FUNC_10(VAR_8, "i2c-bus") != 0 && FUNC_10(VAR_8, "i2c") != 0)
   continue;

  VAR_7 = FUNC_7(sizeof(struct ofw_bus_devinfo), VAR_0,
      VAR_1 | VAR_2);
  if (FUNC_9(VAR_7, VAR_5) != 0) {
   FUNC_6(VAR_7, VAR_0);
   continue;
  }

  VAR_6 = FUNC_3(VAR_3, ((void*)0), -1);
  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_3, "<%s>: device_add_child failed\n",
       VAR_7->obd_name);
   FUNC_8(VAR_7);
   FUNC_6(VAR_7, VAR_0);
   continue;
  }
  FUNC_5(VAR_6, VAR_7);
 }
}
