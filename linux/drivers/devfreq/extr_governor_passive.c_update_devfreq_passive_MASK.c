
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct devfreq {unsigned long previous_freq; int lock; TYPE_3__ dev; TYPE_1__* profile; TYPE_2__* governor; } ;
struct TYPE_5__ {int (* get_target_freq ) (struct devfreq*,unsigned long*) ;} ;
struct TYPE_4__ {int (* target ) (int ,unsigned long*,int ) ;scalar_t__ freq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (struct devfreq*,unsigned long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct devfreq*,unsigned long*) ;
 int FUNC_5 (int ,unsigned long*,int ) ;

__attribute__((used)) static int FUNC_6(struct devfreq *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 if (!VAR_2->governor)
  return -VAR_0;

 FUNC_2(&VAR_2->lock, VAR_1);

 VAR_4 = VAR_2->governor->get_target_freq(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = VAR_2->profile->target(VAR_2->dev.parent, &VAR_3, 0);
 if (VAR_4 < 0)
  goto out;

 if (VAR_2->profile->freq_table
  && (FUNC_1(VAR_2, VAR_3)))
  FUNC_0(&VAR_2->dev,
   "Couldn't update frequency transition information.\n");

 VAR_2->previous_freq = VAR_3;

out:
 FUNC_3(&VAR_2->lock);

 return 0;
}
