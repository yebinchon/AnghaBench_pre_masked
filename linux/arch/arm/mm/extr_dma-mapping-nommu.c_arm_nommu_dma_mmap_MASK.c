
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*,struct vm_area_struct*,void*,size_t,int*) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,void*,size_t,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct vm_area_struct *VAR_2,
         void *VAR_3, dma_addr_t VAR_4, size_t VAR_5,
         unsigned long VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_2, VAR_3, VAR_5, &VAR_7))
  return VAR_7;
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, &VAR_7))
  return VAR_7;
 return -VAR_0;
}
