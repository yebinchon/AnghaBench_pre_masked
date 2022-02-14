
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (int,int,int,int,int ,int*) ;
 scalar_t__ FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1, void *VAR_2, size_t VAR_3,
   u64 *VAR_4)
{
 s64 VAR_5;
 u64 VAR_6 = ((u64)VAR_2) & 0x0fffffffffffffffUL;
 u64 VAR_7 = VAR_6 + VAR_3;
 u64 VAR_8 = VAR_6 & ~0xfff;
 u64 VAR_9 = (VAR_7 + 0xfff) & ~0xfff;
 u64 VAR_10 = 0;

 u64 VAR_11 = 0xf800000000000000UL;

 VAR_5 = FUNC_0(VAR_0, VAR_1,
      VAR_9 - VAR_8, 12, 0,
      &VAR_10);
 if (VAR_5)
  FUNC_2(0);

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_8,
        VAR_10, VAR_9 - VAR_8,
        VAR_11);
 if (VAR_5)
  FUNC_2(0);

 *VAR_4 = VAR_10 + VAR_6 - VAR_8;
}
