
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct riic_dev {int bytes_left; int * buf; scalar_t__ base; scalar_t__ is_last; TYPE_1__* msg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct riic_dev*,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_10, void *VAR_11)
{
 struct riic_dev *VAR_12 = VAR_11;

 if (!VAR_12->bytes_left)
  return VAR_4;

 if (VAR_12->bytes_left == VAR_9) {
  VAR_12->bytes_left = VAR_12->msg->len;
  FUNC_0(VAR_12->base + VAR_6);
  return VAR_3;
 }

 if (VAR_12->bytes_left == 1) {

  if (VAR_12->is_last) {
   FUNC_1(VAR_12, 0, VAR_1, VAR_7);
   FUNC_2(VAR_0, VAR_12->base + VAR_5);
  }

  FUNC_1(VAR_12, 0, VAR_2, VAR_8);

 } else {
  FUNC_1(VAR_12, VAR_2, 0, VAR_8);
 }


 *VAR_12->buf = FUNC_0(VAR_12->base + VAR_6);
 VAR_12->buf++;
 VAR_12->bytes_left--;

 return VAR_3;
}
