
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct devfreq {int min_freq; int scaling_min_freq; int max_freq; int scaling_max_freq; TYPE_1__* governor; int lock; } ;
struct TYPE_2__ {int (* get_target_freq ) (struct devfreq*,unsigned long*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct devfreq*,unsigned long,int ) ;
 unsigned long FUNC_2 (int ,int ) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct devfreq*,unsigned long*) ;

int FUNC_6(struct devfreq *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;
 u32 VAR_7 = 0;

 if (!FUNC_4(&VAR_2->lock)) {
  FUNC_0(1, "devfreq->lock must be locked by the caller.\n");
  return -VAR_1;
 }

 if (!VAR_2->governor)
  return -VAR_1;


 VAR_6 = VAR_2->governor->get_target_freq(VAR_2, &VAR_3);
 if (VAR_6)
  return VAR_6;
 VAR_5 = FUNC_3(VAR_2->scaling_max_freq, VAR_2->max_freq);
 VAR_4 = FUNC_2(VAR_2->scaling_min_freq, VAR_2->min_freq);

 if (VAR_3 < VAR_4) {
  VAR_3 = VAR_4;
  VAR_7 &= ~VAR_0;
 }
 if (VAR_3 > VAR_5) {
  VAR_3 = VAR_5;
  VAR_7 |= VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_7);

}
