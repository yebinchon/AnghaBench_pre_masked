
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dn_schk {int * siht; } ;
struct dn_id {int dummy; } ;
struct TYPE_3__ {int len; } ;
struct dn_fs {int fs_nr; int flags; int qsize; int buckets; int* par; int sched_nr; TYPE_1__ oid; } ;
struct dn_fsk {int * aqmfp; struct dn_fs fs; scalar_t__ sched; } ;
struct dn_extra_parms {int dummy; } ;
struct TYPE_4__ {int hash_size; int fsk_count; int id; int fshash; int max_hash_size; int slot_limit; int byte_limit; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*,int,int ,scalar_t__,int ,struct dn_schk*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (struct dn_fs*,struct dn_fs*,int) ;
 int FUNC_6 (struct dn_fsk*,struct dn_extra_parms*,int) ;
 TYPE_2__ VAR_9 ;
 struct dn_fsk* FUNC_7 (int ,int,int,int *) ;
 int FUNC_8 (struct dn_extra_parms*,int ) ;
 int FUNC_9 (struct dn_fsk*,struct dn_schk*) ;
 int FUNC_10 (struct dn_fsk*,int) ;
 int FUNC_11 (int*,int,int,int ,char*) ;
 struct dn_schk* FUNC_12 (int ) ;
 struct dn_extra_parms* FUNC_13 (int,int ,int ) ;
 int FUNC_14 (struct dn_extra_parms*,struct dn_id*,int) ;

__attribute__((used)) static struct dn_fsk *
FUNC_15(struct dn_fs *VAR_10, struct dn_id *VAR_11, int VAR_12)
{
 int VAR_13;
 struct dn_fsk *VAR_14;




 if (VAR_10->oid.len != sizeof(*VAR_10)) {
  FUNC_0("invalid flowset len %d", VAR_10->oid.len);
  return ((void*)0);
 }
 VAR_13 = VAR_10->fs_nr;
 if (VAR_13 <= 0 || VAR_13 >= 3*VAR_4)
  return ((void*)0);
 FUNC_4("flowset %d", VAR_13);

        if (VAR_10->flags & VAR_5) {
  FUNC_11(&VAR_10->qsize, 16384,
      1500, VAR_9.byte_limit, ((void*)0));
        } else {
  FUNC_11(&VAR_10->qsize, 50,
      1, VAR_9.slot_limit, ((void*)0));
        }
 if (VAR_10->flags & VAR_3) {

  FUNC_11((int *)&VAR_10->buckets, VAR_9.hash_size,
   1, VAR_9.max_hash_size, "flowset buckets");
 } else {
  VAR_10->buckets = 1;
 }
 if (!VAR_12)
  FUNC_1();
 do {
     struct dn_schk *VAR_15;
     int VAR_16 = VAR_10->sched_nr ? VAR_0 : 0;
     int VAR_17;
     int VAR_18 = VAR_9.fsk_count;
     VAR_14 = FUNC_7(VAR_9.fshash, VAR_13, VAR_16, ((void*)0));
     if (VAR_14 == ((void*)0)) {
  FUNC_0("missing sched for flowset %d", VAR_13);
         break;
     }

     if (VAR_10->sched_nr == 0)
  VAR_10->sched_nr = VAR_14->fs.sched_nr;
     for (VAR_17 = 0; VAR_17 < sizeof(VAR_10->par)/sizeof(VAR_10->par[0]); VAR_17++) {
  if (VAR_10->par[VAR_17] == -1)
      VAR_10->par[VAR_17] = VAR_14->fs.par[VAR_17];
     }
     if (FUNC_5(&VAR_14->fs, VAR_10, sizeof(*VAR_10)) == 0) {
  FUNC_4("flowset %d unchanged", VAR_13);
  break;
     }
     if (VAR_18 != VAR_9.fsk_count)
  VAR_9.id++;
     VAR_15 = FUNC_12(VAR_10->sched_nr);




     FUNC_3(2, "fs %d changed sched %d@%p to %d@%p",
  VAR_14->fs.fs_nr,
  VAR_14->fs.sched_nr, VAR_14->sched, VAR_10->sched_nr, VAR_15);
     if (VAR_14->sched) {
  int VAR_19 = VAR_15 ? VAR_2 : (VAR_2 | VAR_1);
  VAR_19 |= VAR_1;
  FUNC_10(VAR_14, VAR_19);
     }
     VAR_14->fs = *VAR_10;






     if (VAR_15 != ((void*)0))
  FUNC_9(VAR_14, VAR_15);
 } while (0);
 if (!VAR_12)
  FUNC_2();




 return VAR_14;
}
