
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int obd_node; int obd_name; } ;
struct nexus_devinfo {int ndi_rl; TYPE_1__ ndi_obdinfo; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,struct nexus_devinfo*) ;
 struct nexus_devinfo* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_4, u_int VAR_5, const char *VAR_6, int VAR_7)
{
 device_t VAR_8;
 struct nexus_devinfo *VAR_9;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0, VAR_2 | VAR_3);
 VAR_9->ndi_obdinfo.obd_node = -1;
 VAR_9->ndi_obdinfo.obd_name = FUNC_4(VAR_6, VAR_1);
 FUNC_3(&VAR_9->ndi_rl);
 FUNC_1(VAR_8, VAR_9);

 return (VAR_8);
}
