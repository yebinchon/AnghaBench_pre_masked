
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_throttle {unsigned int last_jiffies; unsigned int io_period; unsigned int total_period; scalar_t__ num_io_jobs; int throttle; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct dm_kcopyd_throttle *VAR_5)
{
 unsigned VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0, VAR_10;

 if (FUNC_6(!VAR_5))
  return;

try_again:
 FUNC_4(&VAR_4);

 VAR_6 = FUNC_0(VAR_5->throttle);

 if (FUNC_2(VAR_6 >= 100))
  goto skip_limit;

 VAR_7 = VAR_3;
 VAR_8 = VAR_7 - VAR_5->last_jiffies;
 VAR_5->last_jiffies = VAR_7;
 if (VAR_5->num_io_jobs)
  VAR_5->io_period += VAR_8;
 VAR_5->total_period += VAR_8;




 if (FUNC_6(VAR_5->io_period > VAR_5->total_period))
  VAR_5->io_period = VAR_5->total_period;

 if (FUNC_6(VAR_5->total_period >= (1 << VAR_0))) {
  int VAR_11 = FUNC_1(VAR_5->total_period >> VAR_0);
  VAR_5->total_period >>= VAR_11;
  VAR_5->io_period >>= VAR_11;
 }

 VAR_10 = VAR_5->io_period - VAR_6 * VAR_5->total_period / 100;

 if (FUNC_6(VAR_10 > 0) && VAR_9 < VAR_1) {
  VAR_9++;
  FUNC_5(&VAR_4);
  FUNC_3(VAR_2);
  goto try_again;
 }

skip_limit:
 VAR_5->num_io_jobs++;

 FUNC_5(&VAR_4);
}
