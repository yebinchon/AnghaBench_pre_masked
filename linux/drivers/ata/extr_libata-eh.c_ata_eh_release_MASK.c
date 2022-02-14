
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {int eh_mutex; int * eh_owner; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ata_port *VAR_1)
{
 FUNC_0(VAR_1->host->eh_owner != VAR_0);
 VAR_1->host->eh_owner = ((void*)0);
 FUNC_1(&VAR_1->host->eh_mutex);
}
