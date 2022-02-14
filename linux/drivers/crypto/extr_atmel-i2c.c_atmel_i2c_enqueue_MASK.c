
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_i2c_work_data {int work; void* areq; void* cbk; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct atmel_i2c_work_data *VAR_1,
         void (*VAR_2)(struct atmel_i2c_work_data *VAR_3,
       void *VAR_4, int VAR_5),
         void *VAR_6)
{
 VAR_1->cbk = (void *)VAR_2;
 VAR_1->areq = VAR_6;

 FUNC_0(&VAR_1->work, VAR_0);
 FUNC_1(&VAR_1->work);
}
