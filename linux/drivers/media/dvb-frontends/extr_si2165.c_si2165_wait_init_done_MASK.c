
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct si2165_state {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct si2165_state*,int ,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct si2165_state *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
  VAR_3 = FUNC_1(VAR_2, VAR_1, &VAR_4);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_4 == 0x01)
   return 0;
  FUNC_2(1000, 50000);
 }
 FUNC_0(&VAR_2->client->dev, "init_done was not set\n");
 return -VAR_0;
}
