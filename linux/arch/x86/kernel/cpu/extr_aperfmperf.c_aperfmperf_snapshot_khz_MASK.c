
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct aperfmperf_sample {scalar_t__ aperf; scalar_t__ mperf; int khz; int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_3 ;
 struct aperfmperf_sample* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_4)
{
 u64 VAR_5, VAR_6;
 u64 VAR_7, VAR_8;
 struct aperfmperf_sample *VAR_9 = FUNC_5(&VAR_3);
 unsigned long VAR_10;

 FUNC_3(VAR_10);
 FUNC_4(VAR_0, VAR_5);
 FUNC_4(VAR_1, VAR_7);
 FUNC_2(VAR_10);

 VAR_6 = VAR_5 - VAR_9->aperf;
 VAR_8 = VAR_7 - VAR_9->mperf;





 if (VAR_8 == 0)
  return;

 VAR_9->time = FUNC_1();
 VAR_9->aperf = VAR_5;
 VAR_9->mperf = VAR_7;
 VAR_9->khz = FUNC_0((VAR_2 * VAR_6), VAR_8);
}
