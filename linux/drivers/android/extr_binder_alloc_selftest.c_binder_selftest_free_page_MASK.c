
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_alloc {int buffer_size; TYPE_1__* pages; } ;
struct TYPE_2__ {int lru; scalar_t__ page_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,unsigned long) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct binder_alloc *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 while ((VAR_6 = FUNC_1(&VAR_2))) {
  FUNC_2(&VAR_2, VAR_1,
         ((void*)0), VAR_6);
 }

 for (VAR_5 = 0; VAR_5 < (VAR_4->buffer_size / VAR_0); VAR_5++) {
  if (VAR_4->pages[VAR_5].page_ptr) {
   FUNC_3("expect free but is %s at page index %d\n",
          FUNC_0(&VAR_4->pages[VAR_5].lru) ?
          "alloc" : "lru", VAR_5);
   VAR_3++;
  }
 }
}
