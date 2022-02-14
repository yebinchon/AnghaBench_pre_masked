
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uscale; int scale; } ;
struct isl29018_chip {size_t type; size_t int_time; TYPE_1__ scale; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,...) ;
 int ** VAR_8 ;
 int FUNC_1 (struct isl29018_chip*,int ) ;
 int FUNC_2 (struct isl29018_chip*,int ,int ) ;
 size_t VAR_9 ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct isl29018_chip *VAR_10)
{
 int VAR_11;
 struct device *VAR_12 = FUNC_3(VAR_10->regmap);

 if (VAR_10->type == VAR_9) {
  unsigned int VAR_13;

  VAR_11 = FUNC_4(VAR_10->regmap, VAR_7, &VAR_13);
  if (VAR_11 < 0) {
   FUNC_0(VAR_12,
    "Error reading ID register with error %d\n",
    VAR_11);
   return VAR_11;
  }

  VAR_13 = (VAR_13 & VAR_5) >> VAR_6;

  if (VAR_13 != VAR_4)
   return -VAR_0;


  VAR_11 = FUNC_5(VAR_10->regmap,
         VAR_7,
         VAR_3, 0);
  if (VAR_11 < 0)
   return VAR_11;
 }
 VAR_11 = FUNC_6(VAR_10->regmap, VAR_2, 0x0);
 if (VAR_11 < 0) {
  FUNC_0(VAR_12, "Failed to clear isl29018 TEST reg.(%d)\n",
   VAR_11);
  return VAR_11;
 }






 VAR_11 = FUNC_6(VAR_10->regmap, VAR_1, 0);
 if (VAR_11 < 0) {
  FUNC_0(VAR_12, "Failed to clear isl29018 CMD1 reg.(%d)\n",
   VAR_11);
  return VAR_11;
 }

 FUNC_7(1000, 2000);


 VAR_11 = FUNC_2(VAR_10, VAR_10->scale.scale,
        VAR_10->scale.uscale);
 if (VAR_11 < 0) {
  FUNC_0(VAR_12, "Init of isl29018 fails\n");
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_10,
   VAR_8[VAR_10->type][VAR_10->int_time]);
 if (VAR_11 < 0)
  FUNC_0(VAR_12, "Init of isl29018 fails\n");

 return VAR_11;
}
