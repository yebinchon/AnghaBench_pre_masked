
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;


__attribute__((used)) static inline unsigned int FUNC_0(unsigned int VAR_2, int VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_2 | VAR_4;

 switch (VAR_3) {
 default:
  VAR_5 |= VAR_0 | VAR_3;
  break;
 case 128:
  VAR_5 |= VAR_1;
  break;
 }
 return VAR_5;
}
