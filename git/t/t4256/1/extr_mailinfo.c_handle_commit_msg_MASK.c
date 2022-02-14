
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; char* buf; } ;
struct TYPE_4__ {int buf; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct mailinfo {int header_stage; int log_message; scalar_t__ message_id; int ** s_hdr_data; scalar_t__ use_scissors; TYPE_2__ charset; scalar_t__ use_inbody_headers; TYPE_1__ inbody_header_accum; int filter_stage; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mailinfo*,struct strbuf*) ;
 scalar_t__ FUNC_2 (struct mailinfo*,struct strbuf*,int ) ;
 int FUNC_3 (struct mailinfo*) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct strbuf*) ;
 int FUNC_6 (int *,struct strbuf*) ;
 int FUNC_7 (int *,char*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct mailinfo *VAR_1, struct strbuf *VAR_2)
{
 FUNC_0(!VAR_1->filter_stage);

 if (VAR_1->header_stage) {
  if (!VAR_2->len || (VAR_2->len == 1 && VAR_2->buf[0] == '\n')) {
   if (VAR_1->inbody_header_accum.len) {
    FUNC_3(VAR_1);
    VAR_1->header_stage = 0;
   }
   return 0;
  }
 }

 if (VAR_1->use_inbody_headers && VAR_1->header_stage) {
  VAR_1->header_stage = FUNC_1(VAR_1, VAR_2);
  if (VAR_1->header_stage)
   return 0;
 } else



  VAR_1->header_stage = 0;


 if (FUNC_2(VAR_1, VAR_2, VAR_1->charset.buf))
  return 0;

 if (VAR_1->use_scissors && FUNC_4(VAR_2->buf)) {
  int VAR_3;

  FUNC_9(&VAR_1->log_message, 0);
  VAR_1->header_stage = 1;





  for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3++) {
   if (VAR_1->s_hdr_data[VAR_3])
    FUNC_8(VAR_1->s_hdr_data[VAR_3]);
   VAR_1->s_hdr_data[VAR_3] = ((void*)0);
  }
  return 0;
 }

 if (FUNC_5(VAR_2)) {
  if (VAR_1->message_id)
   FUNC_7(&VAR_1->log_message,
        "Message-Id: %s\n", VAR_1->message_id);
  return 1;
 }

 FUNC_6(&VAR_1->log_message, VAR_2);
 return 0;
}
