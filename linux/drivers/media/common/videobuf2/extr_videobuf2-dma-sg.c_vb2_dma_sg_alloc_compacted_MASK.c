
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dma_sg_buf {unsigned long size; struct page** pages; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct page*,int) ;

__attribute__((used)) static int FUNC_4(struct vb2_dma_sg_buf *VAR_5,
  gfp_t VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned long VAR_8 = VAR_5->size;

 while (VAR_8 > 0) {
  struct page *VAR_9;
  int VAR_10;
  int VAR_11;

  VAR_10 = FUNC_2(VAR_8);

  if ((VAR_2 << VAR_10) > VAR_8)
   VAR_10--;

  VAR_9 = ((void*)0);
  while (!VAR_9) {
   VAR_9 = FUNC_1(VAR_1 | VAR_4 |
     VAR_3 | VAR_6, VAR_10);
   if (VAR_9)
    break;

   if (VAR_10 == 0) {
    while (VAR_7--)
     FUNC_0(VAR_5->pages[VAR_7]);
    return -VAR_0;
   }
   VAR_10--;
  }

  FUNC_3(VAR_9, VAR_10);
  for (VAR_11 = 0; VAR_11 < (1 << VAR_10); VAR_11++)
   VAR_5->pages[VAR_7++] = &VAR_9[VAR_11];

  VAR_8 -= VAR_2 << VAR_10;
 }

 return 0;
}
