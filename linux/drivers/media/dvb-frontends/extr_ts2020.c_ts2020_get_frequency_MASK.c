
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ts2020_priv {int frequency_khz; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct ts2020_priv *VAR_2 = VAR_0->tuner_priv;

 *VAR_1 = VAR_2->frequency_khz;
 return 0;
}
