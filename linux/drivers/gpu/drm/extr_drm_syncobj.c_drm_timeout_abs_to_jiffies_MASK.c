
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ktime_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;

signed long FUNC_6(int64_t VAR_1)
{
 ktime_t VAR_2, VAR_3;
 u64 VAR_4, VAR_5;


 if (VAR_1 == 0)
  return 0;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_1();

 if (!FUNC_0(VAR_2, VAR_3))
  return 0;

 VAR_4 = FUNC_3(FUNC_2(VAR_2, VAR_3));

 VAR_5 = FUNC_5(VAR_4);

 if (VAR_5 >= VAR_0 - 1)
  return VAR_0 - 1;

 return VAR_5 + 1;
}
