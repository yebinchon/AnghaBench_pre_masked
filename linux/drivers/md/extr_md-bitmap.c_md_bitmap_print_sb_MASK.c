
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sb_page; } ;
struct bitmap {TYPE_1__ storage; } ;
struct TYPE_6__ {int write_behind; int sync_size; int daemon_sleep; int chunksize; int state; int events_cleared; int events; scalar_t__ uuid; int version; int magic; } ;
typedef TYPE_2__ bitmap_super_t ;
typedef int __le32 ;


 unsigned long long FUNC_0 (struct bitmap*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned long long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,unsigned long long,...) ;

void FUNC_6(struct bitmap *VAR_0)
{
 bitmap_super_t *VAR_1;

 if (!VAR_0 || !VAR_0->storage.sb_page)
  return;
 VAR_1 = FUNC_1(VAR_0->storage.sb_page);
 FUNC_5("%s: bitmap file superblock:\n", FUNC_0(VAR_0));
 FUNC_5("         magic: %08x\n", FUNC_3(VAR_1->magic));
 FUNC_5("       version: %d\n", FUNC_3(VAR_1->version));
 FUNC_5("          uuid: %08x.%08x.%08x.%08x\n",
   FUNC_3(*(__le32 *)(VAR_1->uuid+0)),
   FUNC_3(*(__le32 *)(VAR_1->uuid+4)),
   FUNC_3(*(__le32 *)(VAR_1->uuid+8)),
   FUNC_3(*(__le32 *)(VAR_1->uuid+12)));
 FUNC_5("        events: %llu\n",
   (unsigned long long) FUNC_4(VAR_1->events));
 FUNC_5("events cleared: %llu\n",
   (unsigned long long) FUNC_4(VAR_1->events_cleared));
 FUNC_5("         state: %08x\n", FUNC_3(VAR_1->state));
 FUNC_5("     chunksize: %d B\n", FUNC_3(VAR_1->chunksize));
 FUNC_5("  daemon sleep: %ds\n", FUNC_3(VAR_1->daemon_sleep));
 FUNC_5("     sync size: %llu KB\n",
   (unsigned long long)FUNC_4(VAR_1->sync_size)/2);
 FUNC_5("max write behind: %d\n", FUNC_3(VAR_1->write_behind));
 FUNC_2(VAR_1);
}
