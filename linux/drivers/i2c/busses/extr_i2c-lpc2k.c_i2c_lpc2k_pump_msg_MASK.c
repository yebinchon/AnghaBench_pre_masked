
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpc2k_i2c {size_t msg_idx; scalar_t__ base; int msg_status; int wait; int irq; TYPE_1__* msg; int is_last; } ;
struct TYPE_2__ {size_t len; unsigned char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct lpc2k_i2c *VAR_13)
{
 unsigned char VAR_14;
 u32 VAR_15;





 VAR_15 = FUNC_2(VAR_13->base + VAR_8);

 switch (VAR_15) {
 case 128:
 case 129:

  VAR_14 = FUNC_1(VAR_13->msg);

  FUNC_4(VAR_14, VAR_13->base + VAR_7);
  FUNC_4(VAR_10, VAR_13->base + VAR_5);
  break;

 case 134:
 case 132:




  if (VAR_13->msg_idx < VAR_13->msg->len) {
   FUNC_4(VAR_13->msg->buf[VAR_13->msg_idx],
          VAR_13->base + VAR_7);
  } else if (VAR_13->is_last) {

   FUNC_4(VAR_12, VAR_13->base + VAR_6);
   FUNC_4(VAR_9, VAR_13->base + VAR_5);
   VAR_13->msg_status = 0;
   FUNC_0(VAR_13->irq);
  } else {
   VAR_13->msg_status = 0;
   FUNC_0(VAR_13->irq);
  }

  VAR_13->msg_idx++;
  break;

 case 138:

  if (VAR_13->msg->len == 1) {

   FUNC_4(VAR_4, VAR_13->base + VAR_5);
  } else {

   FUNC_4(VAR_4, VAR_13->base + VAR_6);
  }

  FUNC_4(VAR_10, VAR_13->base + VAR_5);
  break;

 case 135:





 case 136:

  if (VAR_13->msg_idx < VAR_13->msg->len) {
   VAR_13->msg->buf[VAR_13->msg_idx] =
     FUNC_2(VAR_13->base + VAR_7);
  }


  if (VAR_13->msg_idx >= VAR_13->msg->len - 1 && VAR_13->is_last) {
   FUNC_4(VAR_12, VAR_13->base + VAR_6);
   FUNC_4(VAR_9, VAR_13->base + VAR_5);
   VAR_13->msg_status = 0;
  }


  if (VAR_13->msg_idx >= VAR_13->msg->len - 1) {
   VAR_13->msg_status = 0;
   FUNC_0(VAR_13->irq);
  }





  if (VAR_13->msg_idx >= VAR_13->msg->len - 2) {

   FUNC_4(VAR_4, VAR_13->base + VAR_5);
  } else {

   FUNC_4(VAR_4, VAR_13->base + VAR_6);
  }

  FUNC_4(VAR_10, VAR_13->base + VAR_5);
  VAR_13->msg_idx++;
  break;

 case 133:
 case 131:
 case 137:

  FUNC_4(VAR_12, VAR_13->base + VAR_6);
  VAR_13->msg_status = -VAR_3;
  FUNC_0(VAR_13->irq);
  break;

 case 130:

  VAR_13->msg_status = -VAR_0;


  FUNC_4(VAR_10 | VAR_11, VAR_13->base + VAR_5);
  FUNC_0(VAR_13->irq);
  break;

 default:

  VAR_13->msg_status = -VAR_2;
  FUNC_0(VAR_13->irq);
  break;
 }


 if (VAR_13->msg_status != -VAR_1)
  FUNC_3(&VAR_13->wait);





 if (VAR_13->msg_status != 0)
  FUNC_4(VAR_9, VAR_13->base + VAR_5);
}
