
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_throttle {unsigned int last_jiffies; scalar_t__ io_period; scalar_t__ total_period; int num_io_jobs; int throttle; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dm_kcopyd_throttle *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_4(!VAR_2))
  return;

 FUNC_2(&VAR_1, VAR_3);

 VAR_2->num_io_jobs--;

 if (FUNC_1(FUNC_0(VAR_2->throttle) >= 100))
  goto skip_limit;

 if (!VAR_2->num_io_jobs) {
  unsigned VAR_4, VAR_5;

  VAR_4 = VAR_0;
  VAR_5 = VAR_4 - VAR_2->last_jiffies;
  VAR_2->last_jiffies = VAR_4;

  VAR_2->io_period += VAR_5;
  VAR_2->total_period += VAR_5;




  if (FUNC_4(VAR_2->io_period > VAR_2->total_period))
   VAR_2->io_period = VAR_2->total_period;
 }

skip_limit:
 FUNC_3(&VAR_1, VAR_3);
}
