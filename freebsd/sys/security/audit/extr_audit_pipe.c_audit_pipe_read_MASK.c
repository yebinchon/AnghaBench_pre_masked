
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uio {scalar_t__ uio_resid; } ;
struct cdev {int dummy; } ;
struct audit_pipe_entry {scalar_t__ ape_record_len; scalar_t__ ape_record; } ;
struct audit_pipe {int ap_flags; scalar_t__ ap_qoffset; int ap_qlen; int ap_qbyteslen; int ap_queue; int ap_reads; int ap_cv; } ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int FUNC_2 (struct audit_pipe*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct audit_pipe*) ;
 int FUNC_4 (struct audit_pipe*) ;
 int FUNC_5 (struct audit_pipe*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 struct audit_pipe_entry* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct audit_pipe_entry*,int ) ;
 int VAR_3 ;
 int FUNC_11 (struct audit_pipe_entry*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (void**) ;
 int FUNC_14 (char*,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_15(struct cdev *VAR_4, struct uio *VAR_5, int VAR_6)
{
 struct audit_pipe_entry *VAR_7;
 struct audit_pipe *VAR_8;
 u_int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_13((void **)&VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);





 if (FUNC_3(VAR_8) != 0)
  return (VAR_2);
 FUNC_0(VAR_8);
 while (FUNC_8(&VAR_8->ap_queue)) {
  if (VAR_8->ap_flags & VAR_0) {
   FUNC_5(VAR_8);
   FUNC_4(VAR_8);
   return (VAR_1);
  }
  VAR_10 = FUNC_12(&VAR_8->ap_cv, FUNC_2(VAR_8));
  if (VAR_10) {
   FUNC_5(VAR_8);
   FUNC_4(VAR_8);
   return (VAR_10);
  }
 }
 VAR_8->ap_reads++;
 while ((VAR_7 = FUNC_9(&VAR_8->ap_queue)) != ((void*)0) &&
     VAR_5->uio_resid > 0) {
  FUNC_1(VAR_8);

  FUNC_6(VAR_7->ape_record_len > VAR_8->ap_qoffset,
      ("audit_pipe_read: record_len > qoffset (1)"));
  VAR_9 = FUNC_7(VAR_7->ape_record_len - VAR_8->ap_qoffset,
      VAR_5->uio_resid);
  FUNC_5(VAR_8);
  VAR_10 = FUNC_14((char *)VAR_7->ape_record + VAR_8->ap_qoffset,
      VAR_9, VAR_5);
  if (VAR_10) {
   FUNC_4(VAR_8);
   return (VAR_10);
  }





  FUNC_0(VAR_8);
  FUNC_6(FUNC_9(&VAR_8->ap_queue) == VAR_7,
      ("audit_pipe_read: queue out of sync after uiomove"));
  VAR_8->ap_qoffset += VAR_9;
  FUNC_6(VAR_7->ape_record_len >= VAR_8->ap_qoffset,
      ("audit_pipe_read: record_len >= qoffset (2)"));
  if (VAR_8->ap_qoffset == VAR_7->ape_record_len) {
   FUNC_10(&VAR_8->ap_queue, VAR_7, VAR_3);
   VAR_8->ap_qbyteslen -= VAR_7->ape_record_len;
   FUNC_11(VAR_7);
   VAR_8->ap_qlen--;
   VAR_8->ap_qoffset = 0;
  }
 }
 FUNC_5(VAR_8);
 FUNC_4(VAR_8);
 return (0);
}
