
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb153_cf_info {int frozen; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct rb153_cf_info* private_data; } ;



__attribute__((used)) static void FUNC_0(struct ata_port *VAR_0)
{
 struct rb153_cf_info *VAR_1 = VAR_0->host->private_data;

 VAR_1->frozen = 1;
}
