
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts2020_priv {scalar_t__ tuner; int stat_work; int dont_poll; int regmap; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct ts2020_priv *VAR_2 = VAR_1->tuner_priv;
 int VAR_3;
 u8 VAR_4;

 if (VAR_2->tuner == VAR_0)
  VAR_4 = 0x0a;
 else
  VAR_4 = 0x00;

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_4, 0x00);
 if (VAR_3 < 0)
  return VAR_3;


 if (!VAR_2->dont_poll)
  FUNC_0(&VAR_2->stat_work);
 return 0;
}
