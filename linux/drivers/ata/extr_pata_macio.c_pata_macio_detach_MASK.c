
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pata_macio_priv {TYPE_2__* mdev; TYPE_1__* host; } ;
struct macio_dev {int dummy; } ;
struct ata_host {struct pata_macio_priv* private_data; } ;
struct TYPE_4__ {int media_bay; } ;
struct TYPE_3__ {int * private_data; } ;


 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (int ) ;
 struct ata_host* FUNC_2 (struct macio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct macio_dev *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_2(VAR_0);
 struct pata_macio_priv *VAR_2 = VAR_1->private_data;

 FUNC_1(VAR_2->mdev->media_bay);




 VAR_2->host->private_data = ((void*)0);

 FUNC_0(VAR_1);

 FUNC_3(VAR_2->mdev->media_bay);

 return 0;
}
