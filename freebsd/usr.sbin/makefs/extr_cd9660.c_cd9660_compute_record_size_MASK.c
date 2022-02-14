
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rock_ridge_enabled; } ;
typedef TYPE_2__ iso9660_disk ;
struct TYPE_8__ {scalar_t__ su_tail_size; scalar_t__ susp_entry_size; TYPE_1__* isoDirRecord; } ;
typedef TYPE_3__ cd9660node ;
struct TYPE_6__ {int* length; } ;


 int FUNC_0 (int) ;

int
FUNC_1(iso9660_disk *VAR_0, cd9660node *VAR_1)
{
 int VAR_2 = VAR_1->isoDirRecord->length[0];

 if (VAR_0->rock_ridge_enabled)
  VAR_2 += VAR_1->susp_entry_size;
 VAR_2 += VAR_1->su_tail_size;
 VAR_2 += VAR_2 & 1;
 FUNC_0(VAR_2 <= 254);
 return VAR_2;
}
