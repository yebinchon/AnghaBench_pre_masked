
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8450 {int dummy; } ;
struct input_polled_dev {struct mma8450* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mma8450*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_3)
{
 struct mma8450 *VAR_4 = VAR_3->private;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_4, VAR_1, 0x07);
 if (VAR_5)
  return;






 VAR_5 = FUNC_0(VAR_4, VAR_0, 0x01);
 if (VAR_5 < 0)
  return;

 FUNC_1(VAR_2);
}
