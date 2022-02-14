
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum object_type FUNC_0(uint32_t VAR_8)
{
 uint32_t VAR_9 = (VAR_8 & VAR_4)
    >> VAR_6;
 enum object_type VAR_10;

 switch (VAR_9) {
 case 129:
  VAR_10 = VAR_3;
  break;
 case 131:
  VAR_10 = VAR_1;
  break;
 case 132:
  VAR_10 = VAR_0;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 default:
  VAR_10 = VAR_7;
  break;
 }

 return VAR_10;
}
