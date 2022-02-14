
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int * bus; int * type; } ;
struct TYPE_4__ {int * irq_unmask; int * irq_mask; int * name; } ;
struct iio_trigger {scalar_t__ subirq_base; TYPE_2__ dev; TYPE_1__ subirq_chip; int * name; int pool_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int,int ,int,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (struct iio_trigger*) ;
 int * FUNC_8 (int ,char const*,int ) ;
 struct iio_trigger* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct iio_trigger *FUNC_11(const char *VAR_10, va_list VAR_11)
{
 struct iio_trigger *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_9(sizeof *VAR_12, VAR_1);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->dev.type = &VAR_9;
 VAR_12->dev.bus = &VAR_6;
 FUNC_0(&VAR_12->dev);

 FUNC_10(&VAR_12->pool_lock);
 VAR_12->subirq_base = FUNC_2(-1, 0,
         VAR_0,
         0);
 if (VAR_12->subirq_base < 0)
  goto free_trig;

 VAR_12->name = FUNC_8(VAR_1, VAR_10, VAR_11);
 if (VAR_12->name == ((void*)0))
  goto free_descs;

 VAR_12->subirq_chip.name = VAR_12->name;
 VAR_12->subirq_chip.irq_mask = &VAR_7;
 VAR_12->subirq_chip.irq_unmask = &VAR_8;
 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  FUNC_5(VAR_12->subirq_base + VAR_13, &VAR_12->subirq_chip);
  FUNC_6(VAR_12->subirq_base + VAR_13, &VAR_5);
  FUNC_4(VAR_12->subirq_base + VAR_13,
      VAR_4 | VAR_2, VAR_3);
 }
 FUNC_1(&VAR_12->dev);

 return VAR_12;

free_descs:
 FUNC_3(VAR_12->subirq_base, VAR_0);
free_trig:
 FUNC_7(VAR_12);
 return ((void*)0);
}
