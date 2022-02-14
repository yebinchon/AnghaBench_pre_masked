
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct dma_buf {int priv; } ;


 int FUNC_0 (int ,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct dma_buf *VAR_0,
 struct vm_area_struct *VAR_1)
{
 return FUNC_0(VAR_0->priv, VAR_1);
}
