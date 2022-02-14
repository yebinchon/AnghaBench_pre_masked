
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct mac_lomac {int dummy; } ;
 struct mac_lomac* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_1, int VAR_2)
{
 struct mac_lomac *VAR_3;
 int VAR_4;

 if (!VAR_0)
  return (0);




 switch (VAR_2) {
 case 185:
 case 182:





 case 205:
 case 204:
 case 203:




 case 194:
 case 201:
 case 200:
 case 202:
 case 199:
 case 195:
 case 198:
 case 196:
 case 197:




 case 169:
 case 168:
  break;





 case 193:
 case 192:
 case 191:




 case 186:





 case 184:





 case 178:
 case 177:
 case 176:




 case 188:
 case 187:
 case 190:
 case 189:
 case 183:






 case 175:
 case 170:
 case 174:
 case 171:
 case 173:
 case 172:




 case 167:




 case 166:
 case 165:





 case 164:





 case 163:
 case 162:
 case 161:
 case 159:
 case 160:





 case 139:
 case 133:
 case 158:
 case 153:
 case 145:
 case 157:
 case 156:
 case 155:
 case 138:
 case 154:
 case 152:
 case 151:
 case 150:
 case 149:
 case 148:
 case 147:
 case 146:
 case 144:
 case 142:
 case 141:
 case 140:
 case 143:
 case 137:
 case 136:
 case 135:
 case 134:





 case 132:
 case 131:
 case 130:
 case 129:
 case 128:





 case 180:
 case 181:
 case 179:
  break;





 default:
  VAR_3 = FUNC_0(VAR_1->cr_label);
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   return (VAR_4);
 }
 return (0);
}
