
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s6sy761_data {int regulators; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct s6sy761_data *VAR_1 = VAR_0;

 FUNC_1(VAR_1->client->irq);
 FUNC_2(FUNC_0(VAR_1->regulators),
      VAR_1->regulators);
}
