
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_pfn_t ;
struct vm_area_struct {int vm_flags; int vm_mm; } ;
struct remap_data {int contiguous; int no_translate; struct mmu_update* mmu_update; int prot; int * pfn; } ;
struct page {int dummy; } ;
struct mmu_update {int dummy; } ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmu_update*,int,int*,unsigned int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,unsigned long,unsigned long,int ,struct remap_data*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;
 int FUNC_5 () ;

int FUNC_6(struct vm_area_struct *VAR_5, unsigned long VAR_6,
    xen_pfn_t *VAR_7, int VAR_8, int *VAR_9, pgprot_t VAR_10,
    unsigned int VAR_11, bool VAR_12, struct page **VAR_13)
{
 int VAR_14 = 0;
 struct remap_data VAR_15;
 struct mmu_update VAR_16[VAR_1];
 unsigned long VAR_17;
 int VAR_18 = 0;

 FUNC_0(!((VAR_5->vm_flags & (VAR_3 | VAR_2)) == (VAR_3 | VAR_2)));

 VAR_15.pfn = VAR_7;
 VAR_15.prot = VAR_10;




 VAR_15.contiguous = !VAR_9;
 VAR_15.no_translate = VAR_12;

 while (VAR_8) {
  int VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = FUNC_4(VAR_1, VAR_8);
  int VAR_22 = VAR_21;

  VAR_17 = (unsigned long)VAR_21 << VAR_0;

  VAR_15.mmu_update = VAR_16;
  VAR_14 = FUNC_2(VAR_5->vm_mm, VAR_6, VAR_17,
       VAR_4, &VAR_15);
  if (VAR_14)
   goto out;





  do {
   int VAR_23;

   VAR_14 = FUNC_1(&VAR_16[VAR_19],
          VAR_22, &VAR_20, VAR_11);






   if (VAR_9) {
    for (VAR_23 = VAR_19; VAR_23 < VAR_19 + VAR_20; VAR_23++)
     VAR_9[VAR_23] = 0;
   }
   if (VAR_14 < 0) {
    if (!VAR_9)
     goto out;
    VAR_9[VAR_23] = VAR_14;
    VAR_20++;
   } else
    VAR_18 += VAR_20;
   VAR_22 -= VAR_20;
   VAR_19 += VAR_20;
  } while (VAR_22);

  VAR_8 -= VAR_21;
  VAR_6 += VAR_17;
  if (VAR_9)
   VAR_9 += VAR_21;
  FUNC_3();
 }
out:

 FUNC_5();

 return VAR_14 < 0 ? VAR_14 : VAR_18;
}
