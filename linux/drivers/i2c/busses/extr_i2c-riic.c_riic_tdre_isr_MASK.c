
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct riic_dev {scalar_t__ bytes_left; scalar_t__ base; int * buf; TYPE_1__* msg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct riic_dev*,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 struct riic_dev *VAR_11 = VAR_10;
 u8 VAR_12;

 if (!VAR_11->bytes_left)
  return VAR_5;

 if (VAR_11->bytes_left == VAR_8) {
  if (VAR_11->msg->flags & VAR_0)

   FUNC_1(VAR_11, VAR_3, VAR_1, VAR_7);
  else

   VAR_11->bytes_left = VAR_11->msg->len;

  VAR_12 = FUNC_0(VAR_11->msg);
 } else {
  VAR_12 = *VAR_11->buf;
  VAR_11->buf++;
  VAR_11->bytes_left--;
 }






 if (VAR_11->bytes_left == 0)
  FUNC_1(VAR_11, VAR_3, VAR_2, VAR_7);






 FUNC_2(VAR_12, VAR_11->base + VAR_6);

 return VAR_4;
}
