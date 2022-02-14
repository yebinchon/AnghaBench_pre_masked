
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb153_cf_info {int irq; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct rb153_cf_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct ata_port *VAR_2)
{
 struct rb153_cf_info *VAR_3 = VAR_2->host->private_data;



 FUNC_0(VAR_2);
 FUNC_2(VAR_1);

 FUNC_1(VAR_3->irq, VAR_0);
}
