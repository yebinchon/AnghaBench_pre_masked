
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_byte ) (struct i2c_pca_pf_data*,int ) ;} ;
struct i2c_pca_pf_data {int wait; TYPE_1__ algo_data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_pca_pf_data*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct i2c_pca_pf_data *VAR_6 = VAR_5;

 if ((VAR_6->algo_data.read_byte(VAR_6, VAR_0) & VAR_1) == 0)
  return VAR_3;

 FUNC_1(&VAR_6->wait);

 return VAR_2;
}
