
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pvrdma_page_dir {scalar_t__ npages; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__* FUNC_1 (struct pvrdma_page_dir*,scalar_t__) ;

int FUNC_2(struct pvrdma_page_dir *VAR_1, u64 VAR_2,
          dma_addr_t VAR_3)
{
 u64 *VAR_4;

 if (VAR_2 >= VAR_1->npages)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 VAR_4[FUNC_0(VAR_2)] = VAR_3;

 return 0;
}
