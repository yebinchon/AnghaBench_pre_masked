
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_4 & VAR_3;

 VAR_4 &= ~VAR_3;





 if (VAR_5 & (VAR_1 | VAR_2))
  VAR_4 |= VAR_1;
 else
  VAR_4 |= VAR_0;

 return VAR_4;
}
