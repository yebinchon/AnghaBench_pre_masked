
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

int FUNC_2(uint32_t VAR_4, void *VAR_5, uint64_t VAR_6)
{
 int64_t VAR_7;

 if (!FUNC_0(VAR_2))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_4, (uint64_t)VAR_5, VAR_6);
 if (VAR_7 < VAR_3)
  return -VAR_0;

 return VAR_7;
}
