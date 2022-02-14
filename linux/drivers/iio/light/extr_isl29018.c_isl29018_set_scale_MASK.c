
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_scale {int scale; int uscale; } ;
struct isl29018_chip {size_t int_time; struct isl29018_scale scale; int regmap; } ;


 unsigned int FUNC_0 (struct isl29018_scale*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct isl29018_scale** VAR_4 ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct isl29018_chip *VAR_5, int VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;
 struct isl29018_scale VAR_10;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4[VAR_5->int_time]); ++VAR_8) {
  if (VAR_6 == VAR_4[VAR_5->int_time][VAR_8].scale &&
      VAR_7 == VAR_4[VAR_5->int_time][VAR_8].uscale) {
   VAR_10 = VAR_4[VAR_5->int_time][VAR_8];
   break;
  }
 }

 if (VAR_8 >= FUNC_0(VAR_4[VAR_5->int_time]))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5->regmap, VAR_3,
     VAR_1,
     VAR_8 << VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->scale = VAR_10;

 return 0;
}
