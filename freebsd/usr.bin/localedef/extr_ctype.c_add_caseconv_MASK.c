
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int toupper; int tolower; } ;
typedef TYPE_1__ ctype_node_t ;


 int VAR_0 ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;

void
FUNC_1(int VAR_2, int VAR_3)
{
 ctype_node_t *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0)) {
  VAR_0;
  return;
 }

 switch (VAR_1) {
 case 128:
  VAR_4->toupper = VAR_3;
  break;
 case 129:
  VAR_4->tolower = VAR_3;
  break;
 default:
  VAR_0;
  break;
 }
}
