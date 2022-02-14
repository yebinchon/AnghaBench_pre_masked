
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef scalar_t__ phandle_t ;
typedef int id ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

u_int
FUNC_3(device_t VAR_0)
{
 phandle_t VAR_1;
 uint32_t VAR_2;

 for (VAR_1 = FUNC_2(VAR_0); VAR_1 != 0; VAR_1 = FUNC_1(VAR_1))
  if (FUNC_0(VAR_1, "scsi-initiator-id", &VAR_2,
      sizeof(VAR_2)) > 0)
   return (VAR_2);
 return (7);
}
