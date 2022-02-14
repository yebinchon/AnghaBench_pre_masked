
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int FUNC_0 (long,int,int) ;
 int VAR_1 ;

__attribute__((used)) static inline u8
FUNC_1(long VAR_2, enum chips VAR_3)
{
 int VAR_4;
 VAR_2 = FUNC_0(VAR_2, 1,
   ((VAR_3 == VAR_1 || VAR_3 == VAR_0) ? 8 : 128)) >> 1;
 for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
  if (VAR_2 == 0)
   break;
  VAR_2 >>= 1;
 }
 return VAR_4;
}
