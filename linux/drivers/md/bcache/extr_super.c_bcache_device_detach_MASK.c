
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uuid_entry {int invalidated; int uuid; } ;
struct bcache_device {int id; TYPE_1__* c; int flags; } ;
struct TYPE_2__ {int caching; int ** devices; struct uuid_entry* uuids; int attached_dev_nr; } ;


 int VAR_0 ;
 int FUNC_0 (struct uuid_entry*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bcache_device*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct bcache_device *VAR_3)
{
 FUNC_7(&VAR_1);

 FUNC_1(&VAR_3->c->attached_dev_nr);

 if (FUNC_9(VAR_0, &VAR_3->flags)) {
  struct uuid_entry *VAR_4 = VAR_3->c->uuids + VAR_3->id;

  FUNC_0(VAR_4, 0);
  FUNC_8(VAR_4->uuid, VAR_2, 16);
  VAR_4->invalidated = FUNC_5((u32)FUNC_6());
  FUNC_3(VAR_3->c);
 }

 FUNC_2(VAR_3);

 VAR_3->c->devices[VAR_3->id] = ((void*)0);
 FUNC_4(&VAR_3->c->caching);
 VAR_3->c = ((void*)0);
}
