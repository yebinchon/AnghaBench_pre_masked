
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cdrom_info {struct atapi_toc* toc; } ;
struct atapi_toc_entry {int dummy; } ;
struct TYPE_4__ {int last_track; int first_track; } ;
struct atapi_toc {TYPE_1__ hdr; struct atapi_toc_entry* ent; } ;
struct TYPE_5__ {int atapi_flags; struct cdrom_info* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(ide_drive_t *VAR_3, int VAR_4,
    struct atapi_toc_entry **VAR_5)
{
 struct cdrom_info *VAR_6 = VAR_3->driver_data;
 struct atapi_toc *VAR_7 = VAR_6->toc;
 int VAR_8;




 if ((VAR_3->atapi_flags & VAR_2) == 0)
  return -VAR_1;


 VAR_8 = VAR_7->hdr.last_track - VAR_7->hdr.first_track + 1;

 if (VAR_7->hdr.first_track == VAR_0)
  VAR_8 = 0;

 if (VAR_4 == VAR_0)
  *VAR_5 = &VAR_7->ent[VAR_8];
 else if (VAR_4 < VAR_7->hdr.first_track || VAR_4 > VAR_7->hdr.last_track)
  return -VAR_1;
 else
  *VAR_5 = &VAR_7->ent[VAR_4 - VAR_7->hdr.first_track];

 return 0;
}
