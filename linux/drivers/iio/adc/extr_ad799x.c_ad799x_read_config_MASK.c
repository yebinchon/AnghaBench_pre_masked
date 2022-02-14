
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad799x_state {int id; int config; int client; } ;


 int VAR_0 ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ad799x_state *VAR_1)
{
 switch (VAR_1->id) {
 case 129:
 case 128:
  return FUNC_1(VAR_1->client, VAR_0);
 case 132:
 case 131:
 case 130:
  return FUNC_0(VAR_1->client, VAR_0);
 default:

  return VAR_1->config;
 }
}
