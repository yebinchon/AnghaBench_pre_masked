
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef scalar_t__ __s16 ;



__attribute__((used)) static inline int FUNC_0(u16 VAR_0, u16 VAR_1)
{
 u16 VAR_2 = VAR_0 & 0x7FFF;
 u16 VAR_3 = VAR_1 & 0x7FFF;





 return VAR_2 && VAR_2 == VAR_3 && ((__s16)VAR_0 < 0 || (__s16)VAR_1 < 0);
}
