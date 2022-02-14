
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_phys_fictitious_seg {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static inline int
FUNC_1(struct vm_phys_fictitious_seg *VAR_0,
    struct vm_phys_fictitious_seg *VAR_1)
{

 FUNC_0(VAR_1->start != 0 && VAR_1->end != 0,
     ("Invalid range passed on search for vm_fictitious page"));
 if (VAR_0->start >= VAR_1->end)
  return (1);
 if (VAR_0->start < VAR_1->start)
  return (-1);

 return (0);
}
