
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* get_rf_strength ) (struct dvb_frontend*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; } ;


 int FUNC_0 (struct dvb_frontend*,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
      u16 *VAR_1)
{
 if (VAR_0->ops.tuner_ops.get_rf_strength)
  VAR_0->ops.tuner_ops.get_rf_strength(VAR_0, VAR_1);

 return 0;
}
