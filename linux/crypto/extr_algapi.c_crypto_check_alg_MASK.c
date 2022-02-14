
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_alignmask; scalar_t__ cra_blocksize; int cra_flags; scalar_t__ cra_priority; int cra_refcnt; int cra_type; int * cra_driver_name; int * cra_name; int cra_module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct crypto_alg *VAR_7)
{
 FUNC_0(VAR_7->cra_module);

 if (!VAR_7->cra_name[0] || !VAR_7->cra_driver_name[0])
  return -VAR_2;

 if (VAR_7->cra_alignmask & (VAR_7->cra_alignmask + 1))
  return -VAR_2;


 if (VAR_7->cra_alignmask > VAR_3)
  return -VAR_2;

 if (VAR_7->cra_blocksize > VAR_4)
  return -VAR_2;


 if (!VAR_7->cra_type && (VAR_7->cra_flags & VAR_1) ==
          VAR_0) {
  if (VAR_7->cra_alignmask > VAR_5)
   return -VAR_2;

  if (VAR_7->cra_blocksize > VAR_6)
   return -VAR_2;
 }

 if (VAR_7->cra_priority < 0)
  return -VAR_2;

 FUNC_1(&VAR_7->cra_refcnt, 1);

 return 0;
}
