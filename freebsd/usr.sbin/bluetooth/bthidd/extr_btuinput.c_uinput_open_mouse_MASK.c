
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef TYPE_1__* hid_device_p ;
typedef int bdaddr_p ;
struct TYPE_4__ {scalar_t__ has_hwheel; scalar_t__ has_wheel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,...) ;
 int * VAR_13 ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__* const,int ,char*) ;

int32_t
FUNC_5(hid_device_p const VAR_14, bdaddr_p VAR_15)
{
 size_t VAR_16;
 int32_t VAR_17;

 FUNC_0(VAR_14 != ((void*)0));

 if ((VAR_17 = FUNC_4(VAR_14, VAR_15, "Bluetooth Mouse")) < 0)
  goto bail_out;


 if (FUNC_2(VAR_17, VAR_9, VAR_2) < 0 ||
     FUNC_2(VAR_17, VAR_9, VAR_0) < 0 ||
     FUNC_2(VAR_17, VAR_9, VAR_1) < 0 ||
     FUNC_2(VAR_17, VAR_12, VAR_6) < 0 ||
     FUNC_2(VAR_17, VAR_12, VAR_7) < 0 ||
     (VAR_14->has_wheel && FUNC_2(VAR_17, VAR_12, VAR_5) < 0) ||
     (VAR_14->has_hwheel && FUNC_2(VAR_17, VAR_12, VAR_4) < 0) ||
     FUNC_2(VAR_17, VAR_11, VAR_3) < 0)
  goto bail_out;


 for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_13); VAR_16++)
  if (FUNC_2(VAR_17, VAR_10, VAR_13[VAR_16]) < 0)
   goto bail_out;

 if (FUNC_2(VAR_17, VAR_8) >= 0)
  return (VAR_17);

bail_out:
 if (VAR_17 >= 0)
  FUNC_1(VAR_17);
 return (-1);
}
