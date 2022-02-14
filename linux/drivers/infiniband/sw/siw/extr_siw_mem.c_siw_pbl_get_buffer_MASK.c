
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct siw_pble {scalar_t__ pbl_off; scalar_t__ size; scalar_t__ addr; } ;
struct siw_pbl {int num_buf; struct siw_pble* pbe; } ;
typedef scalar_t__ dma_addr_t ;



dma_addr_t FUNC_0(struct siw_pbl *VAR_0, u64 VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4 = VAR_3 ? *VAR_3 : 0;

 while (VAR_4 < VAR_0->num_buf) {
  struct siw_pble *VAR_5 = &VAR_0->pbe[VAR_4];

  if (VAR_5->pbl_off + VAR_5->size > VAR_1) {
   u64 VAR_6 = VAR_1 - VAR_5->pbl_off;

   if (VAR_2)
    *VAR_2 = VAR_5->size - VAR_6;
   if (VAR_3)
    *VAR_3 = VAR_4;

   return VAR_5->addr + VAR_6;
  }
  VAR_4++;
 }
 if (VAR_2)
  *VAR_2 = 0;
 return 0;
}
