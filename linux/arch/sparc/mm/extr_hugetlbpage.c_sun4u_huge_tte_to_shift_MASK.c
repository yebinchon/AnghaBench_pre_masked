
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(pte_t VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_5) & VAR_4;
 unsigned int VAR_7;

 switch (VAR_6) {
 case 130:
  VAR_7 = VAR_0;
  break;
 case 129:
  VAR_7 = VAR_3;
  break;
 case 128:
  VAR_7 = VAR_1;
  break;
 default:
  VAR_7 = VAR_2;
  break;
 }
 return VAR_7;
}
