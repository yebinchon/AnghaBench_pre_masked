
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct ds3000_state* demodulator_priv; } ;
struct ds3000_state {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ds3000_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
     s32 VAR_2)
{
 struct ds3000_state *VAR_3 = VAR_1->demodulator_priv;
 s32 VAR_4;

 VAR_4 = VAR_2;
 VAR_4 *= 65536;
 VAR_4 = (2 * VAR_4 + VAR_0) / (2 * VAR_0);

 if (VAR_4 < 0)
  VAR_4 += 65536;

 FUNC_0(VAR_3, 0x5f, VAR_4 >> 8);
 FUNC_0(VAR_3, 0x5e, VAR_4 & 0xff);

 return 0;
}
