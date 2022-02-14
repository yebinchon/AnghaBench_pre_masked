
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pca953x_chip {int driver_data; int i2c_lock; int regmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pca953x_chip*,int ,unsigned int,int,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pca953x_chip *VAR_7,
      unsigned int VAR_8,
      unsigned long VAR_9)
{
 u8 VAR_10 = FUNC_3(VAR_7, VAR_2, VAR_8,
          1, 0);
 u8 VAR_11 = FUNC_3(VAR_7, VAR_3, VAR_8,
           1, 0);
 u8 VAR_12 = FUNC_0(VAR_8 % VAR_0);
 int VAR_13;





 if (!(VAR_7->driver_data & VAR_4))
  return -VAR_1;

 FUNC_1(&VAR_7->i2c_lock);


 VAR_13 = FUNC_4(VAR_7->regmap, VAR_10, VAR_12, 0);
 if (VAR_13)
  goto exit;


 if (VAR_9 == VAR_6)
  VAR_13 = FUNC_4(VAR_7->regmap, VAR_11, VAR_12, VAR_12);
 else if (VAR_9 == VAR_5)
  VAR_13 = FUNC_4(VAR_7->regmap, VAR_11, VAR_12, 0);
 if (VAR_13)
  goto exit;


 VAR_13 = FUNC_4(VAR_7->regmap, VAR_10, VAR_12, VAR_12);

exit:
 FUNC_2(&VAR_7->i2c_lock);
 return VAR_13;
}
