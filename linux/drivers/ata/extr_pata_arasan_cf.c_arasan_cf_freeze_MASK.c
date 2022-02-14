
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct arasan_cf_dev {int dma_status; scalar_t__ vbase; } ;
struct TYPE_2__ {struct arasan_cf_dev* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct arasan_cf_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_3)
{
 struct arasan_cf_dev *VAR_4 = VAR_3->host->private_data;


 FUNC_4(FUNC_3(VAR_4->vbase + VAR_1) & ~VAR_2,
   VAR_4->vbase + VAR_1);
 FUNC_2(VAR_4);
 VAR_4->dma_status = VAR_0;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
