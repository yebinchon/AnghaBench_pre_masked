
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_3__ {int mem_mbx_lock; } ;
struct TYPE_4__ {TYPE_1__ risc; } ;
struct dib9000_state {int demod_lock; TYPE_2__ platform; scalar_t__ i2c_read_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int ) ;
 int FUNC_1 (struct dib9000_state*,int ,int *,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4, u32 * VAR_5)
{
 struct dib9000_state *VAR_6 = VAR_4->demodulator_priv;
 u16 *VAR_7 = (u16 *)VAR_6->i2c_read_buffer;
 int VAR_8 = 0;

 if (FUNC_3(&VAR_6->demod_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return -VAR_0;
 }
 if (FUNC_3(&VAR_6->platform.risc.mem_mbx_lock) < 0) {
  FUNC_2("could not get the lock\n");
  VAR_8 = -VAR_0;
  goto error;
 }
 if (FUNC_0(VAR_6, VAR_3) < 0) {
  FUNC_4(&VAR_6->platform.risc.mem_mbx_lock);
  VAR_8 = -VAR_1;
  goto error;
 }
 FUNC_1(VAR_6, VAR_2, (u8 *) VAR_7, 16 * 2);
 FUNC_4(&VAR_6->platform.risc.mem_mbx_lock);

 *VAR_5 = VAR_7[12];

error:
 FUNC_4(&VAR_6->demod_lock);
 return VAR_8;
}
