
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {scalar_t__ mode; int lock; int * pt_root; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_7(struct protection_domain *VAR_1,
       unsigned long VAR_2,
       gfp_t VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5 = 0;
 u64 *VAR_6;

 FUNC_5(&VAR_1->lock, VAR_4);

 if (VAR_2 <= FUNC_1(VAR_1->mode) ||
     FUNC_2(VAR_1->mode == VAR_0))
  goto out;

 VAR_6 = (void *)FUNC_3(VAR_3);
 if (!VAR_6)
  goto out;

 *VAR_6 = FUNC_0(VAR_1->mode,
     FUNC_4(VAR_1->pt_root));
 VAR_1->pt_root = VAR_6;
 VAR_1->mode += 1;

 VAR_5 = 1;

out:
 FUNC_6(&VAR_1->lock, VAR_4);

 return VAR_5;
}
