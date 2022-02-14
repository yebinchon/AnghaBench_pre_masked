
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv {int dummy; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int * msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct stv*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_3,
      struct dvb_diseqc_master_cmd *VAR_4)
{
 struct stv *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;

 FUNC_0(VAR_0, 2);
 FUNC_0(VAR_2, 1);
 for (VAR_6 = 0; VAR_6 < VAR_4->msg_len; VAR_6++) {
  FUNC_2(VAR_5, 0x40, 0x00);
  FUNC_1(VAR_1, VAR_4->msg[VAR_6]);
 }
 FUNC_0(VAR_2, 0);
 FUNC_2(VAR_5, 0x20, 0x20);
 return 0;
}
