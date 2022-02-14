
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct au8522_state {int vid_input; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct au8522_state*,int ) ;
 int FUNC_1 (struct au8522_state*,int ) ;
 int FUNC_2 (struct au8522_state*,int ) ;
 int FUNC_3 (struct au8522_state*,int,int) ;

__attribute__((used)) static void FUNC_4(struct au8522_state *VAR_7)
{
 u8 VAR_8;

 FUNC_3(VAR_7, 0xa4, 1 << 5);

 switch (VAR_7->vid_input) {
 case 134:
  VAR_8 = VAR_0;
  FUNC_0(VAR_7, VAR_8);
  break;
 case 133:
  VAR_8 = VAR_1;
  FUNC_0(VAR_7, VAR_8);
  break;
 case 132:
  VAR_8 = VAR_2;
  FUNC_0(VAR_7, VAR_8);
  break;
 case 131:
  VAR_8 = VAR_3;
  FUNC_0(VAR_7, VAR_8);
  break;
 case 129:
  VAR_8 = VAR_5;
  FUNC_2(VAR_7, VAR_8);
  break;
 case 128:
  VAR_8 = VAR_6;
  FUNC_2(VAR_7, VAR_8);
  break;
 default:
 case 130:
  VAR_8 = VAR_4;
  FUNC_1(VAR_7, VAR_8);
  break;
 }
}
