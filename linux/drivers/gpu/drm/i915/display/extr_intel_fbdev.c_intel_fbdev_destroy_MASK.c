
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dev; } ;
struct intel_fbdev {TYPE_1__* fb; TYPE_3__ helper; int vma_flags; scalar_t__ vma; } ;
struct TYPE_5__ {int struct_mutex; } ;
struct TYPE_4__ {int base; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct intel_fbdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct intel_fbdev *VAR_0)
{





 FUNC_0(&VAR_0->helper);

 if (VAR_0->vma) {
  FUNC_4(&VAR_0->helper.dev->struct_mutex);
  FUNC_2(VAR_0->vma, VAR_0->vma_flags);
  FUNC_5(&VAR_0->helper.dev->struct_mutex);
 }

 if (VAR_0->fb)
  FUNC_1(&VAR_0->fb->base);

 FUNC_3(VAR_0);
}
