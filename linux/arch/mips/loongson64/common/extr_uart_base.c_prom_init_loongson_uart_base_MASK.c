
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int * VAR_4 ;
 int VAR_5 ;

void FUNC_1(void)
{
 switch (VAR_5) {
 case 128:

  VAR_4[0] = VAR_2 + 0x1e0;
  break;
 case 134:
  VAR_4[0] = VAR_1 + 0x3f8;
  break;
 case 133:
 case 132:
  VAR_4[0] = VAR_1 + 0x2f8;
  break;
 case 131:
 case 129:
 case 135:
 case 130:
 default:

  VAR_4[0] = VAR_0 + 0x3f8;
  break;
 }

 VAR_3[0] =
  (unsigned long)FUNC_0(VAR_4[0], 8);
}
