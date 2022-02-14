
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9034_touch {int last_x; int last_y; int input_dev; scalar_t__ y_inverted; scalar_t__ x_inverted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct da9034_touch *VAR_3)
{
 int VAR_4 = VAR_3->last_x;
 int VAR_5 = VAR_3->last_y;

 VAR_4 &= 0xfff;
 if (VAR_3->x_inverted)
  VAR_4 = 1024 - VAR_4;
 VAR_5 &= 0xfff;
 if (VAR_3->y_inverted)
  VAR_5 = 1024 - VAR_5;

 FUNC_0(VAR_3->input_dev, VAR_0, VAR_4);
 FUNC_0(VAR_3->input_dev, VAR_1, VAR_5);
 FUNC_1(VAR_3->input_dev, VAR_2, 1);

 FUNC_2(VAR_3->input_dev);
}
