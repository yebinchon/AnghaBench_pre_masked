
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int dev; } ;
struct ata_host {int dummy; } ;


 int FUNC_0 (struct ata_host*) ;
 struct ata_host* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct zorro_dev *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1);
}
