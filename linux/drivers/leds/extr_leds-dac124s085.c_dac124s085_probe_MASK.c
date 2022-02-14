
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct TYPE_3__ {int max_brightness; int brightness_set_blocking; int brightness; int name; } ;
struct dac124s085_led {int id; TYPE_1__ ldev; int name; int mutex; struct spi_device* spi; } ;
struct dac124s085 {struct dac124s085_led* leds; } ;


 int FUNC_0 (struct dac124s085_led*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dac124s085* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*,int) ;
 int FUNC_6 (struct spi_device*,struct dac124s085*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_4)
{
 struct dac124s085 *VAR_5;
 struct dac124s085_led *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->bits_per_word = 16;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->leds); VAR_7++) {
  VAR_6 = VAR_5->leds + VAR_7;
  VAR_6->id = VAR_7;
  VAR_6->spi = VAR_4;
  FUNC_5(VAR_6->name, sizeof(VAR_6->name), "dac124s085-%d", VAR_7);
  FUNC_4(&VAR_6->mutex);
  VAR_6->ldev.name = VAR_6->name;
  VAR_6->ldev.brightness = VAR_2;
  VAR_6->ldev.max_brightness = 0xfff;
  VAR_6->ldev.brightness_set_blocking = VAR_3;
  VAR_8 = FUNC_2(&VAR_4->dev, &VAR_6->ldev);
  if (VAR_8 < 0)
   goto eledcr;
 }

 FUNC_6(VAR_4, VAR_5);

 return 0;

eledcr:
 while (VAR_7--)
  FUNC_3(&VAR_5->leds[VAR_7].ldev);

 return VAR_8;
}
