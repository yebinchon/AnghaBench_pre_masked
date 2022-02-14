
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dtv_frontend_properties {scalar_t__ modulation; scalar_t__ fec_inner; scalar_t__ pilot; } ;
struct dvb_frontend {struct cx24120_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_5__ {scalar_t__ delsys; } ;
struct cx24120_state {TYPE_2__* i2c; TYPE_1__ dcur; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
struct TYPE_7__ {scalar_t__ delsys; scalar_t__ mod; scalar_t__ fec; scalar_t__ pilot; int m_rat; int n_rat; int rate; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct cx24120_state*,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_4 (struct cx24120_state*,struct cx24120_cmd*,int) ;
 int FUNC_5 (int *,char*,int,int,int,int,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct dvb_frontend *VAR_3)
{
 struct dtv_frontend_properties *VAR_4 = &VAR_3->dtv_property_cache;
 struct cx24120_state *VAR_5 = VAR_3->demodulator_priv;
 struct cx24120_cmd VAR_6;
 int VAR_7, VAR_8;


 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 != 0)
  return;


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (VAR_2[VAR_8].delsys != VAR_5->dcur.delsys)
   continue;
  if (VAR_2[VAR_8].mod != VAR_4->modulation)
   continue;
  if (VAR_2[VAR_8].fec != VAR_4->fec_inner)
   continue;
  if (VAR_2[VAR_8].pilot != VAR_4->pilot)
   continue;

  break;
 }

 if (VAR_8 >= FUNC_0(VAR_2)) {
  FUNC_6("Clock ratio not found - data reception in danger\n");
  return;
 }


 VAR_6.id = VAR_0;
 VAR_6.len = 1;
 VAR_6.arg[0] = 0x00;
 VAR_7 = FUNC_4(VAR_5, &VAR_6, 6);
 if (VAR_7 != 0)
  return;


 FUNC_5(&VAR_5->i2c->dev, "m=%d, n=%d; idx: %d m=%d, n=%d, rate=%d\n",
  VAR_6.arg[2] | (VAR_6.arg[1] << 8) | (VAR_6.arg[0] << 16),
  VAR_6.arg[5] | (VAR_6.arg[4] << 8) | (VAR_6.arg[3] << 16),
  VAR_8,
  VAR_2[VAR_8].m_rat,
  VAR_2[VAR_8].n_rat,
  VAR_2[VAR_8].rate);


 VAR_6.id = VAR_1;
 VAR_6.len = 10;
 VAR_6.arg[0] = 0;
 VAR_6.arg[1] = 0x10;
 VAR_6.arg[2] = (VAR_2[VAR_8].m_rat >> 16) & 0xff;
 VAR_6.arg[3] = (VAR_2[VAR_8].m_rat >> 8) & 0xff;
 VAR_6.arg[4] = (VAR_2[VAR_8].m_rat >> 0) & 0xff;
 VAR_6.arg[5] = (VAR_2[VAR_8].n_rat >> 16) & 0xff;
 VAR_6.arg[6] = (VAR_2[VAR_8].n_rat >> 8) & 0xff;
 VAR_6.arg[7] = (VAR_2[VAR_8].n_rat >> 0) & 0xff;
 VAR_6.arg[8] = (VAR_2[VAR_8].rate >> 8) & 0xff;
 VAR_6.arg[9] = (VAR_2[VAR_8].rate >> 0) & 0xff;

 FUNC_3(VAR_5, &VAR_6);


 FUNC_1(VAR_5, VAR_2[VAR_8].rate);
}
