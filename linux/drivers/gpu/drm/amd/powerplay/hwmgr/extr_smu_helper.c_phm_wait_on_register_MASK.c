
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pp_hwmgr {scalar_t__ usec_timeout; int * device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct pp_hwmgr *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;

 if (VAR_1 == ((void*)0) || VAR_1->device == ((void*)0)) {
  FUNC_1("Invalid Hardware Manager!");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1->usec_timeout; VAR_5++) {
  VAR_6 = FUNC_0(VAR_1->device, VAR_2);
  if ((VAR_6 & VAR_4) == (VAR_3 & VAR_4))
   break;
  FUNC_2(1);
 }


 if (VAR_5 == VAR_1->usec_timeout)
  return -1;
 return 0;
}
