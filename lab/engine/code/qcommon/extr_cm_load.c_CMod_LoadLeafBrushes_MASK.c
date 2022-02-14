
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_5__ {int* leafbrushes; int numLeafBrushes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_3 (lump_t *VAR_5)
{
 int VAR_6;
 int *VAR_7;
 int *VAR_8;
 int VAR_9;

 VAR_8 = (void *)(VAR_3 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_8))
  FUNC_0 (VAR_1, "MOD_LoadBmodel: funny lump size");
 VAR_9 = VAR_5->filelen / sizeof(*VAR_8);

 VAR_2.leafbrushes = FUNC_1( (VAR_9 + VAR_0) * sizeof( *VAR_2.leafbrushes ), VAR_4 );
 VAR_2.numLeafBrushes = VAR_9;

 VAR_7 = VAR_2.leafbrushes;

 for ( VAR_6=0 ; VAR_6<VAR_9 ; VAR_6++, VAR_8++, VAR_7++) {
  *VAR_7 = FUNC_2 (*VAR_8);
 }
}
