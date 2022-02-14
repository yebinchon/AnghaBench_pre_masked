
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfsd_dumplocklist {int ndllck_size; char* ndllck_fname; void* ndllck_list; } ;
typedef int nbuf ;
struct TYPE_9__ {int nclid_idlen; int* nclid_id; } ;
struct TYPE_8__ {int nclid_idlen; int* nclid_id; } ;
struct TYPE_7__ {int sin6_addr; int sin_addr; } ;
struct TYPE_6__ {int seqid; int* other; } ;
struct TYPE_10__ {int ndlck_flags; int ndlck_addrfam; TYPE_4__ ndlck_clid; TYPE_3__ ndlck_owner; TYPE_2__ ndlck_cbaddr; int ndlck_end; int ndlck_first; TYPE_1__ ndlck_stateid; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (int const,int *,char*,int) ;
 char* FUNC_4 (int) ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_5 (int ,struct nfsd_dumplocklist*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(char *VAR_7)
{
 struct nfsd_dumplocklist VAR_8;
 int VAR_9, VAR_10;




 VAR_8.ndllck_size = VAR_0;
 VAR_8.ndllck_list = (void *)VAR_6;
 VAR_8.ndllck_fname = VAR_7;
 if (FUNC_5(VAR_5, &VAR_8) < 0)
  FUNC_1(1, "Can't dump locks for %s\n", VAR_7);

 FUNC_7("%-11s %-36s %-45s %s\n",
     "Open/Lock",
     "          Stateid or Lock Range",
     "Clientaddr",
     "Owner and ClientID");



 VAR_9 = 0;
 while (VAR_6[VAR_9].ndlck_clid.nclid_idlen > 0 && VAR_9 < VAR_0) {
  if (VAR_6[VAR_9].ndlck_flags & VAR_4)
   FUNC_7("%-11s %9d %08x %08x %08x ",
       FUNC_6(VAR_6[VAR_9].ndlck_flags),
       VAR_6[VAR_9].ndlck_stateid.seqid,
       VAR_6[VAR_9].ndlck_stateid.other[0],
       VAR_6[VAR_9].ndlck_stateid.other[1],
       VAR_6[VAR_9].ndlck_stateid.other[2]);
  else if (VAR_6[VAR_9].ndlck_flags & (VAR_2 |
      VAR_3))
   FUNC_7("%-11s %9d %08x %08x %08x ",
       FUNC_0(VAR_6[VAR_9].ndlck_flags),
       VAR_6[VAR_9].ndlck_stateid.seqid,
       VAR_6[VAR_9].ndlck_stateid.other[0],
       VAR_6[VAR_9].ndlck_stateid.other[1],
       VAR_6[VAR_9].ndlck_stateid.other[2]);
  else
   FUNC_7("%-11s  %17jd %17jd ",
       FUNC_4(VAR_6[VAR_9].ndlck_flags),
       VAR_6[VAR_9].ndlck_first,
       VAR_6[VAR_9].ndlck_end);
  switch (VAR_6[VAR_9].ndlck_addrfam) {
  default:
   FUNC_7("%-45s ", "  ");
   break;
  }
  for (VAR_10 = 0; VAR_10 < VAR_6[VAR_9].ndlck_owner.nclid_idlen; VAR_10++)
   FUNC_7("%02x", VAR_6[VAR_9].ndlck_owner.nclid_id[VAR_10]);
  FUNC_7(" ");
  for (VAR_10 = 0; VAR_10 < VAR_6[VAR_9].ndlck_clid.nclid_idlen; VAR_10++)
   FUNC_7("%02x", VAR_6[VAR_9].ndlck_clid.nclid_id[VAR_10]);
  FUNC_7("\n");
  VAR_9++;
 }
}
