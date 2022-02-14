
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct a6xx_hfi_queue_header {size_t read_index; size_t write_index; int rx_request; size_t size; } ;
struct a6xx_hfi_queue {size_t* data; struct a6xx_hfi_queue_header* header; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(struct a6xx_hfi_queue *VAR_0, u32 *VAR_1,
  u32 VAR_2)
{
 struct a6xx_hfi_queue_header *VAR_3 = VAR_0->header;
 u32 VAR_4, VAR_5, VAR_6 = VAR_3->read_index;

 if (VAR_3->read_index == VAR_3->write_index) {
  VAR_3->rx_request = 1;
  return 0;
 }

 VAR_5 = VAR_0->data[VAR_6];
 FUNC_0(FUNC_1(VAR_5) > VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_5); VAR_4++) {
  VAR_1[VAR_4] = VAR_0->data[VAR_6];
  VAR_6 = (VAR_6 + 1) % VAR_3->size;
 }

 VAR_3->read_index = VAR_6;
 return FUNC_1(VAR_5);
}
