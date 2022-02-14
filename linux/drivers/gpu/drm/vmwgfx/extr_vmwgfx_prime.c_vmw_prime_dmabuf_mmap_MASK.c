
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct dma_buf *VAR_1,
     struct vm_area_struct *VAR_2)
{
 FUNC_0(1, "Attempted use of dmabuf mmap. Bad.\n");
 return -VAR_0;
}
