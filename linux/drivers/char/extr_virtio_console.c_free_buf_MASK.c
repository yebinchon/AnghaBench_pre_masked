
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_buffer {unsigned int sgpages; int dev; int dma; struct port_buffer* buf; int size; int list; int * sg; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct port_buffer*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct port_buffer*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct port_buffer *VAR_3, bool VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->sgpages; VAR_5++) {
  struct page *VAR_6 = FUNC_5(&VAR_3->sg[VAR_5]);
  if (!VAR_6)
   break;
  FUNC_4(VAR_6);
 }

 if (!VAR_3->dev) {
  FUNC_1(VAR_3->buf);
 } else if (VAR_1) {
  unsigned long VAR_7;


  if (!VAR_4) {

   FUNC_6(&VAR_0, VAR_7);
   FUNC_2(&VAR_3->list, &VAR_2);
   FUNC_7(&VAR_0, VAR_7);
   return;
  }
  FUNC_0(VAR_3->dev, VAR_3->size, VAR_3->buf, VAR_3->dma);


  FUNC_3(VAR_3->dev);
 }

 FUNC_1(VAR_3);
}
