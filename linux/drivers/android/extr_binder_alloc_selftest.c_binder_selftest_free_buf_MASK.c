
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_buffer {int dummy; } ;
struct binder_alloc {TYPE_1__* pages; } ;
struct TYPE_2__ {scalar_t__ page_ptr; int lru; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct binder_alloc*,struct binder_buffer*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (size_t*,int*) ;

__attribute__((used)) static void FUNC_4(struct binder_alloc *VAR_3,
         struct binder_buffer *VAR_4[],
         size_t *VAR_5, int *VAR_6, size_t VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  FUNC_0(VAR_3, VAR_4[VAR_6[VAR_8]]);

 for (VAR_8 = 0; VAR_8 < VAR_7 / VAR_1; VAR_8++) {





  if (FUNC_1(&VAR_3->pages[VAR_8].lru)) {
   FUNC_3(VAR_5, VAR_6);
   FUNC_2("expect lru but is %s at page index %d\n",
          VAR_3->pages[VAR_8].page_ptr ? "alloc" : "free", VAR_8);
   VAR_2++;
  }
 }
}
