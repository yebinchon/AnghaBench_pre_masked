
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_pgtable_ops {int dummy; } ;
struct TYPE_2__ {unsigned long long ias; unsigned long long oas; int quirks; } ;
struct io_pgtable {TYPE_1__ cfg; } ;
struct arm_v7s_io_pgtable {int pgd; struct io_pgtable iop; } ;
typedef unsigned long long phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct arm_v7s_io_pgtable*,unsigned long,unsigned long long,size_t,int,int,int ) ;
 struct arm_v7s_io_pgtable* FUNC_3 (struct io_pgtable_ops*) ;
 int FUNC_4 (struct io_pgtable*,unsigned long,size_t,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct io_pgtable_ops *VAR_4, unsigned long VAR_5,
   phys_addr_t VAR_6, size_t VAR_7, int VAR_8)
{
 struct arm_v7s_io_pgtable *VAR_9 = FUNC_3(VAR_4);
 struct io_pgtable *VAR_10 = &VAR_9->iop;
 int VAR_11;


 if (!(VAR_8 & (VAR_1 | VAR_2)))
  return 0;

 if (FUNC_1(VAR_5 >= (1ULL << VAR_9->iop.cfg.ias) ||
      VAR_6 >= (1ULL << VAR_9->iop.cfg.oas)))
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8, 1, VAR_9->pgd);




 if (VAR_10->cfg.quirks & VAR_3) {
  FUNC_4(VAR_10, VAR_5, VAR_7,
       FUNC_0(2));
 } else {
  FUNC_5();
 }

 return VAR_11;
}
