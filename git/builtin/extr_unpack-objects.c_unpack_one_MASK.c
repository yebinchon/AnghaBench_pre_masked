
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_2__ {int offset; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 unsigned char* FUNC_2 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned long,unsigned int) ;
 int FUNC_4 (int,unsigned long,unsigned int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(unsigned VAR_4)
{
 unsigned VAR_5;
 unsigned char *VAR_6;
 unsigned long VAR_7, VAR_8;
 enum object_type VAR_9;

 VAR_2[VAR_4].offset = VAR_0;

 VAR_6 = FUNC_2(1);
 VAR_8 = *VAR_6;
 FUNC_5(1);
 VAR_9 = (VAR_8 >> 4) & 7;
 VAR_7 = (VAR_8 & 15);
 VAR_5 = 4;
 while (VAR_8 & 0x80) {
  VAR_6 = FUNC_2(1);
  VAR_8 = *VAR_6;
  FUNC_5(1);
  VAR_7 += (VAR_8 & 0x7f) << VAR_5;
  VAR_5 += 7;
 }

 switch (VAR_9) {
 case 132:
 case 128:
 case 133:
 case 129:
  FUNC_4(VAR_9, VAR_7, VAR_4);
  return;
 case 130:
 case 131:
  FUNC_3(VAR_9, VAR_7, VAR_4);
  return;
 default:
  FUNC_0("bad object type %d", VAR_9);
  VAR_1 = 1;
  if (VAR_3)
   return;
  FUNC_1(1);
 }
}
