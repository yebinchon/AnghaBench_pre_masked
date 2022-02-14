
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isl29501_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (struct isl29501_private*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_2,
        int *VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 unsigned long long VAR_7;
 u32 VAR_8;

 VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_7 = 1000000ULL * 1000000ULL;

 FUNC_0(VAR_7, 450 * (VAR_6 + 1));

 VAR_8 = FUNC_0(VAR_7, 1000000);
 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;

 return VAR_0;
}
