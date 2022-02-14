
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct lochnagar_hwmon {int* power_nsamples; } ;
struct device {int dummy; } ;


 long FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long FUNC_1 (long) ;
 struct lochnagar_hwmon* FUNC_2 (struct device*) ;
 int * VAR_4 ;
 int FUNC_3 (struct device*,int,int ,int,int,long*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, int VAR_6, long *VAR_7)
{
 struct lochnagar_hwmon *VAR_8 = FUNC_2(VAR_5);
 int VAR_9 = VAR_8->power_nsamples[VAR_6];
 u64 VAR_10;
 int VAR_11;

 if (!FUNC_4("SYSVDD", VAR_4[VAR_6])) {
  VAR_10 = 5 * VAR_1;
 } else {
  VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_2, 1, VAR_1, VAR_7);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_10 = FUNC_1(*VAR_7);
 }

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_0, VAR_9, VAR_1, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 *= FUNC_1(*VAR_7);
 VAR_10 = FUNC_0(VAR_10, VAR_1);

 if (VAR_10 > VAR_3)
  *VAR_7 = VAR_3;
 else
  *VAR_7 = VAR_10;

 return 0;
}
