
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,size_t,void*,int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ,size_t,void*,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, size_t VAR_1,
        void *VAR_2, dma_addr_t VAR_3,
        unsigned long VAR_4)
{
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_3(FUNC_2(VAR_0), VAR_1, VAR_2,
    VAR_3);
}
