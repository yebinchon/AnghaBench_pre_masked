
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct as102_state* demodulator_priv; } ;
struct as10x_tune_status {int tune_state; int BER; int PER; int signal_strength; int member_0; } ;
struct as102_state {int demod_stats; int priv; TYPE_1__* ops; int ber; int signal_strength; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {int (* get_status ) (int ,struct as10x_tune_status*) ;int (* get_stats ) (int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 int FUNC_2 (int ,struct as10x_tune_status*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_6, enum fe_status *VAR_7)
{
 int VAR_8 = 0;
 struct as102_state *VAR_9 = VAR_6->demodulator_priv;
 struct as10x_tune_status VAR_10 = { 0 };


 VAR_8 = VAR_9->ops->get_status(VAR_9->priv, &VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9->signal_strength = VAR_10.signal_strength;
 VAR_9->ber = VAR_10.BER;

 switch (VAR_10.tune_state) {
 case 130:
  *VAR_7 = VAR_2 | VAR_0;
  break;
 case 129:
  *VAR_7 = VAR_2 | VAR_0 | VAR_3 |
     VAR_4;
  break;
 case 128:
  *VAR_7 = VAR_2 | VAR_0 | VAR_3 |
     VAR_1 | VAR_4;
  break;
 default:
  *VAR_7 = VAR_5;
 }

 FUNC_1("as102: tuner status: 0x%02x, strength %d, per: %d, ber: %d\n",
   VAR_10.tune_state, VAR_10.signal_strength,
   VAR_10.PER, VAR_10.BER);

 if (!(*VAR_7 & VAR_1)) {
  FUNC_0(&VAR_9->demod_stats, 0, sizeof(VAR_9->demod_stats));
  return 0;
 }

 VAR_8 = VAR_9->ops->get_stats(VAR_9->priv, &VAR_9->demod_stats);
 if (VAR_8 < 0)
  FUNC_0(&VAR_9->demod_stats, 0, sizeof(VAR_9->demod_stats));

 return VAR_8;
}
