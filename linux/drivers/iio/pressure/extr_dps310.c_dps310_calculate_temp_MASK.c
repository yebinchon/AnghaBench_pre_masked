
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dps310_data {scalar_t__ c1; scalar_t__ temp_raw; scalar_t__ c0; } ;
typedef long long s64 ;


 long long FUNC_0 (long long,int) ;
 int FUNC_1 (struct dps310_data*) ;

__attribute__((used)) static int FUNC_2(struct dps310_data *VAR_0)
{
 s64 VAR_1;
 s64 VAR_2;
 int VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 < 0)
  return VAR_3;


 VAR_1 = FUNC_0((s64)VAR_3 * (s64)VAR_0->c0, 2);


 VAR_2 = VAR_1 + ((s64)VAR_0->temp_raw * (s64)VAR_0->c1);


 return (int)FUNC_0(VAR_2 * 1000LL, VAR_3);
}
