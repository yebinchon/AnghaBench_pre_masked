
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long,int,int) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_3(unsigned long VAR_1, unsigned long VAR_2,
       u32 *VAR_3, u32 *VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;

 VAR_6 = VAR_1;
 VAR_5 = FUNC_2(VAR_6, VAR_2);
 *VAR_3 = VAR_6;

 if (!VAR_5) {
  *VAR_4 = 0;
  return VAR_1;
 }

 VAR_6 = VAR_5 << VAR_0;
 VAR_5 = FUNC_2(VAR_6, VAR_2);

 if (VAR_5)
  VAR_6++;






 if (VAR_6 >= FUNC_0(VAR_0 - 1))
  *VAR_3 += 1;

 *VAR_4 = VAR_6;
 return FUNC_1(VAR_2, *VAR_3, *VAR_4);
}
