
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; int end; } ;
struct TYPE_4__ {scalar_t__ reserved_pe_idx; int m64_segsize; int total_pe_num; int m64_bar_idx; int m64_size; int m64_base; } ;
struct pnv_phb {TYPE_2__ ioda; int opal_id; TYPE_1__* hose; } ;
typedef scalar_t__ s64 ;
struct TYPE_3__ {struct resource* mem_resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_3(struct pnv_phb *VAR_5)
{
 const char *VAR_6;
 struct resource *VAR_7;
 s64 VAR_8;


 VAR_8 = FUNC_1(VAR_5->opal_id,
      VAR_3,
      VAR_5->ioda.m64_bar_idx,
      VAR_5->ioda.m64_base,
      0,
      VAR_5->ioda.m64_size);
 if (VAR_8 != VAR_4) {
  VAR_6 = "configuring";
  goto fail;
 }


 VAR_8 = FUNC_0(VAR_5->opal_id,
          VAR_3,
          VAR_5->ioda.m64_bar_idx,
          VAR_2);
 if (VAR_8 != VAR_4) {
  VAR_6 = "enabling";
  goto fail;
 }





 VAR_7 = &VAR_5->hose->mem_resources[1];
 if (VAR_5->ioda.reserved_pe_idx == 0)
  VAR_7->start += (2 * VAR_5->ioda.m64_segsize);
 else if (VAR_5->ioda.reserved_pe_idx == (VAR_5->ioda.total_pe_num - 1))
  VAR_7->end -= (2 * VAR_5->ioda.m64_segsize);
 else
  FUNC_2("  Cannot strip M64 segment for reserved PE#%x\n",
   VAR_5->ioda.reserved_pe_idx);

 return 0;

fail:
 FUNC_2("  Failure %lld %s M64 BAR#%d\n",
  VAR_8, VAR_6, VAR_5->ioda.m64_bar_idx);
 FUNC_0(VAR_5->opal_id,
     VAR_3,
     VAR_5->ioda.m64_bar_idx,
     VAR_1);
 return -VAR_0;
}
