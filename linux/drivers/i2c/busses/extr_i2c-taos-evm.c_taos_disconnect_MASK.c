
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taos_data {int adapter; int client; } ;
struct serio {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct taos_data*) ;
 int FUNC_4 (struct serio*) ;
 struct taos_data* FUNC_5 (struct serio*) ;

__attribute__((used)) static void FUNC_6(struct serio *VAR_0)
{
 struct taos_data *VAR_1 = FUNC_5(VAR_0);

 FUNC_2(VAR_1->client);
 FUNC_1(&VAR_1->adapter);
 FUNC_4(VAR_0);
 FUNC_3(VAR_1);

 FUNC_0(&VAR_0->dev, "Disconnected from TAOS EVM\n");
}
