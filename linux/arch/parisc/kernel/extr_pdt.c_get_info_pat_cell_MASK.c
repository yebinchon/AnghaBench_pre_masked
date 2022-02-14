
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdc_pat_mem_cell_pdt_retinfo {int good_mem; int first_dbe_loc; int current_pdt_entries; int max_pdt_entries; } ;
struct TYPE_2__ {int good_mem; int first_dbe_loc; scalar_t__ pdt_status; int pdt_entries; int pdt_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct pdc_pat_mem_cell_pdt_retinfo*,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct pdc_pat_mem_cell_pdt_retinfo VAR_3;
 int VAR_4;


 if (FUNC_0())
  VAR_4 = FUNC_1(&VAR_3, VAR_1);
 else
  return VAR_0;

 VAR_2.pdt_size = VAR_3.max_pdt_entries;
 VAR_2.pdt_entries = VAR_3.current_pdt_entries;
 VAR_2.pdt_status = 0;
 VAR_2.first_dbe_loc = VAR_3.first_dbe_loc;
 VAR_2.good_mem = VAR_3.good_mem;

 return VAR_4;
}
