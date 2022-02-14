
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ bio; int timeout; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int sg_list; } ;
struct bsg_job {int result; TYPE_1__ request_payload; int kref; struct device* dev; struct request* bidi_rq; TYPE_1__ reply_payload; int timeout; } ;


 int VAR_0 ;
 struct bsg_job* FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_1__*,struct request*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct device *VAR_1, struct request *VAR_2)
{
 struct bsg_job *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->timeout = VAR_2->timeout;

 if (VAR_2->bio) {
  VAR_4 = FUNC_1(&VAR_3->request_payload, VAR_2);
  if (VAR_4)
   goto failjob_rls_job;
 }
 if (VAR_3->bidi_rq) {
  VAR_4 = FUNC_1(&VAR_3->reply_payload, VAR_3->bidi_rq);
  if (VAR_4)
   goto failjob_rls_rqst_payload;
 }
 VAR_3->dev = VAR_1;

 FUNC_2(VAR_3->dev);
 FUNC_4(&VAR_3->kref);
 return 1;

failjob_rls_rqst_payload:
 FUNC_3(VAR_3->request_payload.sg_list);
failjob_rls_job:
 VAR_3->result = -VAR_0;
 return 0;
}
