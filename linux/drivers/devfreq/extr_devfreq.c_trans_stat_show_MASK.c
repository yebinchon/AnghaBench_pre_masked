
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {scalar_t__ previous_freq; int* trans_table; int total_trans; int * time_in_state; TYPE_1__* profile; int stop_polling; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int max_state; int* freq_table; } ;


 scalar_t__ FUNC_0 (struct devfreq*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,...) ;
 struct devfreq* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct devfreq *VAR_3 = FUNC_3(VAR_0);
 ssize_t VAR_4;
 int VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_3->profile->max_state;

 if (!VAR_3->stop_polling &&
   FUNC_0(VAR_3, VAR_3->previous_freq))
  return 0;
 if (VAR_7 == 0)
  return FUNC_2(VAR_2, "Not Supported.\n");

 VAR_4 = FUNC_2(VAR_2, "     From  :   To\n");
 VAR_4 += FUNC_2(VAR_2 + VAR_4, "           :");
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  VAR_4 += FUNC_2(VAR_2 + VAR_4, "%10lu",
    VAR_3->profile->freq_table[VAR_5]);

 VAR_4 += FUNC_2(VAR_2 + VAR_4, "   time(ms)\n");

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (VAR_3->profile->freq_table[VAR_5]
     == VAR_3->previous_freq) {
   VAR_4 += FUNC_2(VAR_2 + VAR_4, "*");
  } else {
   VAR_4 += FUNC_2(VAR_2 + VAR_4, " ");
  }
  VAR_4 += FUNC_2(VAR_2 + VAR_4, "%10lu:",
    VAR_3->profile->freq_table[VAR_5]);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   VAR_4 += FUNC_2(VAR_2 + VAR_4, "%10u",
    VAR_3->trans_table[(VAR_5 * VAR_7) + VAR_6]);
  VAR_4 += FUNC_2(VAR_2 + VAR_4, "%10u\n",
   FUNC_1(VAR_3->time_in_state[VAR_5]));
 }

 VAR_4 += FUNC_2(VAR_2 + VAR_4, "Total transition : %u\n",
     VAR_3->total_trans);
 return VAR_4;
}
