
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userspace_data {unsigned long user_frequency; scalar_t__ valid; } ;
struct devfreq {unsigned long previous_freq; struct userspace_data* data; } ;



__attribute__((used)) static int FUNC_0(struct devfreq *VAR_0, unsigned long *VAR_1)
{
 struct userspace_data *VAR_2 = VAR_0->data;

 if (VAR_2->valid)
  *VAR_1 = VAR_2->user_frequency;
 else
  *VAR_1 = VAR_0->previous_freq;

 return 0;
}
