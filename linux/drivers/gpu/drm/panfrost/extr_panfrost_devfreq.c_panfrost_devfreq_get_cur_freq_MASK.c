
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long cur_freq; } ;
struct panfrost_device {TYPE_1__ devfreq; } ;
struct device {int dummy; } ;


 struct panfrost_device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned long *VAR_1)
{
 struct panfrost_device *VAR_2 = FUNC_0(FUNC_1(VAR_0));

 *VAR_1 = VAR_2->devfreq.cur_freq;

 return 0;
}
