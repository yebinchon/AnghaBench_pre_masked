
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int hw_ecap; int domids; } ;
struct dmar_domain {int domain; unsigned long long end; int agaw; int flags; int pgtbl_obj; struct dmar_unit* dmar; int lock; int unload_task; int unload_entries; int rb_root; int contexts; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,struct dmar_domain*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dmar_domain*) ;
 int VAR_8 ;
 int FUNC_6 (struct dmar_domain*) ;
 int FUNC_7 (struct dmar_domain*,int,int) ;
 int FUNC_8 (struct dmar_unit*,unsigned long long,int) ;
 int FUNC_9 (struct dmar_domain*) ;
 int FUNC_10 (struct dmar_domain*,unsigned long long) ;
 int FUNC_11 (struct dmar_domain*,int) ;
 struct dmar_domain* FUNC_12 (int,int ,int) ;
 int FUNC_13 (int *,char*,int *,int ) ;
 unsigned long long FUNC_14 (int ) ;

__attribute__((used)) static struct dmar_domain *
FUNC_15(struct dmar_unit *VAR_9, bool VAR_10)
{
 struct dmar_domain *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_13 = FUNC_4(VAR_9->domids);
 if (VAR_13 == -1)
  return (((void*)0));
 VAR_11 = FUNC_12(sizeof(*VAR_11), VAR_4, VAR_5 | VAR_6);
 VAR_11->domain = VAR_13;
 FUNC_0(&VAR_11->contexts);
 FUNC_1(&VAR_11->rb_root);
 FUNC_2(&VAR_11->unload_entries);
 FUNC_3(&VAR_11->unload_task, 0, VAR_8, VAR_11);
 FUNC_13(&VAR_11->lock, "dmardom", ((void*)0), VAR_3);
 VAR_11->dmar = VAR_9;







 VAR_11->end = VAR_10 ? FUNC_14(VAR_7) : VAR_0;
 VAR_14 = FUNC_8(VAR_9, VAR_11->end, !VAR_10);
 VAR_12 = FUNC_11(VAR_11, VAR_14);
 if (VAR_12 != 0)
  goto fail;
 if (!VAR_10)

  VAR_11->end = 1ULL << (VAR_11->agaw - 1);

 FUNC_6(VAR_11);

 if (VAR_10) {
  if ((VAR_9->hw_ecap & VAR_2) == 0) {
   VAR_11->pgtbl_obj = FUNC_10(VAR_11,
       VAR_11->end);
  }
  VAR_11->flags |= VAR_1;
 } else {
  VAR_12 = FUNC_9(VAR_11);
  if (VAR_12 != 0)
   goto fail;

  VAR_12 = FUNC_7(VAR_11, 0xfee00000,
      0xfeefffff + 1);
  if (VAR_12 != 0)
   goto fail;
 }
 return (VAR_11);

fail:
 FUNC_5(VAR_11);
 return (((void*)0));
}
