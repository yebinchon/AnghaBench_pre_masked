
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd_dumplist {int ndl_size; void* ndl_list; } ;
typedef int nbuf ;
struct TYPE_5__ {int nclid_idlen; int* nclid_id; } ;
struct TYPE_4__ {int sin6_addr; int sin_addr; } ;
struct TYPE_6__ {int ndcl_nopenowners; int ndcl_nopens; int ndcl_nlockowners; int ndcl_nlocks; int ndcl_ndelegs; int ndcl_nolddelegs; int ndcl_addrfam; TYPE_2__ ndcl_clid; TYPE_1__ ndcl_cbaddr; int ndcl_flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (int const,int *,char*,int) ;
 scalar_t__ FUNC_4 (int ,struct nfsd_dumplist*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct nfsd_dumplist VAR_4;
 int VAR_5, VAR_6;




 VAR_4.ndl_size = VAR_0;
 VAR_4.ndl_list = (void *)VAR_3;
 if (FUNC_4(VAR_2, &VAR_4) < 0)
  FUNC_1(1, "Can't perform dump clients syscall");

 FUNC_5("%-13s %9.9s %9.9s %9.9s %9.9s %9.9s %9.9s %-45s %s\n",
     "Flags", "OpenOwner", "Open", "LockOwner",
     "Lock", "Deleg", "OldDeleg", "Clientaddr", "ClientID");



 VAR_5 = 0;
 while (VAR_3[VAR_5].ndcl_clid.nclid_idlen > 0 && VAR_5 < VAR_0) {
  FUNC_5("%-13s ", FUNC_0(VAR_3[VAR_5].ndcl_flags));
  FUNC_5("%9d %9d %9d %9d %9d %9d ",
      VAR_3[VAR_5].ndcl_nopenowners,
      VAR_3[VAR_5].ndcl_nopens,
      VAR_3[VAR_5].ndcl_nlockowners,
      VAR_3[VAR_5].ndcl_nlocks,
      VAR_3[VAR_5].ndcl_ndelegs,
      VAR_3[VAR_5].ndcl_nolddelegs);
  switch (VAR_3[VAR_5].ndcl_addrfam) {
  }
  for (VAR_6 = 0; VAR_6 < VAR_3[VAR_5].ndcl_clid.nclid_idlen; VAR_6++)
   FUNC_5("%02x", VAR_3[VAR_5].ndcl_clid.nclid_id[VAR_6]);
  FUNC_5("\n");
  VAR_5++;
 }
}
