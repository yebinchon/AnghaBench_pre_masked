
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct elf_phdr {unsigned long p_filesz; unsigned long p_offset; int p_vaddr; } ;
struct TYPE_3__ {int comm; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 int VAR_1 ;
 int FUNC_4 (void*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (char*,int ,int ,void*) ;
 int FUNC_6 (TYPE_1__*) ;
 unsigned long FUNC_7 (struct file*,unsigned long,unsigned long,int,int,unsigned long) ;
 int FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_9(struct file *VAR_3, unsigned long VAR_4,
  const struct elf_phdr *VAR_5, int VAR_6, int VAR_7,
  unsigned long VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10 = VAR_5->p_filesz + FUNC_2(VAR_5->p_vaddr);
 unsigned long VAR_11 = VAR_5->p_offset - FUNC_2(VAR_5->p_vaddr);
 VAR_4 = FUNC_3(VAR_4);
 VAR_10 = FUNC_1(VAR_10);



 if (!VAR_10)
  return VAR_4;
 if (VAR_8) {
  VAR_8 = FUNC_1(VAR_8);
  VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_8, VAR_6, VAR_7, VAR_11);
  if (!FUNC_0(VAR_9))
   FUNC_8(VAR_9+VAR_10, VAR_8-VAR_10);
 } else
  VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_10, VAR_6, VAR_7, VAR_11);

 if ((VAR_7 & VAR_1) &&
     FUNC_4((void *)VAR_9) == -VAR_0)
  FUNC_5("%d (%s): Uhuuh, elf segment at %px requested but the memory is mapped already\n",
   FUNC_6(VAR_2), VAR_2->comm, (void *)VAR_4);

 return(VAR_9);
}
