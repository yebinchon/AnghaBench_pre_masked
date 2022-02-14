
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_pipe_entry {scalar_t__ ape_record_len; } ;
struct audit_pipe {scalar_t__ ap_qbyteslen; scalar_t__ ap_qlen; scalar_t__ ap_qoffset; int ap_queue; } ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (int,char*) ;
 struct audit_pipe_entry* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct audit_pipe_entry*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct audit_pipe_entry*) ;

__attribute__((used)) static void
FUNC_5(struct audit_pipe *VAR_1)
{
 struct audit_pipe_entry *VAR_2;

 FUNC_0(VAR_1);

 while ((VAR_2 = FUNC_2(&VAR_1->ap_queue)) != ((void*)0)) {
  FUNC_3(&VAR_1->ap_queue, VAR_2, VAR_0);
  VAR_1->ap_qbyteslen -= VAR_2->ape_record_len;
  FUNC_4(VAR_2);
  VAR_1->ap_qlen--;
 }
 VAR_1->ap_qoffset = 0;

 FUNC_1(VAR_1->ap_qlen == 0, ("audit_pipe_free: ap_qbyteslen"));
 FUNC_1(VAR_1->ap_qbyteslen == 0, ("audit_pipe_flush: ap_qbyteslen"));
}
