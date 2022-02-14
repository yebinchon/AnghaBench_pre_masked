
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 long FUNC_1 (int ,unsigned long*,int ) ;

int FUNC_2(uint32_t VAR_3, char *VAR_4, int VAR_5)
{
 long VAR_6;
 unsigned long VAR_7[VAR_2];
 unsigned long *VAR_8 = (unsigned long *)VAR_4;

 VAR_6 = FUNC_1(VAR_0, VAR_7, VAR_3);
 VAR_8[0] = FUNC_0(VAR_7[1]);
 VAR_8[1] = FUNC_0(VAR_7[2]);

 if (VAR_6 == VAR_1)
  return VAR_7[0];

 return 0;
}
