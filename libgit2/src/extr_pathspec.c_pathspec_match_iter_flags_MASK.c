
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int git_iterator_flag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static git_iterator_flag_t FUNC_0(uint32_t VAR_4)
{
 git_iterator_flag_t VAR_5 = 0;

 if ((VAR_4 & VAR_2) != 0)
  VAR_5 |= VAR_1;
 else if ((VAR_4 & VAR_3) != 0)
  VAR_5 |= VAR_0;

 return VAR_5;
}
