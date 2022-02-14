
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa930_trkball {scalar_t__ mmio_base; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct input_dev*,int ,int) ;
 int FUNC_7 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct pxa930_trkball *VAR_8 = VAR_7;
 struct input_dev *VAR_9 = VAR_8->input;
 int VAR_10, VAR_11, VAR_12;




 VAR_10 = FUNC_4(VAR_8->mmio_base + VAR_3);

 if (VAR_10 == FUNC_4(VAR_8->mmio_base + VAR_3)) {
  VAR_11 = (FUNC_1(VAR_10) - FUNC_0(VAR_10)) / 2;
  VAR_12 = (FUNC_3(VAR_10) - FUNC_2(VAR_10)) / 2;

  FUNC_6(VAR_9, VAR_1, VAR_11);
  FUNC_6(VAR_9, VAR_2, VAR_12);
  FUNC_7(VAR_9);
 }

 FUNC_5(VAR_5, VAR_8->mmio_base + VAR_4);
 FUNC_5(0, VAR_8->mmio_base + VAR_4);

 return VAR_0;
}
