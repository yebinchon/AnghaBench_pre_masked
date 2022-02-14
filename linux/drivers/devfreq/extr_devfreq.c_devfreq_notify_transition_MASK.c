
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq_freqs {int dummy; } ;
struct devfreq {int transition_notifier_list; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int const,struct devfreq_freqs*) ;

__attribute__((used)) static int FUNC_1(struct devfreq *VAR_1,
  struct devfreq_freqs *VAR_2, unsigned int VAR_3)
{
 if (!VAR_1)
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  FUNC_0(&VAR_1->transition_notifier_list,
    128, VAR_2);
  break;

 case 129:
  FUNC_0(&VAR_1->transition_notifier_list,
    129, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
