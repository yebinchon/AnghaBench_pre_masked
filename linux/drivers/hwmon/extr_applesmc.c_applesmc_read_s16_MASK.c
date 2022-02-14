
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s16 ;


 int FUNC_0 (char const*,int*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, s16 *VAR_1)
{
 u8 VAR_2[2];
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2, 2);
 if (VAR_3)
  return VAR_3;

 *VAR_1 = ((s16)VAR_2[0] << 8) | VAR_2[1];
 return 0;
}
