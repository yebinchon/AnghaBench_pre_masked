
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dce_i2c_hw {scalar_t__ buffer_used_bytes; scalar_t__ buffer_size; } ;



__attribute__((used)) static uint32_t FUNC_0(
 const struct dce_i2c_hw *VAR_0)
{
 return VAR_0->buffer_size -
   VAR_0->buffer_used_bytes;
}
