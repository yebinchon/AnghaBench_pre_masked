
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx2967_i2c {int complete; int error; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zx2967_i2c*) ;
 int FUNC_2 (struct zx2967_i2c*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 u32 VAR_10;
 struct zx2967_i2c *VAR_11 = (struct zx2967_i2c *)VAR_9;

 VAR_10 = FUNC_2(VAR_11, VAR_7) & VAR_2;
 FUNC_1(VAR_11);

 if (VAR_10 & VAR_4)
  VAR_11->error = -VAR_1;
 else if (VAR_10 & VAR_3)
  VAR_11->error = -VAR_0;
 else if (VAR_10 & VAR_5)
  VAR_11->error = 0;
 else
  goto done;

 FUNC_0(&VAR_11->complete);
done:
 return VAR_6;
}
