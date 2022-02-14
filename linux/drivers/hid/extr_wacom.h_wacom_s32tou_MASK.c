
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;



__attribute__((used)) static inline __u32 FUNC_0(s32 VAR_0, __u8 VAR_1)
{
 switch (VAR_1) {
 case 8: return ((__u8)VAR_0);
 case 16: return ((__u16)VAR_0);
 case 32: return ((__u32)VAR_0);
 }
 return VAR_0 & (1 << (VAR_1 - 1)) ? VAR_0 & (~(~0U << VAR_1)) : VAR_0;
}
