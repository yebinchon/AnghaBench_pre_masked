
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct file {int dummy; } ;
struct bitmap_storage {int file_pages; struct page** filemap_attr; struct page* sb_page; struct page** filemap; struct file* file; } ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct page**) ;

__attribute__((used)) static void FUNC_5(struct bitmap_storage *VAR_0)
{
 struct page **VAR_1, *VAR_2;
 int VAR_3;
 struct file *VAR_4;

 VAR_4 = VAR_0->file;
 VAR_1 = VAR_0->filemap;
 VAR_3 = VAR_0->file_pages;
 VAR_2 = VAR_0->sb_page;

 while (VAR_3--)
  if (VAR_1[VAR_3] != VAR_2)
   FUNC_2(VAR_1[VAR_3]);
 FUNC_4(VAR_1);
 FUNC_4(VAR_0->filemap_attr);

 if (VAR_2)
  FUNC_2(VAR_2);

 if (VAR_4) {
  struct inode *VAR_5 = FUNC_0(VAR_4);
  FUNC_3(VAR_5->i_mapping, 0, -1);
  FUNC_1(VAR_4);
 }
}
