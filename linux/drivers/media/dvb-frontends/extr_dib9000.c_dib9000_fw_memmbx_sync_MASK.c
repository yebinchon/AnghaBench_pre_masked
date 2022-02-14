
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int fw_is_running; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {scalar_t__* i2c_read_buffer; TYPE_2__ platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib9000_state*,int ,scalar_t__*,int) ;
 int FUNC_1 (struct dib9000_state*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct dib9000_state *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 10;

 if (!VAR_2->platform.risc.fw_is_running)
  return 0;
 FUNC_1(VAR_2, VAR_1, &VAR_3);
 do {
  FUNC_0(VAR_2, VAR_1, VAR_2->i2c_read_buffer, 1);
 } while (VAR_2->i2c_read_buffer[0] && VAR_4--);

 if (VAR_4 > 0)
  return 0;
 return -VAR_0;
}
