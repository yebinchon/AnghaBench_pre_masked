
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tbl_walk {int pasid; TYPE_3__* pasid_tbl_entry; TYPE_2__* ctx_entry; TYPE_1__* rt_entry; int devfn; int bus; } ;
struct seq_file {struct tbl_walk* private; } ;
struct TYPE_6__ {int * val; } ;
struct TYPE_5__ {int lo; int hi; } ;
struct TYPE_4__ {int lo; int hi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int,int ,int ,int ,...) ;

__attribute__((used)) static inline void FUNC_3(struct seq_file *VAR_0)
{
 struct tbl_walk *VAR_1 = VAR_0->private;

 FUNC_2(VAR_0, "%02x:%02x.%x\t0x%016llx:0x%016llx\t0x%016llx:0x%016llx\t",
     VAR_1->bus, FUNC_1(VAR_1->devfn),
     FUNC_0(VAR_1->devfn), VAR_1->rt_entry->hi,
     VAR_1->rt_entry->lo, VAR_1->ctx_entry->hi,
     VAR_1->ctx_entry->lo);






 if (!VAR_1->pasid_tbl_entry)
  FUNC_2(VAR_0, "%-6d\t0x%016llx:0x%016llx:0x%016llx\n", -1,
      (u64)0, (u64)0, (u64)0);
 else
  FUNC_2(VAR_0, "%-6d\t0x%016llx:0x%016llx:0x%016llx\n",
      VAR_1->pasid, VAR_1->pasid_tbl_entry->val[2],
      VAR_1->pasid_tbl_entry->val[1],
      VAR_1->pasid_tbl_entry->val[0]);
}
