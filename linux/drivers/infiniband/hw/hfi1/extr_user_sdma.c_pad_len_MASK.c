
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0)
{
 if (VAR_0 & (sizeof(u32) - 1))
  VAR_0 += sizeof(u32) - (VAR_0 & (sizeof(u32) - 1));
 return VAR_0;
}
