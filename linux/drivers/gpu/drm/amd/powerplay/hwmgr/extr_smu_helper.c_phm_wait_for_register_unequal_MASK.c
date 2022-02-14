
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pp_hwmgr {scalar_t__ usec_timeout; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;

int FUNC_2(struct pp_hwmgr *VAR_2,
     uint32_t VAR_3,
     uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;

 if (VAR_2 == ((void*)0) || VAR_2->device == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2->usec_timeout; VAR_6++) {
  VAR_7 = FUNC_0(VAR_2->device,
         VAR_3);
  if ((VAR_7 & VAR_5) != (VAR_4 & VAR_5))
   break;
  FUNC_1(1);
 }


 if (VAR_6 == VAR_2->usec_timeout)
  return -VAR_1;
 return 0;
}
