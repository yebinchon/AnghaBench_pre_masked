
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nxt6000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct nxt6000_state *VAR_3, u32 VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 switch (VAR_4) {
 case 6000000:
  VAR_5 = 0x55B7;
  break;

 case 7000000:
  VAR_5 = 0x6400;
  break;

 case 8000000:
  VAR_5 = 0x7249;
  break;

 default:
  return -VAR_0;
 }

 if ((VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_5 & 0xFF)) < 0)
  return VAR_6;

 return FUNC_0(VAR_3, VAR_2, (VAR_5 >> 8) & 0xFF);
}
