
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vdso_elfinfo32 {int dummy; } ;
struct TYPE_4__ {struct vdso_elfinfo32 elf32; } ;
struct vdso_elfinfo {TYPE_1__ u; } ;
struct TYPE_5__ {int st_shndx; int st_other; int st_info; int st_size; int st_value; } ;
typedef TYPE_2__ Elf32_Sym ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct vdso_elfinfo32*,char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct vdso_elfinfo *VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 struct vdso_elfinfo32 *VAR_4 = &VAR_1->u.elf32;
 Elf32_Sym *VAR_5 = FUNC_0(VAR_4, VAR_2);
 Elf32_Sym *VAR_6 = FUNC_0(VAR_4, VAR_3);

 if (!VAR_6 || !VAR_5) {
  FUNC_1("VDSO32: Missing symbols.\n");
  return -VAR_0;
 }
 VAR_5->st_value = VAR_6->st_value;
 VAR_5->st_size = VAR_6->st_size;
 VAR_5->st_info = VAR_6->st_info;
 VAR_5->st_other = VAR_6->st_other;
 VAR_5->st_shndx = VAR_6->st_shndx;

 return 0;
}
