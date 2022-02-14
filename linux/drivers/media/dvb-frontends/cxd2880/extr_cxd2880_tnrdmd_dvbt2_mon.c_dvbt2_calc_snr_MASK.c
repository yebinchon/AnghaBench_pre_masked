
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxd2880_tnrdmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct cxd2880_tnrdmd *VAR_2,
     u32 VAR_3, int *VAR_4)
{
 if (!VAR_2 || !VAR_4)
  return -VAR_1;

 if (VAR_3 == 0)
  return -VAR_0;

 if (VAR_3 > 10876)
  VAR_3 = 10876;

 *VAR_4 = FUNC_0(VAR_3) - FUNC_0(12600 - VAR_3);
 *VAR_4 = (*VAR_4 + 839) / 1678 + 32000;

 return 0;
}
