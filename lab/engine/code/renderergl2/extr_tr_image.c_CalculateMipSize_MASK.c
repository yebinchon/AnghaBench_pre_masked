
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* Printf ) (int ,char*,int) ;} ;
typedef int GLenum ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, GLenum VAR_4)
{
 int VAR_5 = ((VAR_2 + 3) / 4) * ((VAR_3 + 3) / 4);
 int VAR_6 = VAR_2 * VAR_3;

 switch (VAR_4)
 {
  case 139:
  case 131:
  case 144:
  case 134:
  case 146:
  case 137:
   return VAR_5 * 8;

  case 143:
  case 133:
  case 142:
  case 132:
  case 138:
  case 136:
  case 140:
  case 141:
  case 145:
  case 135:
   return VAR_5 * 16;

  case 129:
  case 128:
   return VAR_6 * 4;

  case 130:
   return VAR_6 * 8;

  default:
   VAR_1.Printf(VAR_0, "Unsupported texture format %08x\n", VAR_4);
   return 0;
 }

 return 0;
}
