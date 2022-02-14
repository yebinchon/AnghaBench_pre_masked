
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct qt1050_priv {struct qt1050_key* keys; struct regmap* regmap; } ;
struct qt1050_key_regs {int nthr; int csd; int pulse_scale; } ;
struct qt1050_key {scalar_t__ keycode; int num; int samples; int scale; int charge_delay; int thr_cnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct qt1050_key_regs* FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int,int) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qt1050_priv *VAR_2)
{
 struct regmap *VAR_3 = VAR_2->regmap;
 struct qt1050_key *VAR_4 = &VAR_2->keys[0];
 const struct qt1050_key_regs *VAR_5;
 int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = FUNC_1(VAR_3, VAR_6, 0);
  if (VAR_7)
   return VAR_7;
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_4++) {

  if (VAR_4->keycode == VAR_0)
   continue;

  VAR_7 = FUNC_1(VAR_3, VAR_4->num, 1);
  if (VAR_7)
   return VAR_7;

  VAR_5 = FUNC_0(VAR_4->num);

  VAR_7 = FUNC_2(VAR_3, VAR_5->pulse_scale,
       (VAR_4->samples << 4) | (VAR_4->scale));
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_2(VAR_3, VAR_5->csd, VAR_4->charge_delay);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_2(VAR_3, VAR_5->nthr, VAR_4->thr_cnt);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
