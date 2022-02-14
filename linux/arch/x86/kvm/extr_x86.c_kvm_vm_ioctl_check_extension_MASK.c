
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {int (* has_emulated_msr ) (int ) ;int (* get_nested_state ) (int *,int *,int ) ;int * nested_enable_evmcs; int * enable_direct_tlbflush; int (* cpu_has_accelerated_tpr ) () ;} ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;

int FUNC_5(struct kvm *VAR_15, long VAR_16)
{
 int VAR_17 = 0;

 switch (VAR_16) {
 case 165:
 case 183:
 case 159:
 case 143:
 case 187:
 case 186:
 case 191:
 case 152:
 case 155:
 case 158:
 case 141:
 case 137:
 case 146:
 case 164:
 case 167:
 case 166:
 case 151:
 case 150:
 case 144:
 case 129:
 case 135:
 case 182:
 case 171:
 case 176:
 case 175:
 case 174:
 case 170:
 case 178:
 case 172:
 case 177:
 case 181:
 case 153:
 case 190:
 case 132:
 case 128:
 case 192:
 case 184:
 case 163:
 case 147:
 case 173:
 case 168:
 case 138:
 case 189:
 case 145:
  case 142:
 case 169:
 case 149:
 case 185:
 case 157:
 case 188:
  VAR_17 = 1;
  break;
 case 140:
  VAR_17 = VAR_5;
  break;
 case 193:
  VAR_17 = VAR_0;
  break;
 case 133:
  VAR_17 |= VAR_8 | VAR_10 |
        VAR_7;
  if(FUNC_1())
   VAR_17 |= VAR_9;
  break;
 case 131:
  VAR_17 = VAR_14->has_emulated_msr(VAR_11);
  break;
 case 136:
  VAR_17 = !VAR_14->cpu_has_accelerated_tpr();
  break;
 case 154:
  VAR_17 = VAR_4;
  break;
 case 162:
  VAR_17 = VAR_2;
  break;
 case 161:
  VAR_17 = VAR_3;
  break;
 case 148:
  VAR_17 = 0;
  break;
 case 160:
  VAR_17 = VAR_1;
  break;
 case 130:
  VAR_17 = FUNC_0(VAR_12);
  break;
 case 139:
  VAR_17 = VAR_13;
  break;
 case 134:
  VAR_17 = VAR_6;
  break;
 case 156:
  VAR_17 = VAR_14->get_nested_state ?
   VAR_14->get_nested_state(((void*)0), ((void*)0), 0) : 0;
  break;
 case 180:
  VAR_17 = VAR_14->enable_direct_tlbflush != ((void*)0);
  break;
 case 179:
  VAR_17 = VAR_14->nested_enable_evmcs != ((void*)0);
  break;
 default:
  break;
 }
 return VAR_17;

}
