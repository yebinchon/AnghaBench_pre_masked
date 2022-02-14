
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssif_info {int addr_info; TYPE_1__* client; int addr_source; } ;
struct ipmi_smi_info {int * dev; int addr_info; int addr_src; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct ipmi_smi_info *VAR_1)
{
 struct ssif_info *VAR_2 = VAR_0;

 VAR_1->addr_src = VAR_2->addr_source;
 VAR_1->dev = &VAR_2->client->dev;
 VAR_1->addr_info = VAR_2->addr_info;
 FUNC_0(VAR_1->dev);

 return 0;
}
