
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; int * pages_entry; int ** pages; int ready; } ;
struct TYPE_3__ {int entry; } ;
struct radeon_device {TYPE_2__ gart; TYPE_1__ dummy_page; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct radeon_device*,unsigned int,int ) ;
 int FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_2, unsigned VAR_3,
   int VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_2->gart.ready) {
  FUNC_0(1, "trying to unbind memory from uninitialized GART !\n");
  return;
 }
 VAR_5 = VAR_3 / VAR_1;
 VAR_6 = VAR_5 / (VAR_0 / VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_6++) {
  if (VAR_2->gart.pages[VAR_6]) {
   VAR_2->gart.pages[VAR_6] = ((void*)0);
   for (VAR_8 = 0; VAR_8 < (VAR_0 / VAR_1); VAR_8++, VAR_5++) {
    VAR_2->gart.pages_entry[VAR_5] = VAR_2->dummy_page.entry;
    if (VAR_2->gart.ptr) {
     FUNC_2(VAR_2, VAR_5,
            VAR_2->dummy_page.entry);
    }
   }
  }
 }
 if (VAR_2->gart.ptr) {
  FUNC_1();
  FUNC_3(VAR_2);
 }
}
