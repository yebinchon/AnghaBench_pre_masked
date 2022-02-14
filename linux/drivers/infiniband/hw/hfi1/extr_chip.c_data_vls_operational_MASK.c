
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hfi1_pportdata {int vls_supported; TYPE_2__* dd; int actual_vls_operational; } ;
struct TYPE_4__ {TYPE_1__* vld; } ;
struct TYPE_3__ {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct hfi1_pportdata *VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 if (!VAR_1->actual_vls_operational)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->vls_supported; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1->dd, VAR_0 + (8 * VAR_2));
  if ((VAR_3 && !VAR_1->dd->vld[VAR_2].mtu) ||
      (!VAR_3 && VAR_1->dd->vld[VAR_2].mtu))
   return 0;
 }

 return 1;
}
