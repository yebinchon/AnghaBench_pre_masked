
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007 {int stopped; int irq; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tsc2007* FUNC_1 (struct input_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct tsc2007*) ;
 int FUNC_4 (struct tsc2007*,int ) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_1)
{
 struct tsc2007 *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_2->stopped = 0;
 FUNC_2();

 FUNC_0(VAR_2->irq);


 VAR_3 = FUNC_4(VAR_2, VAR_0);
 if (VAR_3 < 0) {
  FUNC_3(VAR_2);
  return VAR_3;
 }

 return 0;
}
