
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int file_pages; scalar_t__ file; int filemap; } ;
struct bitmap {scalar_t__ allclean; TYPE_1__ storage; } ;


 int VAR_0 ;
 int FUNC_0 (struct bitmap*,int,int ) ;

void FUNC_1(struct bitmap *VAR_1)
{



 int VAR_2;

 if (!VAR_1 || !VAR_1->storage.filemap)
  return;
 if (VAR_1->storage.file)

  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->storage.file_pages; VAR_2++)
  FUNC_0(VAR_1, VAR_2,
         VAR_0);
 VAR_1->allclean = 0;
}
