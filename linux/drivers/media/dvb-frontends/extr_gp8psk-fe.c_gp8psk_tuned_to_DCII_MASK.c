
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gp8psk_fe_state {int priv; TYPE_1__* ops; } ;
struct dvb_frontend {struct gp8psk_fe_state* demodulator_priv; } ;
struct TYPE_2__ {int (* in ) (int ,int ,int ,int ,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2)
{
 struct gp8psk_fe_state *VAR_3 = VAR_2->demodulator_priv;
 u8 VAR_4;

 VAR_3->ops->in(VAR_3->priv, VAR_0, 0, 0, &VAR_4, 1);
 return VAR_4 & VAR_1;
}
