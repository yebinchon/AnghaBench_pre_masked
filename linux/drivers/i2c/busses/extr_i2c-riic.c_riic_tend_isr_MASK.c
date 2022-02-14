
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct riic_dev {int msg_done; scalar_t__ base; int err; scalar_t__ is_last; scalar_t__ bytes_left; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct riic_dev*,int,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_11, void *VAR_12)
{
 struct riic_dev *VAR_13 = VAR_12;

 if (FUNC_1(VAR_13->base + VAR_10) & VAR_4) {

  FUNC_1(VAR_13->base + VAR_8);
  FUNC_2(VAR_13, VAR_4, 0, VAR_10);
  VAR_13->err = -VAR_0;
 } else if (VAR_13->bytes_left) {
  return VAR_6;
 }

 if (VAR_13->is_last || VAR_13->err) {
  FUNC_2(VAR_13, VAR_3, VAR_2, VAR_9);
  FUNC_3(VAR_1, VAR_13->base + VAR_7);
 } else {

  FUNC_2(VAR_13, VAR_3, 0, VAR_9);
  FUNC_0(&VAR_13->msg_done);
 }

 return VAR_5;
}
