
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ad799x_state {int id; int config; int client; } ;


 int VAR_0 ;





 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ad799x_state *VAR_1, u16 VAR_2)
{
 switch (VAR_1->id) {
 case 129:
 case 128:
  return FUNC_1(VAR_1->client, VAR_0,
   VAR_2);
 case 132:
 case 131:
 case 130:
  return FUNC_0(VAR_1->client, VAR_0,
   VAR_2);
 default:

  VAR_1->config = VAR_2;
  return 0;
 }
}
