
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_6__ {int mem_mbx_lock; } ;
struct TYPE_7__ {TYPE_2__ risc; } ;
struct dib9000_state {int demod_lock; TYPE_3__ platform; TYPE_4__** fe; scalar_t__ i2c_read_buffer; } ;
struct TYPE_5__ {int (* read_signal_strength ) (TYPE_4__*,int*) ;} ;
struct TYPE_8__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int ) ;
 int FUNC_1 (struct dib9000_state*,int ,size_t*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_5, u16 * VAR_6)
{
 struct dib9000_state *VAR_7 = VAR_5->demodulator_priv;
 u8 VAR_8;
 u16 *VAR_9 = (u16 *)VAR_7->i2c_read_buffer;
 u16 VAR_10;
 int VAR_11 = 0;

 if (FUNC_3(&VAR_7->demod_lock) < 0) {
  FUNC_2("could not get the lock\n");
  return -VAR_0;
 }
 *VAR_6 = 0;
 for (VAR_8 = 1; (VAR_8 < VAR_4) && (VAR_7->fe[VAR_8] != ((void*)0)); VAR_8++) {
  VAR_7->fe[VAR_8]->ops.read_signal_strength(VAR_7->fe[VAR_8], &VAR_10);
  if (VAR_10 > 65535 - *VAR_6)
   *VAR_6 = 65535;
  else
   *VAR_6 += VAR_10;
 }

 if (FUNC_3(&VAR_7->platform.risc.mem_mbx_lock) < 0) {
  FUNC_2("could not get the lock\n");
  VAR_11 = -VAR_0;
  goto error;
 }
 if (FUNC_0(VAR_7, VAR_3) < 0) {
  FUNC_4(&VAR_7->platform.risc.mem_mbx_lock);
  VAR_11 = -VAR_1;
  goto error;
 }
 FUNC_1(VAR_7, VAR_2, (u8 *) VAR_9, 16 * 2);
 FUNC_4(&VAR_7->platform.risc.mem_mbx_lock);

 VAR_10 = 65535 - VAR_9[4];
 if (VAR_10 > 65535 - *VAR_6)
  *VAR_6 = 65535;
 else
  *VAR_6 += VAR_10;

error:
 FUNC_4(&VAR_7->demod_lock);
 return VAR_11;
}
