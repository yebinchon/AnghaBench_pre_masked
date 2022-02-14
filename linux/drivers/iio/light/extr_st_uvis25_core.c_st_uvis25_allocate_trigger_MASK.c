
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_uvis25_hw {TYPE_2__* trig; int irq; int regmap; } ;
struct iio_dev {int name; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 TYPE_2__* FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,TYPE_2__*) ;
 int FUNC_4 (struct device*,int ,int *,int ,unsigned long,int ,struct st_uvis25_hw*) ;
 struct st_uvis25_hw* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 struct device* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_6)
{
 struct st_uvis25_hw *VAR_7 = FUNC_5(VAR_6);
 struct device *VAR_8 = FUNC_9(VAR_7->regmap);
 bool VAR_9 = 0;
 unsigned long VAR_10;
 int VAR_11;

 VAR_10 = FUNC_8(FUNC_7(VAR_7->irq));

 switch (VAR_10) {
 case 130:
 case 128:
  break;
 case 129:
 case 131:
  VAR_9 = 1;
  break;
 default:
  FUNC_1(VAR_8, "mode %lx unsupported\n", VAR_10);
  return -VAR_0;
 }

 VAR_11 = FUNC_10(VAR_7->regmap, VAR_3,
     VAR_4, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_8, VAR_7->irq, ((void*)0),
     VAR_5,
     VAR_10 | VAR_2,
     VAR_6->name, VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_8, "failed to request trigger irq %d\n",
   VAR_7->irq);
  return VAR_11;
 }

 VAR_7->trig = FUNC_2(VAR_8, "%s-trigger",
       VAR_6->name);
 if (!VAR_7->trig)
  return -VAR_1;

 FUNC_6(VAR_7->trig, VAR_6);
 VAR_7->trig->dev.parent = VAR_8;

 return FUNC_3(VAR_8, VAR_7->trig);
}
