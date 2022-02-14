
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ktime_t ;
typedef scalar_t__ int64_t ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 unsigned long FUNC_4 (scalar_t__) ;

unsigned long FUNC_5(uint64_t VAR_1)
{
 unsigned long VAR_2;
 ktime_t VAR_3;


 if (((int64_t)VAR_1) < 0)
  return VAR_0;

 VAR_3 = FUNC_1(FUNC_3(VAR_1), FUNC_0());
 if (FUNC_2(VAR_3) < 0)
  return 0;

 VAR_2 = FUNC_4(FUNC_2(VAR_3));

 if (VAR_2 > VAR_0 )
  return VAR_0 - 1;

 return VAR_2;
}
