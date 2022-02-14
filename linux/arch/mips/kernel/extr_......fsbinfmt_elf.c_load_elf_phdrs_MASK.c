
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct elfhdr {int e_phentsize; int e_phnum; int e_phoff; } ;
struct elf_phdr {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,struct elf_phdr*,unsigned int,int *) ;
 int FUNC_1 (struct elf_phdr*) ;
 struct elf_phdr* FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static struct elf_phdr *FUNC_3(const struct elfhdr *VAR_3,
           struct file *VAR_4)
{
 struct elf_phdr *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = -1;
 loff_t VAR_8 = VAR_3->e_phoff;
 unsigned int VAR_9;





 if (VAR_3->e_phentsize != sizeof(struct elf_phdr))
  goto out;



 VAR_9 = sizeof(struct elf_phdr) * VAR_3->e_phnum;
 if (VAR_9 == 0 || VAR_9 > 65536 || VAR_9 > VAR_1)
  goto out;

 VAR_5 = FUNC_2(VAR_9, VAR_2);
 if (!VAR_5)
  goto out;


 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_9, &VAR_8);
 if (VAR_6 != VAR_9) {
  VAR_7 = (VAR_6 < 0) ? VAR_6 : -VAR_0;
  goto out;
 }


 VAR_7 = 0;
out:
 if (VAR_7) {
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }
 return VAR_5;
}
