
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpa_data {unsigned long* vaddr; int numpages; int pgd; void* mask_clr; void* mask_set; } ;
typedef int cpa ;
struct TYPE_2__ {int pgd; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,char*,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (struct cpa_data*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct cpa_data*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct cpa_data*,int ,int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_3, int VAR_4, bool VAR_5)
{
 struct cpa_data VAR_6;
 int VAR_7;


 if (!FUNC_5())
  return 0;


 if (FUNC_0(VAR_3 & ~VAR_0, "misaligned address: %#lx\n", VAR_3))
  VAR_3 &= VAR_0;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.vaddr = &VAR_3;
 VAR_6.numpages = VAR_4;
 VAR_6.mask_set = VAR_5 ? FUNC_2(VAR_1) : FUNC_2(0);
 VAR_6.mask_clr = VAR_5 ? FUNC_2(0) : FUNC_2(VAR_1);
 VAR_6.pgd = VAR_2.pgd;


 FUNC_4();
 FUNC_7();




 FUNC_3(&VAR_6, 1);

 VAR_7 = FUNC_1(&VAR_6, 1);
 FUNC_3(&VAR_6, 0);

 return VAR_7;
}
