
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8450 {int dummy; } ;
struct input_polled_dev {struct mma8450* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mma8450*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct input_polled_dev *VAR_2)
{
 struct mma8450 *VAR_3 = VAR_2->private;

 FUNC_0(VAR_3, VAR_0, 0x00);
 FUNC_0(VAR_3, VAR_1, 0x01);
}
