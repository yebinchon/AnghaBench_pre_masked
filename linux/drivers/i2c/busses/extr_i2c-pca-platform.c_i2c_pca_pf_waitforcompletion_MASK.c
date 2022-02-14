
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* read_byte ) (struct i2c_pca_pf_data*,int ) ;} ;
struct TYPE_4__ {unsigned long timeout; } ;
struct i2c_pca_pf_data {TYPE_1__ algo_data; TYPE_2__ adap; int wait; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct i2c_pca_pf_data*,int ) ;
 int FUNC_1 (struct i2c_pca_pf_data*,int ) ;
 long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int) ;
 long FUNC_4 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct i2c_pca_pf_data *VAR_4 = VAR_3;
 unsigned long VAR_5;
 long VAR_6;

 if (VAR_4->irq) {
  VAR_6 = FUNC_4(VAR_4->wait,
   VAR_4->algo_data.read_byte(VAR_4, VAR_0)
   & VAR_1, VAR_4->adap.timeout);
 } else {

  VAR_5 = VAR_2 + VAR_4->adap.timeout;
  do {
   VAR_6 = FUNC_2(VAR_2, VAR_5);
   if (VAR_4->algo_data.read_byte(VAR_4, VAR_0)
     & VAR_1)
    break;
   FUNC_3(100);
  } while (VAR_6);
 }

 return VAR_6 > 0;
}
