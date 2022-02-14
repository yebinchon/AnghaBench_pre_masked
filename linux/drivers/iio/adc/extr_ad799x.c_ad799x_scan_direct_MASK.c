
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct ad799x_state {int id; unsigned int config; int client; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ad799x_state *VAR_3, unsigned VAR_4)
{
 u8 VAR_5;

 switch (VAR_3->id) {
 case 135:
 case 131:
 case 128:
  VAR_5 = VAR_3->config | (FUNC_0(VAR_4) << VAR_1);
  break;
 case 134:
 case 133:
 case 132:
  VAR_5 = FUNC_0(VAR_4) << VAR_1;
  break;
 case 130:
 case 129:
  VAR_5 = (VAR_4 << VAR_1) | VAR_0;
  break;
 default:
  return -VAR_2;
 }

 return FUNC_1(VAR_3->client, VAR_5);
}
