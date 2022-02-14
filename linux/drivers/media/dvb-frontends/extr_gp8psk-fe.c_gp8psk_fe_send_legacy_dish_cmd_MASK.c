
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct gp8psk_fe_state {int priv; TYPE_1__* ops; } ;
struct dvb_frontend {struct gp8psk_fe_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ (* out ) (int ,int ,int,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned long,int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2 (struct dvb_frontend* VAR_3, unsigned long VAR_4)
{
 struct gp8psk_fe_state *VAR_5 = VAR_3->demodulator_priv;
 u8 VAR_6 = VAR_4 & 0x7f;

 if (VAR_5->ops->out(VAR_5->priv, VAR_1, VAR_6, 0, ((void*)0), 0))
  return -VAR_0;

 if (VAR_5->ops->out(VAR_5->priv, VAR_2, !!(VAR_4 & 0x80),
   0, ((void*)0), 0))
  return -VAR_0;

 return 0;
}
