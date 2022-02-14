
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ia64_sal_os_state {int rv_rc; } ;
typedef int peidx_table_t ;
struct TYPE_4__ {scalar_t__ uc; scalar_t__ rc; scalar_t__ cc; scalar_t__ tc; } ;
typedef TYPE_1__ pal_processor_state_info_t ;
struct TYPE_5__ {int bsi; scalar_t__ eb; scalar_t__ ib; } ;
typedef TYPE_2__ pal_bus_check_info_t ;
typedef int mca_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static mca_type_t
FUNC_1(peidx_table_t *VAR_2, pal_bus_check_info_t *VAR_3,
       struct ia64_sal_os_state *VAR_4)
{
 pal_processor_state_info_t *VAR_5 =
  (pal_processor_state_info_t*)FUNC_0(VAR_2);
 switch (VAR_4->rv_rc) {
  case -1:
   return VAR_0;
  case 0:
   return VAR_1;
  case 1:
  case 2:
  default:
   break;
 }





 if (VAR_5->tc || VAR_5->cc || VAR_5->rc || VAR_5->uc)
  return VAR_1;





 if (!VAR_3 || VAR_3->ib)
  return VAR_0;
 if (VAR_3->eb)
  switch (VAR_3->bsi) {
   case 0:

    return VAR_1;
   case 1:
   case 2:
   case 3:
    return VAR_0;
  }

 return VAR_0;
}
