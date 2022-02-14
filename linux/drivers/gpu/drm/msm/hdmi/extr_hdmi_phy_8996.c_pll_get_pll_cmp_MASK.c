
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline u32 FUNC_1(u64 VAR_1, unsigned long VAR_2)
{
 u64 VAR_3 = VAR_0 * VAR_1;
 u32 VAR_4 = VAR_2 * 10;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 > (VAR_4 >> 1))
  VAR_3++;

 return VAR_3 - 1;
}
