
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_keypad {int check_matrix_timer; scalar_t__ stable_count; scalar_t__ enabled; scalar_t__ mmio_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct imx_keypad *VAR_9 = VAR_8;
 unsigned short VAR_10;

 VAR_10 = FUNC_2(VAR_9->mmio_base + VAR_5);


 VAR_10 &= ~(VAR_4 | VAR_1);

 VAR_10 |= VAR_3 | VAR_2;
 FUNC_3(VAR_10, VAR_9->mmio_base + VAR_5);

 if (VAR_9->enabled) {

  VAR_9->stable_count = 0;


  FUNC_0(&VAR_9->check_matrix_timer,
     VAR_6 + FUNC_1(2));
 }

 return VAR_0;
}
