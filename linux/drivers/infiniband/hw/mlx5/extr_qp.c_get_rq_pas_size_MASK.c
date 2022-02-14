
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (void*,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_1(void *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4, VAR_4, VAR_5) + 12;
 u32 VAR_6 = FUNC_0(VAR_4, VAR_4, VAR_6);
 u32 VAR_7 = FUNC_0(VAR_4, VAR_4, VAR_7);
 u32 VAR_8 = FUNC_0(VAR_4, VAR_4, VAR_8);
 u32 VAR_9 = 1 << (VAR_5 - 6);
 u32 VAR_10 = 1 << (VAR_7 + 4 + VAR_6);
 u32 VAR_11 = 1 << VAR_5;
 u32 VAR_12 = VAR_10 + (VAR_8 * VAR_9);
 u32 VAR_13 = (VAR_12 + VAR_11 - 1) / VAR_11;

 return VAR_13 * sizeof(u64);
}
