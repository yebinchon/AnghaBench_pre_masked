
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8860_led {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct lp8860_led *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_0(VAR_4->regmap, VAR_3, &VAR_7);
 if (VAR_5)
  goto out;

 VAR_6 = VAR_7;

 VAR_5 = FUNC_0(VAR_4->regmap, VAR_1, &VAR_7);
 if (VAR_5)
  goto out;

 VAR_6 |= VAR_7;


 if (VAR_6)
  VAR_5 = FUNC_1(VAR_4->regmap, VAR_2,
   VAR_0);
out:
 return VAR_5;
}
