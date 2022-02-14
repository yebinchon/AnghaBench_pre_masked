
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct linux_binprm {long loader; int taso; struct file* file; TYPE_2__* vma; scalar_t__ buf; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int entry; } ;
struct TYPE_4__ {int f_magic; int f_flags; } ;
struct exec {TYPE_3__ ah; TYPE_1__ fh; } ;
struct TYPE_5__ {int vm_end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 struct file* FUNC_4 (char*) ;
 int FUNC_5 (struct linux_binprm*) ;
 int FUNC_6 (struct linux_binprm*) ;

__attribute__((used)) static int FUNC_7(struct linux_binprm *VAR_1)
{
 struct exec *VAR_2 = (struct exec *)VAR_1->buf;
 unsigned long VAR_3;
 struct file *VAR_4;
 int VAR_5;

 if (VAR_2->fh.f_magic != 0x183 || (VAR_2->fh.f_flags & 0x3000) != 0x3000)
  return -VAR_0;

 if (VAR_1->loader)
  return -VAR_0;

 FUNC_2(VAR_1->file);
 FUNC_3(VAR_1->file);
 VAR_1->file = ((void*)0);

 VAR_3 = VAR_1->vma->vm_end - sizeof(void *);

 VAR_4 = FUNC_4("/sbin/loader");
 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  return VAR_5;


 VAR_1->taso = VAR_2->ah.entry < 0x100000000UL;

 VAR_1->file = VAR_4;
 VAR_1->loader = VAR_3;
 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_6(VAR_1);
}
