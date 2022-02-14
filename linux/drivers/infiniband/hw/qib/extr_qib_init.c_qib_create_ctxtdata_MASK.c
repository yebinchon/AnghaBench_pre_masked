
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {size_t first_user_ctxt; int rcvegrbufsize; int (* f_init_ctxt ) (struct qib_ctxtdata*) ;struct qib_ctxtdata** rcd; } ;
struct qib_ctxtdata {int node_id; int cnt; size_t ctxt; int rcvegrbuf_size; int rcvegrbufs_perchunk; int rcvegrbuf_chunks; int rcvegrcnt; int rcvegrbufs_perchunk_shift; void* opstats; struct qib_devdata* dd; struct qib_pportdata* ppd; int qp_wait_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qib_ctxtdata*) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct qib_devdata*,char*) ;
 int FUNC_5 (struct qib_ctxtdata*) ;

struct qib_ctxtdata *FUNC_6(struct qib_pportdata *VAR_1, u32 VAR_2,
 int VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_1->dd;
 struct qib_ctxtdata *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0, VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_5->qp_wait_list);
  VAR_5->node_id = VAR_3;
  VAR_5->ppd = VAR_1;
  VAR_5->dd = VAR_4;
  VAR_5->cnt = 1;
  VAR_5->ctxt = VAR_2;
  VAR_4->rcd[VAR_2] = VAR_5;
  VAR_4->f_init_ctxt(VAR_5);
  VAR_5->rcvegrbuf_size = 0x8000;
  VAR_5->rcvegrbufs_perchunk =
   VAR_5->rcvegrbuf_size / VAR_4->rcvegrbufsize;
  VAR_5->rcvegrbuf_chunks = (VAR_5->rcvegrcnt +
   VAR_5->rcvegrbufs_perchunk - 1) /
   VAR_5->rcvegrbufs_perchunk;
  VAR_5->rcvegrbufs_perchunk_shift =
   FUNC_1(VAR_5->rcvegrbufs_perchunk);
 }
 return VAR_5;
}
