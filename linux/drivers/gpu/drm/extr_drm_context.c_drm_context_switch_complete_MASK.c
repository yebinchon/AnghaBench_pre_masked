
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {TYPE_3__* master; } ;
struct drm_device {int last_context; int context_flag; } ;
struct TYPE_5__ {TYPE_1__* hw_lock; } ;
struct TYPE_6__ {TYPE_2__ lock; } ;
struct TYPE_4__ {int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0,
           struct drm_file *VAR_1, int VAR_2)
{
 VAR_0->last_context = VAR_2;

 if (!FUNC_1(VAR_1->master->lock.hw_lock->lock)) {
  FUNC_0("Lock isn't held after context switch\n");
 }




 FUNC_2(0, &VAR_0->context_flag);

 return 0;
}
