
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int msurface_t ;
struct TYPE_5__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_7__ {int ** (* Hunk_Alloc ) (int,int ) ;int (* Error ) (int ,char*,int ) ;} ;
struct TYPE_6__ {int nummarksurfaces; int * surfaces; int ** marksurfaces; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 int ** FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3 (lump_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int *VAR_9;
 msurface_t **VAR_10;

 VAR_9 = (void *)(VAR_1 + VAR_5->fileofs);
 if (VAR_5->filelen % sizeof(*VAR_9))
  VAR_3.Error (VAR_0, "LoadMap: funny lump size in %s",VAR_4.name);
 VAR_8 = VAR_5->filelen / sizeof(*VAR_9);
 VAR_10 = VAR_3.Hunk_Alloc ( VAR_8*sizeof(*VAR_10), VAR_2);

 VAR_4.marksurfaces = VAR_10;
 VAR_4.nummarksurfaces = VAR_8;

 for ( VAR_6=0 ; VAR_6<VAR_8 ; VAR_6++)
 {
  VAR_7 = FUNC_0(VAR_9[VAR_6]);
  VAR_10[VAR_6] = VAR_4.surfaces + VAR_7;
 }
}
