
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq_simple_ondemand_data {int upthreshold; int downdifferential; } ;
struct devfreq_dev_status {int total_time; int busy_time; unsigned long current_frequency; } ;
struct devfreq {struct devfreq_dev_status last_status; struct devfreq_simple_ondemand_data* data; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devfreq*) ;
 unsigned long long FUNC_1 (unsigned long long,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct devfreq *VAR_4,
     unsigned long *VAR_5)
{
 int VAR_6;
 struct devfreq_dev_status *VAR_7;
 unsigned long long VAR_8, VAR_9;
 unsigned int VAR_10 = VAR_2;
 unsigned int VAR_11 = VAR_1;
 struct devfreq_simple_ondemand_data *VAR_12 = VAR_4->data;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_7 = &VAR_4->last_status;

 if (VAR_12) {
  if (VAR_12->upthreshold)
   VAR_10 = VAR_12->upthreshold;
  if (VAR_12->downdifferential)
   VAR_11 = VAR_12->downdifferential;
 }
 if (VAR_10 > 100 ||
     VAR_10 < VAR_11)
  return -VAR_3;


 if (VAR_7->total_time == 0) {
  *VAR_5 = VAR_0;
  return 0;
 }


 if (VAR_7->busy_time >= (1 << 24) || VAR_7->total_time >= (1 << 24)) {
  VAR_7->busy_time >>= 7;
  VAR_7->total_time >>= 7;
 }


 if (VAR_7->busy_time * 100 >
     VAR_7->total_time * VAR_10) {
  *VAR_5 = VAR_0;
  return 0;
 }


 if (VAR_7->current_frequency == 0) {
  *VAR_5 = VAR_0;
  return 0;
 }


 if (VAR_7->busy_time * 100 >
     VAR_7->total_time * (VAR_10 - VAR_11)) {
  *VAR_5 = VAR_7->current_frequency;
  return 0;
 }


 VAR_8 = VAR_7->busy_time;
 VAR_8 *= VAR_7->current_frequency;
 VAR_9 = FUNC_1(VAR_8, VAR_7->total_time);
 VAR_9 *= 100;
 VAR_9 = FUNC_1(VAR_9, (VAR_10 - VAR_11 / 2));
 *VAR_5 = (unsigned long) VAR_9;

 return 0;
}
