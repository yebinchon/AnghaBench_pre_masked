
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void *VAR_3, u64 VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7, VAR_8;





 VAR_8 = VAR_4 & VAR_0;
 VAR_7 = VAR_4 & 0x7fffffff;


 if (VAR_7 & (VAR_7 - 1))
  return -VAR_1;
 if (!VAR_8) {
  VAR_5 = FUNC_0(&VAR_6);
  if (VAR_5)
   return VAR_5;
  if (!(VAR_4 & VAR_6))
   return -VAR_1;
 }
 VAR_2 = VAR_4;

 return 0;
}
