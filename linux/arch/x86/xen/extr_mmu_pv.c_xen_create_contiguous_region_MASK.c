
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int maddr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long* VAR_3 ;
 int FUNC_0 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__ FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long,int ,unsigned long*,int,unsigned int,unsigned long*,unsigned int) ;
 int FUNC_8 (unsigned long,unsigned int,unsigned long*,unsigned long) ;
 int VAR_4 ;
 int FUNC_9 (unsigned long,unsigned int,unsigned long*,int *) ;

int FUNC_10(phys_addr_t VAR_5, unsigned int VAR_6,
     unsigned int VAR_7,
     dma_addr_t *VAR_8)
{
 unsigned long *VAR_9 = VAR_3, VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 unsigned long VAR_13 = (unsigned long)FUNC_1(VAR_5);







 if (FUNC_4(VAR_6 > VAR_1))
  return -VAR_0;

 FUNC_0((void *) VAR_13, 0, VAR_2 << VAR_6);

 FUNC_2(&VAR_4, VAR_11);


 FUNC_9(VAR_13, VAR_6, VAR_9, ((void*)0));


 VAR_10 = FUNC_6(VAR_13);
 VAR_12 = FUNC_7(1UL << VAR_6, 0, VAR_9,
          1, VAR_6, &VAR_10,
          VAR_7);


 if (VAR_12)
  FUNC_8(VAR_13, VAR_6, ((void*)0), VAR_10);
 else
  FUNC_8(VAR_13, VAR_6, VAR_9, 0);

 FUNC_3(&VAR_4, VAR_11);

 *VAR_8 = FUNC_5(VAR_13).maddr;
 return VAR_12 ? 0 : -VAR_0;
}
