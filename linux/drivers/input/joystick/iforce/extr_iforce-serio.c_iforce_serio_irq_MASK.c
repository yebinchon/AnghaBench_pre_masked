
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct iforce {int type; int wait; } ;
struct iforce_serio {int pkt; unsigned char id; unsigned char len; unsigned char idx; unsigned char* data_in; unsigned char expect_packet; unsigned char cmd_response_len; scalar_t__ csum; int cmd_response; struct iforce iforce; } ;
typedef int irqreturn_t ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iforce*,unsigned char,unsigned char*,unsigned char) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,unsigned char) ;
 struct iforce_serio* FUNC_3 (struct serio*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct serio *VAR_2,
        unsigned char VAR_3, unsigned int VAR_4)
{
 struct iforce_serio *VAR_5 = FUNC_3(VAR_2);
 struct iforce *VAR_6 = &VAR_5->iforce;

 if (!VAR_5->pkt) {
  if (VAR_3 == 0x2b)
   VAR_5->pkt = 1;
  goto out;
 }

 if (!VAR_5->id) {
  if (VAR_3 > 3 && VAR_3 != 0xff)
   VAR_5->pkt = 0;
  else
   VAR_5->id = VAR_3;
  goto out;
 }

 if (!VAR_5->len) {
  if (VAR_3 > VAR_0) {
   VAR_5->pkt = 0;
   VAR_5->id = 0;
  } else {
   VAR_5->len = VAR_3;
  }
  goto out;
 }

 if (VAR_5->idx < VAR_5->len) {
  VAR_5->data_in[VAR_5->idx++] = VAR_3;
  VAR_5->csum += VAR_3;
  goto out;
 }

 if (VAR_5->idx == VAR_5->len) {

  if (VAR_5->expect_packet == VAR_5->id) {
   VAR_5->expect_packet = 0;
   FUNC_2(VAR_5->cmd_response,
          VAR_5->data_in, VAR_0);
   VAR_5->cmd_response_len = VAR_5->len;


   FUNC_4(&VAR_6->wait);
  } else if (FUNC_1(VAR_6->type)) {
   FUNC_0(VAR_6, VAR_5->id,
           VAR_5->data_in,
           VAR_5->len);
  }

  VAR_5->pkt = 0;
  VAR_5->id = 0;
  VAR_5->len = 0;
  VAR_5->idx = 0;
  VAR_5->csum = 0;
 }
out:
 return VAR_1;
}
