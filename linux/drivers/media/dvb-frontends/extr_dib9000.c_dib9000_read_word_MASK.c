
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib9000_state {int* i2c_read_buffer; } ;


 scalar_t__ FUNC_0 (struct dib9000_state*,int,int*,int,int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct dib9000_state *VAR_0, u16 VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_0->i2c_read_buffer, 2, 0) != 0)
  return 0;
 return (VAR_0->i2c_read_buffer[0] << 8) | VAR_0->i2c_read_buffer[1];
}
