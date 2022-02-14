
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_pgtable_ops {int dummy; } ;
struct TYPE_2__ {int fmt; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; int * pgd; } ;
typedef unsigned long phys_addr_t ;
typedef int arm_lpae_iopte ;


 int FUNC_0 (int,struct arm_lpae_io_pgtable*) ;
 int FUNC_1 (unsigned long,int,struct arm_lpae_io_pgtable*) ;
 int VAR_0 ;
 int FUNC_2 (struct arm_lpae_io_pgtable*) ;
 int FUNC_3 (int ) ;
 struct arm_lpae_io_pgtable* FUNC_4 (struct io_pgtable_ops*) ;
 int * FUNC_5 (int ,struct arm_lpae_io_pgtable*) ;
 scalar_t__ FUNC_6 (int ,int,int ) ;
 unsigned long FUNC_7 (int ,struct arm_lpae_io_pgtable*) ;

__attribute__((used)) static phys_addr_t FUNC_8(struct io_pgtable_ops *VAR_1,
      unsigned long VAR_2)
{
 struct arm_lpae_io_pgtable *VAR_3 = FUNC_4(VAR_1);
 arm_lpae_iopte VAR_4, *VAR_5 = VAR_3->pgd;
 int VAR_6 = FUNC_2(VAR_3);

 do {

  if (!VAR_5)
   return 0;


  VAR_5 += FUNC_1(VAR_2, VAR_6, VAR_3);
  VAR_4 = FUNC_3(*VAR_5);


  if (!VAR_4)
   return 0;


  if (FUNC_6(VAR_4, VAR_6, VAR_3->iop.fmt))
   goto found_translation;


  VAR_5 = FUNC_5(VAR_4, VAR_3);
 } while (++VAR_6 < VAR_0);


 return 0;

found_translation:
 VAR_2 &= (FUNC_0(VAR_6, VAR_3) - 1);
 return FUNC_7(VAR_4, VAR_3) | VAR_2;
}
