
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fpn {int dummy; } ;
struct fpemu {int fe_cx; int fe_f2; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fpn* FUNC_0 (struct fpemu*) ;
 int FUNC_1 (struct fpemu*,int ) ;
 struct fpn* FUNC_2 (struct fpemu*) ;
 struct fpn* FUNC_3 (struct fpemu*) ;
 struct fpn* FUNC_4 (struct fpemu*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct fpemu*,int *,int*,int) ;

__attribute__((used)) static int
FUNC_7(uint32_t VAR_6, struct fpemu *VAR_7,
    struct fpn **VAR_8, uint32_t *VAR_9)
{
 switch (VAR_6 & VAR_5) {
 case 141:
 case 130:
 case 129:

  break;
 case 133:
  VAR_7->fe_cx &= ~VAR_3;
  VAR_7->fe_cx |= VAR_4;
 case 134:
  FUNC_6(VAR_7, &VAR_7->fe_f2, VAR_9, 0);
  return (-1);
 case 135:
  VAR_7->fe_cx &= ~VAR_3;
  VAR_7->fe_cx |= VAR_4;
 case 136:
  FUNC_6(VAR_7, &VAR_7->fe_f2, VAR_9, 1);
  return (-1);
 case 140:
  *VAR_8 = FUNC_0(VAR_7);
  break;
 case 128:
  *VAR_8 = FUNC_4(VAR_7);
  break;
 case 131:
  *VAR_8 = FUNC_3(VAR_7);
  break;
 case 132:
  *VAR_8 = FUNC_2(VAR_7);
  break;
 case 138:
  FUNC_1(VAR_7, 0);
  if (VAR_7->fe_cx & VAR_1)
   return (1);
  return (0);
 case 137:
  FUNC_1(VAR_7, 0);
  if (VAR_7->fe_cx & VAR_2)
   return (1);
  return (0);
 case 139:
  FUNC_1(VAR_7, 0);
  if (VAR_7->fe_cx & VAR_0)
   return (1);
  return (0);
 default:
  FUNC_5("Unknown instruction %x\n", VAR_6);
 }

 return (-1);
}
