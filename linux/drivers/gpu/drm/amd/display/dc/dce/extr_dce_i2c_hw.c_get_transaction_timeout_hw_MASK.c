
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_i2c_hw {int buffer_used_bytes; int transaction_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct dce_i2c_hw const*) ;

__attribute__((used)) static uint32_t FUNC_1(
 const struct dce_i2c_hw *VAR_1,
 uint32_t VAR_2)
{

 uint32_t VAR_3 = FUNC_0(VAR_1);



 uint32_t VAR_4;
 uint32_t VAR_5;

 if (!VAR_3)
  return 0;

 VAR_4 = (1000 * VAR_0) / VAR_3;

 VAR_5 = 1 + (VAR_2 << 3) + 1;
 VAR_5 +=
  (VAR_1->buffer_used_bytes << 3) +
  (VAR_1->transaction_count << 1);

 return VAR_4 * VAR_5;
}
