
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;
struct cx24123_state {int dummy; } ;


 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*) ;
 int FUNC_2 (struct cx24123_state*,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0,
 struct dvb_diseqc_master_cmd *VAR_1)
{
 struct cx24123_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3, VAR_4, VAR_5;

 FUNC_3("\n");


 VAR_5 = FUNC_0(VAR_2, 0x29);
 if (VAR_5 & 0x10)
  FUNC_2(VAR_2, 0x29, VAR_5 & ~0x50);


 FUNC_1(VAR_2);


 FUNC_2(VAR_2, 0x2a, FUNC_0(VAR_2, 0x2a) & 0xfb);

 for (VAR_3 = 0; VAR_3 < VAR_1->msg_len; VAR_3++)
  FUNC_2(VAR_2, 0x2C + VAR_3, VAR_1->msg[VAR_3]);

 VAR_4 = FUNC_0(VAR_2, 0x29);
 FUNC_2(VAR_2, 0x29, ((VAR_4 & 0x90) | 0x40) |
  ((VAR_1->msg_len-3) & 3));


 FUNC_1(VAR_2);


 if (VAR_5 & 0x10)
  FUNC_2(VAR_2, 0x29, VAR_5 & ~0x40);

 return 0;
}
