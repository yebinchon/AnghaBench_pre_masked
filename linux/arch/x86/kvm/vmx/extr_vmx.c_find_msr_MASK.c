
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmx_msrs {unsigned int nr; TYPE_1__* val; } ;
struct TYPE_2__ {unsigned int index; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vmx_msrs *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; ++VAR_3) {
  if (VAR_1->val[VAR_3].index == VAR_2)
   return VAR_3;
 }
 return -VAR_0;
}
