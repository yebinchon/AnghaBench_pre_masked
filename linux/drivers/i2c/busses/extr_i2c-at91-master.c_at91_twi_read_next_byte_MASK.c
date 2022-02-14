
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at91_twi_dev {int buf_len; scalar_t__* buf; int recv_len_abort; int dev; int use_alt_cmd; TYPE_1__* msg; scalar_t__ base; } ;
struct TYPE_2__ {int flags; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct at91_twi_dev*,scalar_t__) ;
 int FUNC_1 (struct at91_twi_dev*,int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct at91_twi_dev *VAR_5)
{




 if (!VAR_5->buf_len) {
  FUNC_0(VAR_5, VAR_1);
  return;
 }


 *VAR_5->buf = FUNC_3(VAR_5->base + VAR_1);
 --VAR_5->buf_len;


 if (VAR_5->recv_len_abort)
  return;


 if (FUNC_4(VAR_5->msg->flags & VAR_3)) {

  if (*VAR_5->buf <= VAR_4 && *VAR_5->buf > 0) {
   VAR_5->msg->flags &= ~VAR_3;
   VAR_5->buf_len += *VAR_5->buf;
   VAR_5->msg->len = VAR_5->buf_len + 1;
   FUNC_2(VAR_5->dev, "received block length %zu\n",
      VAR_5->buf_len);
  } else {

   VAR_5->recv_len_abort = 1;
   VAR_5->buf_len = 1;
  }
 }


 if (!VAR_5->use_alt_cmd && VAR_5->buf_len == 1)
  FUNC_1(VAR_5, VAR_0, VAR_2);

 FUNC_2(VAR_5->dev, "read 0x%x, to go %zu\n", *VAR_5->buf, VAR_5->buf_len);

 ++VAR_5->buf;
}
