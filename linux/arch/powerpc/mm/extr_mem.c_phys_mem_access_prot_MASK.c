
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int pgprot_t ;
struct TYPE_2__ {int (* phys_mem_access_prot ) (struct file*,unsigned long,unsigned long,int ) ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct file*,unsigned long,unsigned long,int ) ;

pgprot_t FUNC_3(struct file *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3, pgprot_t VAR_4)
{
 if (VAR_0.phys_mem_access_prot)
  return VAR_0.phys_mem_access_prot(VAR_1, VAR_2, VAR_3, VAR_4);

 if (!FUNC_0(VAR_2))
  VAR_4 = FUNC_1(VAR_4);

 return VAR_4;
}
