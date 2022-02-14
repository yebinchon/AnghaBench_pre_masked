
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct dvb_frontend {TYPE_2__ ops; struct as102_state* demodulator_priv; } ;
struct as102_state {int elna_cfg; void* priv; struct as102_fe_ops const* ops; struct dvb_frontend frontend; } ;
struct as102_fe_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct as102_state* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (int ,char const*,int) ;

struct dvb_frontend *FUNC_3(const char *VAR_2,
      const struct as102_fe_ops *VAR_3,
      void *VAR_4,
      uint8_t VAR_5)
{
 struct as102_state *VAR_6;
 struct dvb_frontend *VAR_7;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = &VAR_6->frontend;
 VAR_7->demodulator_priv = VAR_6;
 VAR_6->ops = VAR_3;
 VAR_6->priv = VAR_4;
 VAR_6->elna_cfg = VAR_5;


 FUNC_1(&VAR_7->ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 FUNC_2(VAR_7->ops.info.name, VAR_2, sizeof(VAR_7->ops.info.name));

 return VAR_7;

}
