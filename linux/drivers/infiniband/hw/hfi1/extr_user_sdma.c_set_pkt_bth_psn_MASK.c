
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(__be32 VAR_2, u8 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2),
  VAR_6 = (FUNC_0(VAR_0) ? 0x7fffffffull :
   0xffffffull),
  VAR_7 = VAR_5 & VAR_6;
 if (VAR_3)
  VAR_7 = (VAR_7 & ~VAR_1) |
   ((VAR_7 + VAR_4) & VAR_1);
 else
  VAR_7 = VAR_7 + VAR_4;
 return VAR_7 & VAR_6;
}
