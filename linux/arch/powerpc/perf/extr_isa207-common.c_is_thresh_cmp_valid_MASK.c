
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static bool FUNC_0(u64 VAR_2)
{
 unsigned int VAR_3, VAR_4;





 VAR_3 = (VAR_2 >> VAR_1) & VAR_0;
 VAR_4 = VAR_3 >> 7;

 if (VAR_4 && (VAR_3 & 0x60) == 0)
  return 0;

 return 1;
}
