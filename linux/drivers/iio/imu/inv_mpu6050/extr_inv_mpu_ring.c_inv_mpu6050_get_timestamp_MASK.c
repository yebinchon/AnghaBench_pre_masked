
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inv_mpu6050_state {int data_timestamp; int chip_period; } ;
typedef int s64 ;


 int FUNC_0 (struct inv_mpu6050_state*) ;

__attribute__((used)) static s64 FUNC_1(struct inv_mpu6050_state *VAR_0)
{
 s64 VAR_1;


 VAR_1 = VAR_0->data_timestamp;
 VAR_0->data_timestamp += VAR_0->chip_period * FUNC_0(VAR_0);

 return VAR_1;
}
