
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct vc_map {scalar_t__ max_er; scalar_t__ lacr; int index; int lock; int estimator; struct idt77252_dev* card; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct rate_estimator {int interval; long avcps; long ewma_log; int cps; int maxcps; TYPE_1__ timer; scalar_t__ last_cells; scalar_t__ cells; struct vc_map* vc; } ;
struct idt77252_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct rate_estimator* VAR_3 ;
 struct rate_estimator* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_2 (struct idt77252_dev*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6(struct timer_list *VAR_6)
{
 struct rate_estimator *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 struct vc_map *VAR_8 = VAR_7->vc;
 struct idt77252_dev *VAR_9 = VAR_8->card;
 unsigned long VAR_10;
 u32 VAR_11, VAR_12;
 u64 VAR_13;
 u8 VAR_14;

 FUNC_3(&VAR_8->lock, VAR_10);
 if (!VAR_8->estimator)
  goto out;
 VAR_13 = VAR_7->cells;

 VAR_11 = ((u32)(VAR_13 - VAR_7->last_cells)) << (7 - VAR_7->interval);
 VAR_7->last_cells = VAR_13;
 VAR_7->avcps += ((long)VAR_11 - (long)VAR_7->avcps) >> VAR_7->ewma_log;
 VAR_7->cps = (VAR_7->avcps + 0x1f) >> 5;

 VAR_12 = VAR_7->cps;
 if (VAR_12 < (VAR_7->maxcps >> 4))
  VAR_12 = VAR_7->maxcps >> 4;

 VAR_14 = FUNC_2(VAR_9, VAR_12);
 if (VAR_14 > VAR_8->max_er)
  VAR_14 = VAR_8->max_er;

 if (VAR_14 != VAR_8->lacr) {
  VAR_8->lacr = VAR_14;
  FUNC_5(VAR_2|(VAR_8->lacr << 16)|VAR_8->index, VAR_1);
 }

 VAR_7->timer.expires = VAR_4 + ((VAR_0 / 4) << VAR_7->interval);
 FUNC_0(&VAR_7->timer);

out:
 FUNC_4(&VAR_8->lock, VAR_10);
}
