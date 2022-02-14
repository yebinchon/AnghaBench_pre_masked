
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hd44780 {void** pins; } ;
struct charlcd {int height; int width; int bwidth; int ifwidth; int * ops; struct hd44780* drvdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (void*) ;
 struct charlcd* FUNC_2 (int) ;
 int FUNC_3 (struct charlcd*) ;
 int FUNC_4 (struct charlcd*) ;
 int FUNC_5 (struct device*,char*,int*) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 void* FUNC_7 (struct device*,char*,unsigned int,int ) ;
 void* FUNC_8 (struct device*,char*,int ) ;
 int FUNC_9 (struct device*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct platform_device*,struct charlcd*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 unsigned int VAR_14, VAR_15;
 struct charlcd *VAR_16;
 struct hd44780 *VAR_17;
 int VAR_18, VAR_19;


 VAR_18 = FUNC_9(VAR_13, "data");
 if (VAR_18 < 0)
  return VAR_18;

 switch (VAR_18) {
 case 4:
  VAR_15 = VAR_9;
  break;
 case 8:
  VAR_15 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = FUNC_2(sizeof(struct hd44780));
 if (!VAR_16)
  return -VAR_1;

 VAR_17 = VAR_16->drvdata;

 for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
  VAR_17->pins[VAR_15 + VAR_14] = FUNC_7(VAR_13, "data", VAR_14,
         VAR_3);
  if (FUNC_0(VAR_17->pins[VAR_15 + VAR_14])) {
   VAR_19 = FUNC_1(VAR_17->pins[VAR_15 + VAR_14]);
   goto fail;
  }
 }

 VAR_17->pins[VAR_5] = FUNC_6(VAR_13, "enable", VAR_3);
 if (FUNC_0(VAR_17->pins[VAR_5])) {
  VAR_19 = FUNC_1(VAR_17->pins[VAR_5]);
  goto fail;
 }

 VAR_17->pins[VAR_6] = FUNC_6(VAR_13, "rs", VAR_2);
 if (FUNC_0(VAR_17->pins[VAR_6])) {
  VAR_19 = FUNC_1(VAR_17->pins[VAR_6]);
  goto fail;
 }


 VAR_17->pins[VAR_7] = FUNC_8(VAR_13, "rw",
       VAR_3);
 if (FUNC_0(VAR_17->pins[VAR_7])) {
  VAR_19 = FUNC_1(VAR_17->pins[VAR_7]);
  goto fail;
 }

 VAR_17->pins[VAR_4] = FUNC_8(VAR_13, "backlight",
       VAR_3);
 if (FUNC_0(VAR_17->pins[VAR_4])) {
  VAR_19 = FUNC_1(VAR_17->pins[VAR_4]);
  goto fail;
 }


 VAR_19 = FUNC_5(VAR_13, "display-height-chars",
           &VAR_16->height);
 if (VAR_19)
  goto fail;
 VAR_19 = FUNC_5(VAR_13, "display-width-chars", &VAR_16->width);
 if (VAR_19)
  goto fail;





 if (VAR_16->height > 2)
  VAR_16->bwidth = VAR_16->width;


 FUNC_5(VAR_13, "internal-buffer-width", &VAR_16->bwidth);

 VAR_16->ifwidth = VAR_18;
 VAR_16->ops = VAR_18 == 8 ? &VAR_11 : &VAR_10;

 VAR_19 = FUNC_4(VAR_16);
 if (VAR_19)
  goto fail;

 FUNC_10(VAR_12, VAR_16);
 return 0;

fail:
 FUNC_3(VAR_16);
 return VAR_19;
}
