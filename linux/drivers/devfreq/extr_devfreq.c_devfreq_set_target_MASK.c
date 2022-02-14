
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct devfreq_freqs {unsigned long old; unsigned long new; } ;
struct TYPE_4__ {int parent; } ;
struct devfreq {unsigned long previous_freq; unsigned long resume_freq; scalar_t__ suspend_freq; TYPE_2__ dev; TYPE_1__* profile; } ;
struct TYPE_3__ {int (* target ) (int ,unsigned long*,int ) ;int (* get_cur_freq ) (int ,unsigned long*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct devfreq*,struct devfreq_freqs*,int ) ;
 scalar_t__ FUNC_2 (struct devfreq*,unsigned long) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (int ,unsigned long*,int ) ;

__attribute__((used)) static int FUNC_5(struct devfreq *VAR_2, unsigned long VAR_3,
         u32 VAR_4)
{
 struct devfreq_freqs VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (VAR_2->profile->get_cur_freq)
  VAR_2->profile->get_cur_freq(VAR_2->dev.parent, &VAR_6);
 else
  VAR_6 = VAR_2->previous_freq;

 VAR_5.old = VAR_6;
 VAR_5.new = VAR_3;
 FUNC_1(VAR_2, &VAR_5, VAR_1);

 VAR_7 = VAR_2->profile->target(VAR_2->dev.parent, &VAR_3, VAR_4);
 if (VAR_7) {
  VAR_5.new = VAR_6;
  FUNC_1(VAR_2, &VAR_5, VAR_0);
  return VAR_7;
 }

 VAR_5.new = VAR_3;
 FUNC_1(VAR_2, &VAR_5, VAR_0);

 if (FUNC_2(VAR_2, VAR_3))
  FUNC_0(&VAR_2->dev,
   "Couldn't update frequency transition information.\n");

 VAR_2->previous_freq = VAR_3;

 if (VAR_2->suspend_freq)
  VAR_2->resume_freq = VAR_6;

 return VAR_7;
}
