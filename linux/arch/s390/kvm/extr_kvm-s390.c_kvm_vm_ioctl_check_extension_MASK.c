
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {int has_64bscao; int has_esca; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int) ;

int FUNC_3(struct kvm *VAR_8, long VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 138:
 case 145:
 case 130:



 case 161:
 case 129:
 case 152:
 case 159:
 case 146:
 case 157:
 case 160:
 case 141:
 case 128:
 case 154:
 case 158:
 case 142:
 case 133:
 case 132:
 case 136:
 case 140:
 case 134:
 case 148:
 case 151:
 case 150:
  VAR_10 = 1;
  break;
 case 143:
  VAR_10 = 0;
  if (VAR_6 && !FUNC_0(VAR_8))
   VAR_10 = 1;
  break;
 case 139:
  VAR_10 = VAR_5;
  break;
 case 153:
 case 156:
 case 155:
  VAR_10 = VAR_1;
  if (!FUNC_1())
   VAR_10 = VAR_0;
  else if (VAR_7.has_esca && VAR_7.has_64bscao)
   VAR_10 = VAR_2;
  break;
 case 147:
  VAR_10 = VAR_3;
  break;
 case 131:
  VAR_10 = VAR_4;
  break;
 case 137:
  VAR_10 = FUNC_2(64);
  break;
 case 144:
  VAR_10 = FUNC_2(133);
  break;
 case 149:
  VAR_10 = FUNC_2(82);
  break;
 default:
  VAR_10 = 0;
 }
 return VAR_10;
}
