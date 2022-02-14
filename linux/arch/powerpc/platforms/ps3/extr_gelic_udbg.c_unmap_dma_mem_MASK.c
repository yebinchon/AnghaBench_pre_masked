
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int,size_t) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, u64 VAR_2, size_t VAR_3)
{
 s64 VAR_4;
 u64 VAR_5;

 VAR_5 = VAR_2 & ~0xfff;
 VAR_3 += VAR_2 - VAR_5;
 VAR_3 = (VAR_3 + 0xfff) & ~0xfff;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_5,
          VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_5);
}
