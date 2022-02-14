
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int __be64 ;
typedef int __be32 ;



 size_t VAR_0 ;

 size_t VAR_1 ;

 size_t VAR_2 ;

 size_t VAR_3 ;

 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(char *VAR_10, int VAR_11)
{
 u8 VAR_12;
 __be32 *VAR_13 = (__be32 *)VAR_10;
 u64 *VAR_14 = (u64 *)VAR_10;
 __be64 *VAR_15 = (__be64 *)VAR_8;
 __be64 *VAR_16 = (__be64 *)VAR_9;

 switch (VAR_11) {
 case 132:
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
   VAR_13[VAR_12] = FUNC_1(VAR_5[VAR_12]);
  break;
 case 131:
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
   VAR_13[VAR_12] = FUNC_1(VAR_6[VAR_12]);
  break;
 case 130:
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   VAR_13[VAR_12] = FUNC_1(VAR_7[VAR_12]);
  break;
 case 129:
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
   VAR_14[VAR_12] = FUNC_0(VAR_15[VAR_12]);
  break;
 case 128:
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
   VAR_14[VAR_12] = FUNC_0(VAR_16[VAR_12]);
  break;
 }
}
