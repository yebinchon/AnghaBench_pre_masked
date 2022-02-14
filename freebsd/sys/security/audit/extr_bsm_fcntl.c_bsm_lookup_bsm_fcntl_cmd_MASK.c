
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_4__ {scalar_t__ bfc_bsm_fcntl_cmd; } ;
typedef TYPE_1__ bsm_fcntl_cmd_t ;


 int VAR_0 ;
 TYPE_1__ const* VAR_1 ;

__attribute__((used)) static const bsm_fcntl_cmd_t *
FUNC_0(u_short VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].bfc_bsm_fcntl_cmd ==
      VAR_2)
   return (&VAR_1[VAR_3]);
 }
 return (((void*)0));
}
