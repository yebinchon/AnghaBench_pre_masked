
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_1(u32 VAR_2)
{
 u32 VAR_3 = VAR_2 & ~0x1;

 return FUNC_0(VAR_1, VAR_3 >> 1) |
  FUNC_0(VAR_0, 1 << (VAR_2 - VAR_3));
}
