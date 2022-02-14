
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ cpu_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (unsigned long,size_t) ;
 int FUNC_5 (unsigned long,size_t) ;

void FUNC_6(struct device *VAR_4, size_t VAR_5, void *VAR_6,
  dma_addr_t VAR_7, unsigned long VAR_8)
{
 int VAR_9 = FUNC_3(VAR_5);

 FUNC_0(VAR_1.cpu_type != VAR_3 &&
       VAR_1.cpu_type != VAR_2);

 VAR_5 = 1 << (VAR_9 + VAR_0);
 FUNC_5((unsigned long)VAR_6, VAR_5);
 FUNC_4((unsigned long)VAR_6, VAR_5);

 FUNC_2((unsigned long)FUNC_1(VAR_7), VAR_9);
}
