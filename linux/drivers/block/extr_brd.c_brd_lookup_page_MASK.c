
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct brd_device {int brd_pages; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct page* FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct page *FUNC_4(struct brd_device *VAR_1, sector_t VAR_2)
{
 pgoff_t VAR_3;
 struct page *VAR_4;
 FUNC_2();
 VAR_3 = VAR_2 >> VAR_0;
 VAR_4 = FUNC_1(&VAR_1->brd_pages, VAR_3);
 FUNC_3();

 FUNC_0(VAR_4 && VAR_4->index != VAR_3);

 return VAR_4;
}
