
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct bitmap_storage {int file_pages; unsigned long bytes; int filemap_attr; TYPE_1__** filemap; TYPE_1__* sb_page; } ;
typedef int bitmap_super_t ;
struct TYPE_2__ {int index; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 TYPE_1__** FUNC_2 (unsigned long,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct bitmap_storage *VAR_4,
       unsigned long VAR_5, int VAR_6,
       int VAR_7)
{
 int VAR_8, VAR_9 = 0;
 unsigned long VAR_10;
 unsigned long VAR_11;

 VAR_11 = FUNC_0(VAR_5, 8);
 if (VAR_6)
  VAR_11 += sizeof(bitmap_super_t);

 VAR_10 = FUNC_0(VAR_11, VAR_2);
 VAR_9 = VAR_7 * VAR_10;

 VAR_4->filemap = FUNC_2(VAR_10, sizeof(struct page *),
           VAR_1);
 if (!VAR_4->filemap)
  return -VAR_0;

 if (VAR_6 && !VAR_4->sb_page) {
  VAR_4->sb_page = FUNC_1(VAR_1|VAR_3);
  if (VAR_4->sb_page == ((void*)0))
   return -VAR_0;
 }

 VAR_8 = 0;
 if (VAR_4->sb_page) {
  VAR_4->filemap[0] = VAR_4->sb_page;
  VAR_8 = 1;
  VAR_4->sb_page->index = VAR_9;
 }

 for ( ; VAR_8 < VAR_10; VAR_8++) {
  VAR_4->filemap[VAR_8] = FUNC_1(VAR_1|VAR_3);
  if (!VAR_4->filemap[VAR_8]) {
   VAR_4->file_pages = VAR_8;
   return -VAR_0;
  }
  VAR_4->filemap[VAR_8]->index = VAR_8 + VAR_9;
 }
 VAR_4->file_pages = VAR_8;



 VAR_4->filemap_attr = FUNC_3(
  FUNC_4(FUNC_0(VAR_10*4, 8), sizeof(unsigned long)),
  VAR_1);
 if (!VAR_4->filemap_attr)
  return -VAR_0;

 VAR_4->bytes = VAR_11;

 return 0;
}
