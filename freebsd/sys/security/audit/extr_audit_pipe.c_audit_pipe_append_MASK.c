
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct audit_pipe_entry {int ape_record_len; int * ape_record; } ;
struct TYPE_2__ {int si_note; } ;
struct audit_pipe {scalar_t__ ap_qlen; scalar_t__ ap_qlimit; int ap_qbyteslen; int ap_flags; int ap_cv; int ap_sigio; TYPE_1__ ap_selinfo; int ap_inserts; int ap_queue; int ap_drops; } ;


 int VAR_0 ;
 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct audit_pipe_entry*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (void*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct audit_pipe_entry*,int ) ;
 void* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_9(struct audit_pipe *VAR_8, void *VAR_9, u_int VAR_10)
{
 struct audit_pipe_entry *VAR_11;

 FUNC_0(VAR_8);

 if (VAR_8->ap_qlen >= VAR_8->ap_qlimit) {
  VAR_8->ap_drops++;
  VAR_7++;
  return;
 }

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_1, VAR_2 | VAR_3);
 if (VAR_11 == ((void*)0)) {
  VAR_8->ap_drops++;
  VAR_7++;
  return;
 }

 VAR_11->ape_record = FUNC_6(VAR_10, VAR_1, VAR_2);
 if (VAR_11->ape_record == ((void*)0)) {
  FUNC_5(VAR_11, VAR_1);
  VAR_8->ap_drops++;
  VAR_7++;
  return;
 }

 FUNC_3(VAR_9, VAR_11->ape_record, VAR_10);
 VAR_11->ape_record_len = VAR_10;

 FUNC_2(&VAR_8->ap_queue, VAR_11, VAR_6);
 VAR_8->ap_inserts++;
 VAR_8->ap_qlen++;
 VAR_8->ap_qbyteslen += VAR_11->ape_record_len;
 FUNC_8(&VAR_8->ap_selinfo, VAR_4);
 FUNC_1(&VAR_8->ap_selinfo.si_note, 0);
 if (VAR_8->ap_flags & VAR_0)
  FUNC_7(&VAR_8->ap_sigio, VAR_5, 0);
 FUNC_4(&VAR_8->ap_cv);
}
