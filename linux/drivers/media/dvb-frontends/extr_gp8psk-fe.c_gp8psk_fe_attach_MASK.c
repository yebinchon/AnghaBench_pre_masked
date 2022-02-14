
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct gp8psk_fe_state* demodulator_priv; int ops; } ;
struct gp8psk_fe_state {int is_rev1; struct dvb_frontend fe; void* priv; struct gp8psk_fe_ops const* ops; } ;
struct gp8psk_fe_ops {int reload; int out; int in; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gp8psk_fe_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

struct dvb_frontend *FUNC_4(const struct gp8psk_fe_ops *VAR_2,
          void *VAR_3, bool VAR_4)
{
 struct gp8psk_fe_state *VAR_5;

 if (!VAR_2 || !VAR_2->in || !VAR_2->out || !VAR_2->reload) {
  FUNC_2("Error! gp8psk-fe ops not defined.\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_0(sizeof(struct gp8psk_fe_state), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(&VAR_5->fe.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_5->fe.demodulator_priv = VAR_5;
 VAR_5->ops = VAR_2;
 VAR_5->priv = VAR_3;
 VAR_5->is_rev1 = VAR_4;

 FUNC_3("Frontend %sattached\n", VAR_4 ? "revision 1 " : "");

 return &VAR_5->fe;
}
