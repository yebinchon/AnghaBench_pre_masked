
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int quality; int read; int name; } ;
struct TYPE_9__ {int function; } ;
struct timeriomem_rng_private {int present; int io_base; TYPE_1__ rng_ops; int completion; TYPE_2__ timer; int period; } ;
struct timeriomem_rng_data {int period; int quality; } ;
struct resource {int start; } ;
struct TYPE_10__ {scalar_t__ of_node; struct timeriomem_rng_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct resource*) ;
 struct timeriomem_rng_private* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,char*,int*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct timeriomem_rng_private*) ;
 int FUNC_15 (struct resource*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 struct timeriomem_rng_data *VAR_11 = VAR_10->dev.platform_data;
 struct timeriomem_rng_private *VAR_12;
 struct resource *VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (!VAR_10->dev.of_node && !VAR_11) {
  FUNC_3(&VAR_10->dev, "timeriomem_rng_data is missing\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_13(VAR_10, VAR_6, 0);
 if (!VAR_13)
  return -VAR_3;

 if (VAR_13->start % 4 != 0 || FUNC_15(VAR_13) < 4) {
  FUNC_3(&VAR_10->dev,
   "address must be at least four bytes wide and 32-bit aligned\n");
  return -VAR_1;
 }


 VAR_12 = FUNC_7(&VAR_10->dev,
   sizeof(struct timeriomem_rng_private), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 FUNC_14(VAR_10, VAR_12);

 if (VAR_10->dev.of_node) {
  int VAR_16;

  if (!FUNC_12(VAR_10->dev.of_node,
      "period", &VAR_16))
   VAR_15 = VAR_16;
  else {
   FUNC_3(&VAR_10->dev, "missing period\n");
   return -VAR_1;
  }

  if (!FUNC_12(VAR_10->dev.of_node,
      "quality", &VAR_16))
   VAR_12->rng_ops.quality = VAR_16;
  else
   VAR_12->rng_ops.quality = 0;
 } else {
  VAR_15 = VAR_11->period;
  VAR_12->rng_ops.quality = VAR_11->quality;
 }

 VAR_12->period = FUNC_11(VAR_15 * VAR_7);
 FUNC_10(&VAR_12->completion);
 FUNC_8(&VAR_12->timer, VAR_0, VAR_5);
 VAR_12->timer.function = VAR_9;

 VAR_12->rng_ops.name = FUNC_5(&VAR_10->dev);
 VAR_12->rng_ops.read = VAR_8;

 VAR_12->io_base = FUNC_6(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_12->io_base)) {
  return FUNC_1(VAR_12->io_base);
 }


 VAR_12->present = 1;
 FUNC_2(&VAR_12->completion);

 VAR_14 = FUNC_9(&VAR_12->rng_ops);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "problem registering\n");
  return VAR_14;
 }

 FUNC_4(&VAR_10->dev, "32bits from 0x%p @ %dus\n",
   VAR_12->io_base, VAR_15);

 return 0;
}
