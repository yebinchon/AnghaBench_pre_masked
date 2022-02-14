
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,int,int,int) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_3(unsigned long VAR_0, unsigned long VAR_1, u32 *VAR_2, u64 *VAR_3,
       u32 VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;

 VAR_6 = VAR_0;
 VAR_5 = FUNC_2(VAR_6, VAR_1);
 *VAR_2 = VAR_6;

 if (!VAR_5) {
  *VAR_3 = 0;
  return VAR_0;
 }


 VAR_6 = VAR_5 << FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_6, VAR_1);

 if (VAR_5)
  VAR_6++;

 *VAR_3 = VAR_6;
 return FUNC_1(VAR_1, *VAR_2, *VAR_3, VAR_4);
}
