
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; int context; TYPE_1__* env_c_api; } ;
struct TYPE_4__ {int (* release_context ) (int ) ;} ;
typedef TYPE_2__ LabObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(LabObject* VAR_1) {
  if (VAR_1->status != VAR_0) {
    VAR_1->env_c_api->release_context(VAR_1->context);
    VAR_1->status = VAR_0;
    return 1;
  }
  return 0;
}
