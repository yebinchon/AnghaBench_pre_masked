
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct arasan_cf_dev {int dwork; int work; } ;
struct TYPE_2__ {struct arasan_cf_dev* private_data; } ;


 void FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0)
{
 struct arasan_cf_dev *VAR_1 = VAR_0->host->private_data;






 FUNC_2(&VAR_1->work);
 FUNC_1(&VAR_1->dwork);
 return FUNC_0(VAR_0);
}
