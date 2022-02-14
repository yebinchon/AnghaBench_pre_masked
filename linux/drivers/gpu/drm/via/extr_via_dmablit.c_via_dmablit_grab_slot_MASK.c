
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_free; int blit_lock; int busy_queue; } ;
typedef TYPE_1__ drm_via_blitq_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(drm_via_blitq_t *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_0("Num free is %d\n", VAR_3->num_free);
 FUNC_2(&VAR_3->blit_lock, VAR_6);
 while (VAR_3->num_free == 0) {
  FUNC_3(&VAR_3->blit_lock, VAR_6);

  FUNC_1(VAR_5, VAR_3->busy_queue, VAR_2, VAR_3->num_free > 0);
  if (VAR_5)
   return (-VAR_1 == VAR_5) ? -VAR_0 : VAR_5;

  FUNC_2(&VAR_3->blit_lock, VAR_6);
 }

 VAR_3->num_free--;
 FUNC_3(&VAR_3->blit_lock, VAR_6);

 return 0;
}
