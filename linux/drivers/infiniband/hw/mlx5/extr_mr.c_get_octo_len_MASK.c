
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(u64 VAR_0, u64 VAR_1, int VAR_2)
{
 u64 VAR_3 = 1ULL << VAR_2;
 u64 VAR_4;
 int VAR_5;

 VAR_4 = VAR_0 & (VAR_3 - 1);
 VAR_5 = FUNC_0(VAR_1 + VAR_4, VAR_3) >> VAR_2;
 return (VAR_5 + 1) / 2;
}
