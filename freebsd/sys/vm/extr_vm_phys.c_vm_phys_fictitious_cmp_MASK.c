
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vm_phys_fictitious_seg {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct vm_phys_fictitious_seg*,struct vm_phys_fictitious_seg*) ;

__attribute__((used)) static int
FUNC_3(struct vm_phys_fictitious_seg *VAR_0,
    struct vm_phys_fictitious_seg *VAR_1)
{


 if (VAR_0->end == 0)
  return (FUNC_2(VAR_0, VAR_1));

 FUNC_0(VAR_1->end != 0,
    ("Invalid range passed as second parameter to vm fictitious comparison"));


 if (VAR_0->end <= VAR_1->start)
  return (-1);
 if (VAR_0->start >= VAR_1->end)
  return (1);

 FUNC_1("Trying to add overlapping vm fictitious ranges:\n"
     "[%#jx:%#jx] and [%#jx:%#jx]", (uintmax_t)VAR_0->start,
     (uintmax_t)VAR_0->end, (uintmax_t)VAR_1->start, (uintmax_t)VAR_1->end);
}
