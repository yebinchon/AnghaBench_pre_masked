
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_i2c_hw {int reference_frequency; int default_speed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(
 const struct dce_i2c_hw *VAR_2)
{
 uint32_t VAR_3 = 0;

 FUNC_0(VAR_1, VAR_0, &VAR_3);



 return VAR_3 ?
  VAR_2->reference_frequency / VAR_3 :
  VAR_2->default_speed;
}
