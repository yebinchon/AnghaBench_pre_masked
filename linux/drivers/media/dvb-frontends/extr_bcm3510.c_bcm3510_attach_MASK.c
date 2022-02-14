
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; int ops; } ;
struct bcm3510_state {struct dvb_frontend frontend; int hab_mutex; struct i2c_adapter* i2c; struct bcm3510_config const* config; } ;
struct bcm3510_config {int dummy; } ;
struct TYPE_4__ {int REV; int LAYER; } ;
struct TYPE_5__ {TYPE_1__ REVID_e0; } ;
typedef TYPE_2__ bcm3510_register_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm3510_state*,int,TYPE_2__*) ;
 int FUNC_1 (struct bcm3510_state*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct bcm3510_state*) ;
 struct bcm3510_state* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;

struct dvb_frontend* FUNC_8(const struct bcm3510_config *VAR_2,
       struct i2c_adapter *VAR_3)
{
 struct bcm3510_state* VAR_4 = ((void*)0);
 int VAR_5;
 bcm3510_register_value VAR_6;


 VAR_4 = FUNC_5(sizeof(struct bcm3510_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto error;



 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;


 FUNC_6(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;

 FUNC_7(&VAR_4->hab_mutex);

 if ((VAR_5 = FUNC_0(VAR_4,0xe0,&VAR_6)) < 0)
  goto error;

 FUNC_2("Revision: 0x%1x, Layer: 0x%1x.\n",VAR_6.REVID_e0.REV,VAR_6.REVID_e0.LAYER);

 if ((VAR_6.REVID_e0.REV != 0x1 && VAR_6.REVID_e0.LAYER != 0xb) &&
  (VAR_6.REVID_e0.REV != 0x8 && VAR_6.REVID_e0.LAYER != 0x0))
  goto error;

 FUNC_3("Revision: 0x%1x, Layer: 0x%1x.",VAR_6.REVID_e0.REV,VAR_6.REVID_e0.LAYER);

 FUNC_1(VAR_4);

 return &VAR_4->frontend;

error:
 FUNC_4(VAR_4);
 return ((void*)0);
}
