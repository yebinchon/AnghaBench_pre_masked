
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct topa {int z_count; int last; int size; } ;
struct pt_buffer {size_t nr_pages; int snapshot; int * data_pages; struct topa* last; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int size; int base; int intr; int stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 TYPE_1__* FUNC_1 (struct topa*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;
 struct topa* FUNC_6 (int,int ) ;
 int FUNC_7 (struct pt_buffer*,struct topa*) ;
 scalar_t__ FUNC_8 (struct topa*) ;
 struct page* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct pt_buffer *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct topa *VAR_6 = VAR_3->last;
 int VAR_7 = 0;
 struct page *VAR_8;

 VAR_8 = FUNC_9(VAR_3->data_pages[VAR_3->nr_pages]);
 if (FUNC_0(VAR_8))
  VAR_7 = FUNC_3(VAR_8);

 if (FUNC_8(VAR_6)) {
  VAR_6 = FUNC_6(VAR_4, VAR_5);
  if (!VAR_6)
   return -VAR_0;

  FUNC_7(VAR_3, VAR_6);
 }

 if (VAR_6->z_count == VAR_6->last - 1) {
  if (VAR_7 == FUNC_1(VAR_6, VAR_6->last - 1)->size)
   VAR_6->z_count++;
 }

 FUNC_1(VAR_6, -1)->base = FUNC_4(VAR_8) >> VAR_2;
 FUNC_1(VAR_6, -1)->size = VAR_7;
 if (!VAR_3->snapshot &&
     !FUNC_2(VAR_1)) {
  FUNC_1(VAR_6, -1)->intr = 1;
  FUNC_1(VAR_6, -1)->stop = 1;
 }

 VAR_6->last++;
 VAR_6->size += FUNC_5(VAR_7);

 VAR_3->nr_pages += 1ul << VAR_7;

 return 0;
}
