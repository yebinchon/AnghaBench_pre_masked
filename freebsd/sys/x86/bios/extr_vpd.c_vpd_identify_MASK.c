
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int driver_t ;
typedef int device_t ;
struct TYPE_2__ {int Length; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7 (driver_t *VAR_6, device_t VAR_7)
{
 device_t VAR_8;
 u_int32_t VAR_9;
 int VAR_10;
 int VAR_11;

 if (!FUNC_4(VAR_7))
  return;

 VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_1, VAR_5, VAR_2);
 if (VAR_9 != 0) {
  VAR_11 = 0;
  VAR_10 = FUNC_0(VAR_9)->Length;

  VAR_8 = FUNC_1(VAR_7, 5, "vpd", -1);
  FUNC_6(VAR_8, VAR_6);
  FUNC_3(VAR_8, VAR_0, VAR_11, VAR_9, VAR_10);
  FUNC_5(VAR_8, "Vital Product Data Area");
 }

 return;
}
