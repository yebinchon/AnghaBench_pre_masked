
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ia64_sal_os_state {int dummy; } ;
typedef int slidx_table_t ;
typedef int peidx_table_t ;
struct TYPE_5__ {scalar_t__ bc; scalar_t__ cc; } ;
typedef TYPE_1__ pal_processor_state_info_t ;
struct TYPE_6__ {scalar_t__ bsi; int type; scalar_t__ eb; } ;
typedef TYPE_2__ pal_bus_check_info_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,TYPE_2__*,struct ia64_sal_os_state*) ;

__attribute__((used)) static int
FUNC_2(slidx_table_t *VAR_0, peidx_table_t *VAR_1,
       pal_bus_check_info_t *VAR_2,
       struct ia64_sal_os_state *VAR_3)
{
 int VAR_4 = 0;
 pal_processor_state_info_t *VAR_5 =
  (pal_processor_state_info_t*)FUNC_0(VAR_1);

 if (VAR_5->bc && VAR_2->eb && VAR_2->bsi == 0) {
  switch(VAR_2->type) {
  case 1:
  case 3:
  case 9:
   VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3);
   break;
  case 0:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 11:
  case 12:

  default:
   break;
  }
 } else if (VAR_5->cc && !VAR_5->bc) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return VAR_4;
}
