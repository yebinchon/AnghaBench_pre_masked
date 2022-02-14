
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct media_bay_info {scalar_t__ content_id; scalar_t__ last_value; scalar_t__ state; int lock; scalar_t__ sleeping; int index; void* timer; void* value_count; TYPE_4__* ops; } ;
struct TYPE_10__ {scalar_t__ event; } ;
struct TYPE_6__ {TYPE_5__ power_state; } ;
struct TYPE_7__ {TYPE_1__ power; } ;
struct TYPE_8__ {TYPE_2__ dev; } ;
struct macio_dev {TYPE_3__ ofdev; } ;
struct TYPE_9__ {scalar_t__ (* content ) (struct media_bay_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct media_bay_info* FUNC_0 (struct macio_dev*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct media_bay_info*,int) ;
 scalar_t__ FUNC_8 (struct media_bay_info*) ;

__attribute__((used)) static int FUNC_9(struct macio_dev *VAR_7)
{
 struct media_bay_info *VAR_8 = FUNC_0(VAR_7);

 if (VAR_7->ofdev.dev.power.power_state.event != VAR_4) {
  VAR_7->ofdev.dev.power.power_state = VAR_3;






  FUNC_4(&VAR_8->lock);
         FUNC_7(VAR_8, 0);
  FUNC_3(VAR_1);
         if (VAR_8->ops->content(VAR_8) != VAR_8->content_id) {
   FUNC_6("mediabay%d: Content changed during sleep...\n", VAR_8->index);
   FUNC_5(&VAR_8->lock);
          return 0;
  }
         FUNC_7(VAR_8, 1);
         VAR_8->last_value = VAR_8->content_id;
         VAR_8->value_count = FUNC_2(VAR_2);
         VAR_8->timer = FUNC_2(VAR_1);
         do {
   FUNC_3(VAR_0);
          FUNC_1(VAR_8->index);
         } while((VAR_8->state != VAR_5) &&
          (VAR_8->state != VAR_6));
  VAR_8->sleeping = 0;
  FUNC_5(&VAR_8->lock);
 }
 return 0;
}
