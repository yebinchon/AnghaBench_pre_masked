
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx22702_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct cx22702_state*,int) ;
 int FUNC_1 (struct cx22702_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cx22702_state *VAR_2, int VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0x0C);
 switch (VAR_3) {
 case 130:
  return -VAR_1;
 case 128:
  VAR_4 |= 0x01;
  break;
 case 129:
  VAR_4 &= 0xfe;
  break;
 default:
  return -VAR_0;
 }
 return FUNC_1(VAR_2, 0x0C, VAR_4);
}
