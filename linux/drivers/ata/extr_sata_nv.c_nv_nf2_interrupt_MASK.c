
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ata_host {int lock; TYPE_2__** ports; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ scr_addr; } ;
struct TYPE_4__ {TYPE_1__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ata_host*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct ata_host *VAR_3 = VAR_2;
 u8 VAR_4;
 irqreturn_t VAR_5;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3->ports[0]->ioaddr.scr_addr + VAR_0);
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 FUNC_3(&VAR_3->lock);

 return VAR_5;
}
