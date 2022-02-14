
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_timer_trigger {char** triggers; TYPE_2__* dev; int has_trgo2; } ;
struct TYPE_4__ {int groups; int parent; } ;
struct iio_trigger {TYPE_1__ dev; int * ops; } ;
struct TYPE_5__ {int parent; } ;


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (TYPE_2__*,char*,char const* const) ;
 int FUNC_1 (TYPE_2__*,struct iio_trigger*) ;
 int FUNC_2 (struct iio_trigger*,struct stm32_timer_trigger*) ;
 int FUNC_3 (char const* const) ;
 int FUNC_4 (char const* const) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct stm32_timer_trigger *VAR_3)
{
 int VAR_4;
 const char * const *VAR_5 = VAR_3->triggers;

 while (VAR_5 && *VAR_5) {
  struct iio_trigger *VAR_6;
  bool VAR_7 = FUNC_4(*VAR_5);
  bool VAR_8 = FUNC_3(*VAR_5);

  if (VAR_8 && !VAR_3->has_trgo2) {
   VAR_5++;
   continue;
  }

  VAR_6 = FUNC_0(VAR_3->dev, "%s", *VAR_5);
  if (!VAR_6)
   return -VAR_0;

  VAR_6->dev.parent = VAR_3->dev->parent;
  VAR_6->ops = &VAR_2;





  if (VAR_7 || VAR_8)
   VAR_6->dev.groups = VAR_1;

  FUNC_2(VAR_6, VAR_3);

  VAR_4 = FUNC_1(VAR_3->dev, VAR_6);
  if (VAR_4)
   return VAR_4;
  VAR_5++;
 }

 return 0;
}
