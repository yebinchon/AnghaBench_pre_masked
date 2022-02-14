
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct fw_iso_buffer {int page_count; int pages; } ;


 int FUNC_0 (struct vm_area_struct*,int ,int ) ;

int FUNC_1(struct fw_iso_buffer *VAR_0,
     struct vm_area_struct *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->pages,
     VAR_0->page_count);
}
