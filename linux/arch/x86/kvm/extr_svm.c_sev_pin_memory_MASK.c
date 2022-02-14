
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct kvm_sev_info {unsigned long pages_locked; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct page** FUNC_0 (unsigned long,int,int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,int ,struct page**) ;
 struct page** FUNC_3 (unsigned long,int) ;
 int FUNC_4 (struct page**) ;
 int FUNC_5 (char*,unsigned long,...) ;
 int FUNC_6 (struct page**,unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (struct kvm*) ;

__attribute__((used)) static struct page **FUNC_9(struct kvm *VAR_9, unsigned long VAR_10,
        unsigned long VAR_11, unsigned long *VAR_12,
        int VAR_13)
{
 struct kvm_sev_info *VAR_14 = &FUNC_8(VAR_9)->sev_info;
 unsigned long VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18, VAR_19;
 struct page **VAR_20;
 unsigned long VAR_21, VAR_22;

 if (VAR_11 == 0 || VAR_10 + VAR_11 < VAR_10)
  return ((void*)0);


 VAR_21 = (VAR_10 & VAR_4) >> VAR_5;
 VAR_22 = ((VAR_10 + VAR_11 - 1) & VAR_4) >> VAR_5;
 VAR_15 = (VAR_22 - VAR_21 + 1);

 VAR_18 = VAR_14->pages_locked + VAR_15;
 VAR_19 = FUNC_7(VAR_7) >> VAR_5;
 if (VAR_18 > VAR_19 && !FUNC_1(VAR_0)) {
  FUNC_5("SEV: %lu locked pages exceed the lock limit of %lu.\n", VAR_18, VAR_19);
  return ((void*)0);
 }


 VAR_17 = VAR_15 * sizeof(struct page *);
 if (VAR_17 > VAR_6)
  VAR_20 = FUNC_0(VAR_17, VAR_2 | VAR_8,
      VAR_3);
 else
  VAR_20 = FUNC_3(VAR_17, VAR_2);

 if (!VAR_20)
  return ((void*)0);


 VAR_16 = FUNC_2(VAR_10, VAR_15, VAR_1, VAR_20);
 if (VAR_16 != VAR_15) {
  FUNC_5("SEV: Failure locking %lu pages.\n", VAR_15);
  goto err;
 }

 *VAR_12 = VAR_15;
 VAR_14->pages_locked = VAR_18;

 return VAR_20;

err:
 if (VAR_16 > 0)
  FUNC_6(VAR_20, VAR_16);

 FUNC_4(VAR_20);
 return ((void*)0);
}
