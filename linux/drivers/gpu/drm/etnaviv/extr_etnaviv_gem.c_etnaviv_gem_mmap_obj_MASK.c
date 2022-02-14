
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_page_prot; int vm_file; scalar_t__ vm_pgoff; int vm_flags; } ;
struct TYPE_2__ {int filp; } ;
struct etnaviv_gem_object {int flags; TYPE_1__ base; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct etnaviv_gem_object *VAR_4,
  struct vm_area_struct *VAR_5)
{
 pgprot_t VAR_6;

 VAR_5->vm_flags &= ~VAR_3;
 VAR_5->vm_flags |= VAR_2;

 VAR_6 = FUNC_4(VAR_5->vm_flags);

 if (VAR_4->flags & VAR_1) {
  VAR_5->vm_page_prot = FUNC_3(VAR_6);
 } else if (VAR_4->flags & VAR_0) {
  VAR_5->vm_page_prot = FUNC_2(VAR_6);
 } else {





  FUNC_0(VAR_5->vm_file);
  FUNC_1(VAR_4->base.filp);
  VAR_5->vm_pgoff = 0;
  VAR_5->vm_file = VAR_4->base.filp;

  VAR_5->vm_page_prot = VAR_6;
 }

 return 0;
}
