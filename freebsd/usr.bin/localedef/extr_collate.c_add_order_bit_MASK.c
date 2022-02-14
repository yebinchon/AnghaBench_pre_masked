
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t directive_count; int * directive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 TYPE_1__ VAR_5 ;

void
FUNC_0(int VAR_6)
{
 uint8_t VAR_7 = VAR_3;

 switch (VAR_6) {
 case 129:
  VAR_7 = VAR_1;
  break;
 case 130:
  VAR_7 = VAR_0;
  break;
 case 128:
  VAR_7 = VAR_2;
  break;
 default:
  VAR_4;
  break;
 }
 VAR_5.directive[VAR_5.directive_count] |= VAR_7;
}
