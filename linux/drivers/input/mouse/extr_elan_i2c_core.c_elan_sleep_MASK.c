
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elan_tp_data {int client; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sleep_control ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct elan_tp_data *VAR_1)
{
 int VAR_2 = VAR_0;
 int VAR_3;

 do {
  VAR_3 = VAR_1->ops->sleep_control(VAR_1->client, 1);
  if (!VAR_3)
   return 0;

  FUNC_0(30);
 } while (--VAR_2 > 0);

 return VAR_3;
}
