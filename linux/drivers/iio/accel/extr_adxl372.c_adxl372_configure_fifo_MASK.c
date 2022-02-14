
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {unsigned int watermark; unsigned int fifo_set_size; int regmap; int fifo_mode; int fifo_format; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct adxl372_state*,int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct adxl372_state *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_4, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;





 VAR_5 = (VAR_4->watermark * VAR_4->fifo_set_size);
 VAR_6 = FUNC_0(VAR_4->fifo_format) |
     FUNC_1(VAR_4->fifo_mode) |
     FUNC_2(VAR_5);

 VAR_7 = FUNC_4(VAR_4->regmap,
      VAR_1, VAR_5 & 0xFF);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_4->regmap, VAR_0, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_3(VAR_4, VAR_2);
}
