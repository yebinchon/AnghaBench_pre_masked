
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq {scalar_t__ suspend_freq; TYPE_1__* governor; int suspend_count; } ;
struct TYPE_2__ {int (* event_handler ) (struct devfreq*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct devfreq*,scalar_t__,int ) ;
 int FUNC_2 (struct devfreq*,int ,int *) ;

int FUNC_3(struct devfreq *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_1;

 if (FUNC_0(&VAR_2->suspend_count) > 1)
  return 0;

 if (VAR_2->governor) {
  VAR_3 = VAR_2->governor->event_handler(VAR_2,
     VAR_0, ((void*)0));
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->suspend_freq) {
  VAR_3 = FUNC_1(VAR_2, VAR_2->suspend_freq, 0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
