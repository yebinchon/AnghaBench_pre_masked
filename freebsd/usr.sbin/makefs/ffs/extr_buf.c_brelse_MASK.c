
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ b_lblkno; struct buf* b_data; scalar_t__ b_bcount; } ;


 int FUNC_0 (int *,struct buf*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct buf*) ;

void
FUNC_3(struct buf *VAR_2)
{

 FUNC_1 (VAR_2 != ((void*)0));
 FUNC_1 (VAR_2->b_data != ((void*)0));

 if (VAR_2->b_lblkno < 0) {
  VAR_2->b_bcount = 0;
  return;
 }

 FUNC_0(&VAR_1, VAR_2, VAR_0);
 FUNC_2(VAR_2->b_data);
 FUNC_2(VAR_2);
}
