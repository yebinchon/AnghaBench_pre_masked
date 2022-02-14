
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct bitmap_counts {int pages; int missing_pages; } ;
struct TYPE_6__ {scalar_t__ file; } ;
struct bitmap {TYPE_3__ storage; TYPE_2__* mddev; struct bitmap_counts counts; } ;
struct TYPE_4__ {int chunksize; } ;
struct TYPE_5__ {TYPE_1__ bitmap_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,scalar_t__,char*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

void FUNC_2(struct seq_file *VAR_1, struct bitmap *VAR_2)
{
 unsigned long VAR_3;
 struct bitmap_counts *VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = &VAR_2->counts;

 VAR_3 = VAR_2->mddev->bitmap_info.chunksize >> 10;
 FUNC_1(VAR_1, "bitmap: %lu/%lu pages [%luKB], "
     "%lu%s chunk",
     VAR_4->pages - VAR_4->missing_pages,
     VAR_4->pages,
     (VAR_4->pages - VAR_4->missing_pages)
     << (VAR_0 - 10),
     VAR_3 ? VAR_3 : VAR_2->mddev->bitmap_info.chunksize,
     VAR_3 ? "KB" : "B");
 if (VAR_2->storage.file) {
  FUNC_1(VAR_1, ", file: ");
  FUNC_0(VAR_1, VAR_2->storage.file, " \t\n");
 }

 FUNC_1(VAR_1, "\n");
}
