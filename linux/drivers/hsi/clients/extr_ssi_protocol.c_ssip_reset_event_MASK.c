
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssi_protocol {TYPE_1__* cl; } ;
struct hsi_client {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int *,char*) ;
 struct ssi_protocol* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct hsi_client *VAR_0)
{
 struct ssi_protocol *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->cl->device, "CMT reset detected!\n");
 FUNC_2(VAR_1->cl);
}
