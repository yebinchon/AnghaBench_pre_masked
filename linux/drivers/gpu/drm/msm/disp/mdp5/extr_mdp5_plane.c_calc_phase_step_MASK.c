
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_4, uint32_t VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7;

 if (VAR_4 == 0 || VAR_5 == 0)
  return -VAR_1;







 if (VAR_4 > (VAR_5 * VAR_0))
  return -VAR_2;

 VAR_7 = 1 << VAR_3;
 *VAR_6 = FUNC_0(VAR_7, VAR_4, VAR_5);

 return 0;
}
