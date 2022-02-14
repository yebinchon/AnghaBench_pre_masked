
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* initial_path; int* return_path; } ;
struct TYPE_4__ {TYPE_1__ dr; } ;
struct opa_smp {int hop_ptr; TYPE_2__ route; } ;


 int FUNC_0 (struct opa_smp*) ;

int FUNC_1(struct opa_smp *VAR_0)
{
 return !FUNC_0(VAR_0) ? VAR_0->route.dr.initial_path[VAR_0->hop_ptr+1] :
  VAR_0->route.dr.return_path[VAR_0->hop_ptr-1];
}
