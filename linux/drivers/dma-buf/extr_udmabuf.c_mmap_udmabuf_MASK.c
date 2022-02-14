
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct udmabuf* vm_private_data; int * vm_ops; } ;
struct udmabuf {int dummy; } ;
struct dma_buf {struct udmabuf* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct dma_buf *VAR_4, struct vm_area_struct *VAR_5)
{
 struct udmabuf *VAR_6 = VAR_4->priv;

 if ((VAR_5->vm_flags & (VAR_2 | VAR_1)) == 0)
  return -VAR_0;

 VAR_5->vm_ops = &VAR_3;
 VAR_5->vm_private_data = VAR_6;
 return 0;
}
