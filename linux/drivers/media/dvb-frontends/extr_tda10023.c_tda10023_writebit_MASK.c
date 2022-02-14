
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda10023_state {int dummy; } ;


 int FUNC_0 (struct tda10023_state*,int) ;
 int FUNC_1 (struct tda10023_state*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct tda10023_state* VAR_0, u8 VAR_1, u8 VAR_2,u8 VAR_3)
{
 if (VAR_2==0xff)
  return FUNC_1(VAR_0, VAR_1, VAR_3);
 else {
  u8 VAR_4;
  VAR_4=FUNC_0(VAR_0,VAR_1);
  VAR_4&=~VAR_2;
  VAR_4|=(VAR_3&VAR_2);
  return FUNC_1(VAR_0, VAR_1, VAR_4);
 }
}
