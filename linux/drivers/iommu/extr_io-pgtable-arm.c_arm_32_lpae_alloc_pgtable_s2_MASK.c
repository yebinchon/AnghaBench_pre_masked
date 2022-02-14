
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vtcr; } ;
struct io_pgtable_cfg {int ias; int oas; int pgsize_bitmap; TYPE_1__ arm_lpae_s2_cfg; } ;
struct io_pgtable {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct io_pgtable* FUNC_0 (struct io_pgtable_cfg*,void*) ;

__attribute__((used)) static struct io_pgtable *
FUNC_1(struct io_pgtable_cfg *VAR_3, void *VAR_4)
{
 struct io_pgtable *VAR_5;

 if (VAR_3->ias > 40 || VAR_3->oas > 40)
  return ((void*)0);

 VAR_3->pgsize_bitmap &= (VAR_2 | VAR_1 | VAR_0);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5)
  VAR_3->arm_lpae_s2_cfg.vtcr &= 0xffffffff;

 return VAR_5;
}
