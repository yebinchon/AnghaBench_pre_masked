
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdso_image {int data; } ;
struct vdso_elfinfo32 {void* dynstr; void* dynsym; int dynsymsize; int hdr; } ;
struct TYPE_2__ {struct vdso_elfinfo32 elf32; } ;
struct vdso_elfinfo {TYPE_1__ u; } ;


 int VAR_0 ;
 void* FUNC_0 (struct vdso_elfinfo32*,char*,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const struct vdso_image *VAR_1, struct vdso_elfinfo *VAR_2)
{
 struct vdso_elfinfo32 *VAR_3 = &VAR_2->u.elf32;

 VAR_3->hdr = VAR_1->data;
 VAR_3->dynsym = FUNC_0(VAR_3, ".dynsym", &VAR_3->dynsymsize);
 VAR_3->dynstr = FUNC_0(VAR_3, ".dynstr", ((void*)0));

 if (!VAR_3->dynsym || !VAR_3->dynstr) {
  FUNC_1("VDSO32: Missing symbol sections.\n");
  return -VAR_0;
 }
 return 0;
}
