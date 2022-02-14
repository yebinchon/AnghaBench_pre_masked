
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int Cx86cpuid ;
typedef int BoolInt ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int*,int*,int*) ;
 int FUNC_1 (int *) ;

BoolInt FUNC_2()
{
  Cx86cpuid VAR_1;
  if (!FUNC_1(&VAR_1))
    return VAR_0;
  {
    UInt32 VAR_2[4] = { 0 };
    FUNC_0(0x80000000, &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3]);
    if (VAR_2[0] < 0x80000001)
      return VAR_0;
  }
  {
    UInt32 VAR_3[4] = { 0 };
    FUNC_0(0x80000001, &VAR_3[0], &VAR_3[1], &VAR_3[2], &VAR_3[3]);
    return (VAR_3[3] >> 26) & 1;
  }
}
