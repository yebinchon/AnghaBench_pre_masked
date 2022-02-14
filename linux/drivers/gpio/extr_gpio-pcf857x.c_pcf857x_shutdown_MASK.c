
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ngpio; } ;
struct pcf857x {TYPE_1__ chip; int client; int (* write ) (int ,scalar_t__) ;} ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct pcf857x* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_0)
{
 struct pcf857x *VAR_1 = FUNC_1(VAR_0);


 VAR_1->write(VAR_1->client, FUNC_0(VAR_1->chip.ngpio) - 1);
}
