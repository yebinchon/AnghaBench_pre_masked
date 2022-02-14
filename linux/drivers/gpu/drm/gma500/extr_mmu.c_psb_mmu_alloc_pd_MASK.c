
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct psb_mmu_pt {int dummy; } ;
struct psb_mmu_pd {int hw_context; void* p; void* dummy_pt; void* dummy_page; struct psb_mmu_driver* driver; int pd_mask; int tables; void* invalid_pde; void* invalid_pte; } ;
struct psb_mmu_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct psb_mmu_pd*) ;
 struct psb_mmu_pd* FUNC_4 (int,int ) ;
 void** FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;

struct psb_mmu_pd *FUNC_10(struct psb_mmu_driver *VAR_4,
        int VAR_5, int VAR_6)
{
 struct psb_mmu_pd *VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 uint32_t *VAR_8;
 int VAR_9;

 if (!VAR_7)
  return ((void*)0);

 VAR_7->p = FUNC_1(VAR_0);
 if (!VAR_7->p)
  goto out_err1;
 VAR_7->dummy_pt = FUNC_1(VAR_0);
 if (!VAR_7->dummy_pt)
  goto out_err2;
 VAR_7->dummy_page = FUNC_1(VAR_0);
 if (!VAR_7->dummy_page)
  goto out_err3;

 if (!VAR_5) {
  VAR_7->invalid_pde = FUNC_8(FUNC_7(VAR_7->dummy_pt),
         VAR_6);
  VAR_7->invalid_pte = FUNC_8(FUNC_7(VAR_7->dummy_page),
         VAR_6);
 } else {
  VAR_7->invalid_pde = 0;
  VAR_7->invalid_pte = 0;
 }

 VAR_8 = FUNC_5(VAR_7->dummy_pt);
 for (VAR_9 = 0; VAR_9 < (VAR_2 / sizeof(uint32_t)); ++VAR_9)
  VAR_8[VAR_9] = VAR_7->invalid_pte;

 FUNC_6(VAR_7->dummy_pt);

 VAR_8 = FUNC_5(VAR_7->p);
 for (VAR_9 = 0; VAR_9 < (VAR_2 / sizeof(uint32_t)); ++VAR_9)
  VAR_8[VAR_9] = VAR_7->invalid_pde;

 FUNC_6(VAR_7->p);

 FUNC_2(FUNC_5(VAR_7->dummy_page));
 FUNC_6(VAR_7->dummy_page);

 VAR_7->tables = FUNC_9(sizeof(struct psb_mmu_pt *) * 1024);
 if (!VAR_7->tables)
  goto out_err4;

 VAR_7->hw_context = -1;
 VAR_7->pd_mask = VAR_3;
 VAR_7->driver = VAR_4;

 return VAR_7;

out_err4:
 FUNC_0(VAR_7->dummy_page);
out_err3:
 FUNC_0(VAR_7->dummy_pt);
out_err2:
 FUNC_0(VAR_7->p);
out_err1:
 FUNC_3(VAR_7);
 return ((void*)0);
}
