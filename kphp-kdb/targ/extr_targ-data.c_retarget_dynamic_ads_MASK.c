
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct advert {scalar_t__ retarget_time; int ad_id; } ;
struct TYPE_4__ {struct advert* first; TYPE_1__* last; } ;
struct TYPE_3__ {int ad_id; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct advert*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int ,struct advert*,scalar_t__,...) ;

int FUNC_4 (void) {
  if (VAR_2 || VAR_5) {
    return 0;
  }
  if (!VAR_4) {
    VAR_4 = FUNC_2 (0);
  }
  FUNC_3 (3, "retarget_dynamic_ads() first=%d last=%d now=%d\n", VAR_0.first->ad_id, VAR_0.last->ad_id, VAR_4);
  if (VAR_0.first != (struct advert *) &VAR_0) {
    struct advert *VAR_6 = VAR_0.first;
    FUNC_3 (3, "first ad in retarget queue: ad #%d (%p), retarget_time=%d, now=%d\n", VAR_6->ad_id, VAR_6, VAR_6->retarget_time, VAR_4);
    if (VAR_6->retarget_time <= VAR_3) {
      FUNC_0 (VAR_1, 8, VAR_6->ad_id);
      FUNC_1 (VAR_6);
      return 1;
    }
  }
  return 0;
}
