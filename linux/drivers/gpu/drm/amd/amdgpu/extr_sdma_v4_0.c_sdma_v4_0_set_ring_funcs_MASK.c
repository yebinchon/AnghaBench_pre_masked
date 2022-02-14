
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int num_instances; TYPE_3__* instance; scalar_t__ has_page_queue; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_4__ sdma; } ;
struct TYPE_6__ {int me; int * funcs; } ;
struct TYPE_5__ {int me; int * funcs; } ;
struct TYPE_7__ {TYPE_2__ page; TYPE_1__ ring; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->sdma.num_instances; VAR_6++) {
  if (VAR_5->asic_type == VAR_0 && VAR_6 >= 5)
   VAR_5->sdma.instance[VAR_6].ring.funcs =
     &VAR_4;
  else
   VAR_5->sdma.instance[VAR_6].ring.funcs =
     &VAR_3;
  VAR_5->sdma.instance[VAR_6].ring.me = VAR_6;
  if (VAR_5->sdma.has_page_queue) {
   if (VAR_5->asic_type == VAR_0 && VAR_6 >= 5)
    VAR_5->sdma.instance[VAR_6].page.funcs =
     &VAR_2;
   else
    VAR_5->sdma.instance[VAR_6].page.funcs =
     &VAR_1;
   VAR_5->sdma.instance[VAR_6].page.me = VAR_6;
  }
 }
}
