
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum generic_id { ____Placeholder_generic_id } generic_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int) ;

__attribute__((used)) static enum generic_id FUNC_1(uint32_t VAR_4)
{
 uint32_t VAR_5 = FUNC_0(VAR_4);

 enum generic_id VAR_6;

 switch (VAR_5) {
 case 129:
  VAR_6 = VAR_1;
  break;
 case 130:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  VAR_6 = VAR_3;
  break;
 }

 return VAR_6;
}
