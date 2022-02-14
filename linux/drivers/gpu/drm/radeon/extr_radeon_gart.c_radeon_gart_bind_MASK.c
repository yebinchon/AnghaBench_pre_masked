
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {unsigned int* pages_entry; scalar_t__ ptr; struct page** pages; int ready; } ;
struct radeon_device {TYPE_1__ gart; } ;
struct page {int dummy; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct radeon_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct radeon_device*) ;

int FUNC_5(struct radeon_device *VAR_3, unsigned VAR_4,
       int VAR_5, struct page **VAR_6, dma_addr_t *VAR_7,
       uint32_t VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10;
 uint64_t VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_3->gart.ready) {
  FUNC_0(1, "trying to bind memory to uninitialized GART !\n");
  return -VAR_0;
 }
 VAR_9 = VAR_4 / VAR_2;
 VAR_10 = VAR_9 / (VAR_1 / VAR_2);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++, VAR_10++) {
  VAR_3->gart.pages[VAR_10] = VAR_6[VAR_13];
  VAR_11 = VAR_7[VAR_13];
  for (VAR_14 = 0; VAR_14 < (VAR_1 / VAR_2); VAR_14++, VAR_9++) {
   VAR_12 = FUNC_2(VAR_11, VAR_8);
   VAR_3->gart.pages_entry[VAR_9] = VAR_12;
   if (VAR_3->gart.ptr) {
    FUNC_3(VAR_3, VAR_9, VAR_12);
   }
   VAR_11 += VAR_2;
  }
 }
 if (VAR_3->gart.ptr) {
  FUNC_1();
  FUNC_4(VAR_3);
 }
 return 0;
}
