
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {TYPE_2__** fe; } ;
struct TYPE_3__ {int (* read_signal_strength ) (TYPE_2__*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (TYPE_2__*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u16 * VAR_2)
{
 struct dib8000_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4;
 u16 VAR_5;

 *VAR_2 = 0;
 for (VAR_4 = 1; (VAR_4 < VAR_0) && (VAR_3->fe[VAR_4] != ((void*)0)); VAR_4++) {
  VAR_3->fe[VAR_4]->ops.read_signal_strength(VAR_3->fe[VAR_4], &VAR_5);
  if (VAR_5 > 65535 - *VAR_2)
   *VAR_2 = 65535;
  else
   *VAR_2 += VAR_5;
 }

 VAR_5 = 65535 - FUNC_0(VAR_3, 390);
 if (VAR_5 > 65535 - *VAR_2)
  *VAR_2 = 65535;
 else
  *VAR_2 += VAR_5;
 return 0;
}
