
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mdev; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_4__ {int * media_bay; } ;



__attribute__((used)) static int FUNC_0(pmac_ide_hwif_t *VAR_0)
{
 return VAR_0->mdev && VAR_0->mdev->media_bay != ((void*)0);
}
