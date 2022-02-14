
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctype; } ;
typedef TYPE_1__ ctype_node_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_1(ctype_node_t *VAR_17)
{
 switch (VAR_16) {
 case 129:
  VAR_17->ctype |= (VAR_14 | VAR_5 | VAR_9 | VAR_11);
  break;
 case 136:
  VAR_17->ctype |= (VAR_10 | VAR_5 | VAR_9 | VAR_11);
  break;
 case 143:
  VAR_17->ctype |= (VAR_5 | VAR_9 | VAR_11);
  break;
 case 140:
  VAR_17->ctype |= (VAR_8 | VAR_9 | VAR_11 | VAR_15 | VAR_3);
  break;
 case 131:






  VAR_17->ctype |= (VAR_13 | VAR_11);
  break;
 case 141:
  VAR_17->ctype |= VAR_7;
  break;
 case 138:
  VAR_17->ctype |= (VAR_9 | VAR_11);
  break;
 case 133:
  VAR_17->ctype |= VAR_11;
  break;
 case 132:
  VAR_17->ctype |= (VAR_12 | VAR_9 | VAR_11);
  break;
 case 128:
  VAR_17->ctype |= (VAR_15 | VAR_11);
  break;
 case 142:
  VAR_17->ctype |= (VAR_6 | VAR_13);
  break;
 case 134:
  VAR_17->ctype |= (VAR_0 | VAR_11 | VAR_9);
  break;
 case 137:
  VAR_17->ctype |= (VAR_1 | VAR_11 | VAR_9);
  break;
 case 139:
  VAR_17->ctype |= (VAR_2 | VAR_11 | VAR_9);
  break;
 case 135:
  VAR_17->ctype |= (VAR_3 | VAR_11 | VAR_9);
  break;
 case 130:
  VAR_17->ctype |= (VAR_4 | VAR_11 | VAR_9);
  break;
 case 144:




  break;
 default:
  FUNC_0("not a valid character class");
 }
}
