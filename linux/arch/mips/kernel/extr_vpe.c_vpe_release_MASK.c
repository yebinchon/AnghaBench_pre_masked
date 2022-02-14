
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe {scalar_t__ plen; scalar_t__ pbuffer; int * shared_ptr; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int e_ident; } ;
typedef TYPE_1__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct vpe* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct vpe*) ;
 int FUNC_6 (struct vpe*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 FUNC_3("VPE loader: ELF load failed.\n");
 return -VAR_2;

}
