
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct sg_io_v4 {scalar_t__ din_xfer_len; int din_xferp; scalar_t__ dout_xfer_len; int request_len; int request; } ;
struct request {int q; } ;
struct bsg_job {TYPE_1__* request; TYPE_1__* bidi_rq; int * bidi_bio; int request_len; } ;
typedef int fmode_t ;
struct TYPE_8__ {int * bio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int ) ;
 struct bsg_job* FUNC_3 (struct request*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct request *VAR_2, struct sg_io_v4 *VAR_3,
  fmode_t VAR_4)
{
 struct bsg_job *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 VAR_5->request_len = VAR_3->request_len;
 VAR_5->request = FUNC_7(FUNC_8(VAR_3->request), VAR_3->request_len);
 if (FUNC_0(VAR_5->request))
  return FUNC_1(VAR_5->request);

 if (VAR_3->dout_xfer_len && VAR_3->din_xfer_len) {
  VAR_5->bidi_rq = FUNC_2(VAR_2->q, VAR_1, 0);
  if (FUNC_0(VAR_5->bidi_rq)) {
   VAR_6 = FUNC_1(VAR_5->bidi_rq);
   goto out;
  }

  VAR_6 = FUNC_5(VAR_2->q, VAR_5->bidi_rq, ((void*)0),
    FUNC_8(VAR_3->din_xferp), VAR_3->din_xfer_len,
    VAR_0);
  if (VAR_6)
   goto out_free_bidi_rq;

  VAR_5->bidi_bio = VAR_5->bidi_rq->bio;
 } else {
  VAR_5->bidi_rq = ((void*)0);
  VAR_5->bidi_bio = ((void*)0);
 }

 return 0;

out_free_bidi_rq:
 if (VAR_5->bidi_rq)
  FUNC_4(VAR_5->bidi_rq);
out:
 FUNC_6(VAR_5->request);
 return VAR_6;
}
