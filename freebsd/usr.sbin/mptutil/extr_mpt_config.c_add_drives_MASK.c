
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct volume_info {int drive_count; struct drive_info* drives; } ;
struct drive_info {int * info; TYPE_1__* sdisk; } ;
typedef int U8 ;
struct TYPE_2__ {char* devname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*,int*) ;
 int * FUNC_1 (int,int,int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_1, struct volume_info *VAR_2, int VAR_3)
{
 struct drive_info *VAR_4;
 U8 VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0, VAR_4 = VAR_2->drives; VAR_7 < VAR_2->drive_count;
      VAR_7++, VAR_4++) {
  if (VAR_4->info == ((void*)0)) {
   if (FUNC_0(VAR_1, VAR_4->sdisk,
       &VAR_5) < 0) {
    VAR_6 = VAR_0;
    FUNC_3(
       "Failed to create physical disk page for %s",
        VAR_4->sdisk->devname);
    return (VAR_6);
   }
   if (VAR_3)
    FUNC_2("Added drive %s with PhysDiskNum %u\n",
        VAR_4->sdisk->devname, VAR_5);

   VAR_4->info = FUNC_1(VAR_1, VAR_5, ((void*)0));
   if (VAR_4->info == ((void*)0))
    return (VAR_0);
  }
 }
 return (0);
}
