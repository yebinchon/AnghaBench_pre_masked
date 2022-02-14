
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_bpmp_channel {int dummy; } ;
struct TYPE_8__ {int lock; int allocated; int busy; } ;
struct tegra_bpmp {TYPE_4__ threaded; int lock; struct tegra_bpmp_channel* threaded_channels; TYPE_3__* soc; } ;
struct TYPE_5__ {unsigned long timeout; unsigned int count; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;
struct TYPE_7__ {TYPE_2__ channels; } ;


 int VAR_0 ;
 struct tegra_bpmp_channel* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tegra_bpmp_channel*,unsigned int,int,void const*,size_t) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,int ) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct tegra_bpmp_channel*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned long) ;

__attribute__((used)) static struct tegra_bpmp_channel *
FUNC_11(struct tegra_bpmp *VAR_3, unsigned int VAR_4,
     const void *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7 = VAR_3->soc->channels.thread.timeout;
 unsigned int VAR_8 = VAR_3->soc->channels.thread.count;
 struct tegra_bpmp_channel *VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(&VAR_3->threaded.lock, FUNC_10(VAR_7));
 if (VAR_12 < 0)
  return FUNC_0(VAR_12);

 FUNC_6(&VAR_3->lock, VAR_10);

 VAR_11 = FUNC_4(VAR_3->threaded.allocated, VAR_8);
 if (VAR_11 == VAR_8) {
  VAR_12 = -VAR_0;
  goto unlock;
 }

 VAR_9 = &VAR_3->threaded_channels[VAR_11];

 if (!FUNC_8(VAR_9)) {
  VAR_12 = -VAR_0;
  goto unlock;
 }

 FUNC_5(VAR_11, VAR_3->threaded.allocated);

 VAR_12 = FUNC_1(VAR_9, VAR_4, VAR_1 | VAR_2,
      VAR_5, VAR_6);
 if (VAR_12 < 0)
  goto clear_allocated;

 FUNC_5(VAR_11, VAR_3->threaded.busy);

 FUNC_7(&VAR_3->lock, VAR_10);
 return VAR_9;

clear_allocated:
 FUNC_2(VAR_11, VAR_3->threaded.allocated);
unlock:
 FUNC_7(&VAR_3->lock, VAR_10);
 FUNC_9(&VAR_3->threaded.lock);

 return FUNC_0(VAR_12);
}
