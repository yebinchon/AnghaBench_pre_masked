
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct flusher_data {unsigned long addr1; unsigned long addr2; struct vm_area_struct* vma; } ;


 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;

void FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3)
{
 struct flusher_data VAR_4;

 VAR_4.vma = VAR_1;
 VAR_4.addr1 = VAR_2;
 VAR_4.addr2 = VAR_3;

 FUNC_0(VAR_0, (void *)&VAR_4, 1);
}
