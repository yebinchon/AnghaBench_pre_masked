
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * funcs; struct device* dev; } ;
struct truly_nt35597 {TYPE_1__ panel; void* mode_gpio; void* reset_gpio; TYPE_3__* supplies; struct nt35597_config* config; struct device* dev; } ;
struct nt35597_config {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int supply; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (void*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct truly_nt35597 *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 int VAR_5, VAR_6;
 const struct nt35597_config *VAR_7;

 VAR_7 = VAR_3->config;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->supplies); VAR_6++)
  VAR_3->supplies[VAR_6].supply = VAR_1[VAR_6];

 VAR_5 = FUNC_5(VAR_4, FUNC_0(VAR_3->supplies),
          VAR_3->supplies);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->reset_gpio = FUNC_4(VAR_4, "reset", VAR_0);
 if (FUNC_2(VAR_3->reset_gpio)) {
  FUNC_1(VAR_4, "cannot get reset gpio %ld\n",
   FUNC_3(VAR_3->reset_gpio));
  return FUNC_3(VAR_3->reset_gpio);
 }

 VAR_3->mode_gpio = FUNC_4(VAR_4, "mode", VAR_0);
 if (FUNC_2(VAR_3->mode_gpio)) {
  FUNC_1(VAR_4, "cannot get mode gpio %ld\n",
   FUNC_3(VAR_3->mode_gpio));
  return FUNC_3(VAR_3->mode_gpio);
 }


 FUNC_8(VAR_3->mode_gpio, 0);

 FUNC_7(&VAR_3->panel);
 VAR_3->panel.dev = VAR_4;
 VAR_3->panel.funcs = &VAR_2;
 FUNC_6(&VAR_3->panel);

 return 0;
}
