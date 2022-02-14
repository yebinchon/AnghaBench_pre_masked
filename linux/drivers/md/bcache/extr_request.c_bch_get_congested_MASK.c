
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int congested_last_us; int congested; int congested_write_threshold_us; int congested_read_threshold_us; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

unsigned int FUNC_5(const struct cache_set *VAR_1)
{
 int VAR_2;

 if (!VAR_1->congested_read_threshold_us &&
     !VAR_1->congested_write_threshold_us)
  return 0;

 VAR_2 = (FUNC_4() - VAR_1->congested_last_us) / 1024;
 if (VAR_2 < 0)
  return 0;

 VAR_2 += FUNC_0(&VAR_1->congested);
 if (VAR_2 >= 0)
  return 0;

 VAR_2 += VAR_0;

 if (VAR_2 > 0)
  VAR_2 = FUNC_1(VAR_2, 6);

 VAR_2 -= FUNC_3(FUNC_2());

 return VAR_2 > 0 ? VAR_2 : 1;
}
