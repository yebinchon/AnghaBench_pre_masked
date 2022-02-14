
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, u16 VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;
 u16 VAR_6;

 VAR_6 = FUNC_1(VAR_2 + VAR_3 + VAR_0);
 if (VAR_6 == 0)
  return 0;

 do {
  VAR_5 = FUNC_0(VAR_2 + VAR_6 + (VAR_4 * sizeof(u32)));
  VAR_4++;
 } while ((VAR_5 & VAR_1) == 0);

 return VAR_4;
}
