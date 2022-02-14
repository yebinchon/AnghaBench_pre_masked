
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sg_io_v4 {int device_status; int response_len; unsigned int din_resid; scalar_t__ dout_resid; scalar_t__ response; int max_response_len; int info; int driver_status; int transport_status; } ;
struct request {int dummy; } ;
struct TYPE_2__ {unsigned int payload_len; } ;
struct bsg_job {int result; int reply_len; unsigned int reply_payload_rcv_len; TYPE_1__ reply_payload; scalar_t__ bidi_rq; int reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct bsg_job* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct request *VAR_2, struct sg_io_v4 *VAR_3)
{
 struct bsg_job *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;





 VAR_3->device_status = VAR_4->result & 0xff;
 VAR_3->transport_status = FUNC_4(VAR_4->result);
 VAR_3->driver_status = FUNC_3(VAR_4->result);
 VAR_3->info = 0;
 if (VAR_3->device_status || VAR_3->transport_status || VAR_3->driver_status)
  VAR_3->info |= VAR_1;
 VAR_3->response_len = 0;

 if (VAR_4->result < 0) {

  VAR_4->reply_len = sizeof(u32);
  VAR_5 = VAR_4->result;
 }

 if (VAR_4->reply_len && VAR_3->response) {
  int VAR_6 = FUNC_5(VAR_3->max_response_len, VAR_4->reply_len);

  if (FUNC_2(FUNC_6(VAR_3->response), VAR_4->reply, VAR_6))
   VAR_5 = -VAR_0;
  else
   VAR_3->response_len = VAR_6;
 }


 VAR_3->dout_resid = 0;

 if (VAR_4->bidi_rq) {
  unsigned int VAR_7 = VAR_4->reply_payload.payload_len;

  if (FUNC_0(VAR_4->reply_payload_rcv_len > VAR_7))
   VAR_3->din_resid = 0;
  else
   VAR_3->din_resid = VAR_7 - VAR_4->reply_payload_rcv_len;
 } else {
  VAR_3->din_resid = 0;
 }

 return VAR_5;
}
