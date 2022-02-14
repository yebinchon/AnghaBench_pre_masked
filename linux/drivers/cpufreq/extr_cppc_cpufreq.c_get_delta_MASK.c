
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;



__attribute__((used)) static inline u64 FUNC_0(u64 VAR_0, u64 VAR_1)
{
 if (VAR_0 > VAR_1 || VAR_1 > ~(u32)0)
  return VAR_0 - VAR_1;

 return (u32)VAR_0 - (u32)VAR_1;
}
