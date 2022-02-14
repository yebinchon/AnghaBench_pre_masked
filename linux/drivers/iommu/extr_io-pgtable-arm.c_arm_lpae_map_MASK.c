
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct io_pgtable_ops {int dummy; } ;
struct TYPE_3__ {unsigned long long ias; unsigned long long oas; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;
struct arm_lpae_io_pgtable {TYPE_2__ iop; int * pgd; } ;
typedef unsigned long long phys_addr_t ;
typedef int arm_lpae_iopte ;


 int FUNC_0 (struct arm_lpae_io_pgtable*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct arm_lpae_io_pgtable*,unsigned long,unsigned long long,size_t,int ,int,int *) ;
 int FUNC_3 (struct arm_lpae_io_pgtable*,int) ;
 struct arm_lpae_io_pgtable* FUNC_4 (struct io_pgtable_ops*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct io_pgtable_ops *VAR_3, unsigned long VAR_4,
   phys_addr_t VAR_5, size_t VAR_6, int VAR_7)
{
 struct arm_lpae_io_pgtable *VAR_8 = FUNC_4(VAR_3);
 arm_lpae_iopte *VAR_9 = VAR_8->pgd;
 int VAR_10, VAR_11 = FUNC_0(VAR_8);
 arm_lpae_iopte VAR_12;


 if (!(VAR_7 & (VAR_1 | VAR_2)))
  return 0;

 if (FUNC_1(VAR_4 >= (1ULL << VAR_8->iop.cfg.ias) ||
      VAR_5 >= (1ULL << VAR_8->iop.cfg.oas)))
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_8, VAR_7);
 VAR_10 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6, VAR_12, VAR_11, VAR_9);




 FUNC_5();

 return VAR_10;
}
