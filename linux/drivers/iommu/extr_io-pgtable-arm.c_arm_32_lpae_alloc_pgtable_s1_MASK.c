
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcr; } ;
struct io_pgtable_cfg {int ias; int oas; int pgsize_bitmap; TYPE_1__ arm_lpae_s1_cfg; } ;
struct io_pgtable {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct io_pgtable* FUNC_0 (struct io_pgtable_cfg*,void*) ;

__attribute__((used)) static struct io_pgtable *
FUNC_1(struct io_pgtable_cfg *VAR_4, void *VAR_5)
{
 struct io_pgtable *VAR_6;

 if (VAR_4->ias > 32 || VAR_4->oas > 40)
  return ((void*)0);

 VAR_4->pgsize_bitmap &= (VAR_3 | VAR_2 | VAR_1);
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6) {
  VAR_4->arm_lpae_s1_cfg.tcr |= VAR_0;
  VAR_4->arm_lpae_s1_cfg.tcr &= 0xffffffff;
 }

 return VAR_6;
}
