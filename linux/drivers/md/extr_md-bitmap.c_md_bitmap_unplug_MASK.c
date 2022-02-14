
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long file_pages; int * filemap; } ;
struct bitmap {int flags; TYPE_2__ storage; TYPE_1__* mddev; } ;
struct TYPE_3__ {scalar_t__ queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (struct bitmap*,unsigned long,int ) ;
 int FUNC_2 (struct bitmap*) ;
 int FUNC_3 (struct bitmap*) ;
 int FUNC_4 (struct bitmap*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct bitmap*,int ,int ) ;

void FUNC_7(struct bitmap *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 0;

 if (!VAR_5 || !VAR_5->storage.filemap ||
     FUNC_5(VAR_3, &VAR_5->flags))
  return;



 for (VAR_6 = 0; VAR_6 < VAR_5->storage.file_pages; VAR_6++) {
  if (!VAR_5->storage.filemap)
   return;
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_0);
  VAR_8 = FUNC_4(VAR_5, VAR_6,
            VAR_1);
  if (VAR_7 || VAR_8) {
   if (!VAR_9) {
    FUNC_3(VAR_5);
    if (VAR_5->mddev->queue)
     FUNC_0(VAR_5->mddev->queue,
         "md bitmap_unplug");
   }
   FUNC_1(VAR_5, VAR_6, VAR_2);
   FUNC_6(VAR_5, VAR_5->storage.filemap[VAR_6], 0);
   VAR_9 = 1;
  }
 }
 if (VAR_9)
  FUNC_3(VAR_5);

 if (FUNC_5(VAR_4, &VAR_5->flags))
  FUNC_2(VAR_5);
}
