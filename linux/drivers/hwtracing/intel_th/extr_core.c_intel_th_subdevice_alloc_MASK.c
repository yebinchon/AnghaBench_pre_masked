
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int end; int flags; int start; } ;
struct intel_th_subdevice {scalar_t__ type; int nres; int scrpd; int otype; scalar_t__ mknode; int name; int res; int id; } ;
struct TYPE_5__ {int devt; } ;
struct TYPE_4__ {int port; int scratchpad; int type; } ;
struct intel_th_device {int host_mode; TYPE_2__ dev; int resource; TYPE_1__ output; int drvdata; } ;
struct intel_th {int num_resources; int irq; struct intel_th_device* hub; int num_thdevs; int major; int dev; struct resource* resource; int drvdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_th_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct intel_th*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int ,int,struct resource*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct intel_th_device*,struct resource*,int) ;
 struct intel_th_device* FUNC_6 (struct intel_th*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct intel_th*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct resource*,int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct resource*) ;

__attribute__((used)) static struct intel_th_device *
FUNC_12(struct intel_th *VAR_10,
    const struct intel_th_subdevice *VAR_11)
{
 struct intel_th_device *VAR_12;
 struct resource VAR_13[3];
 unsigned int VAR_14 = 0;
 int VAR_15, VAR_16;

 VAR_12 = FUNC_6(VAR_10, VAR_11->type, VAR_11->name,
          VAR_11->id);
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 VAR_12->drvdata = VAR_10->drvdata;

 FUNC_9(VAR_13, VAR_11->res,
        sizeof(struct resource) * VAR_11->nres);

 for (VAR_15 = 0; VAR_15 < VAR_11->nres; VAR_15++) {
  struct resource *VAR_17 = VAR_10->resource;
  int VAR_18 = VAR_6;






  if (!VAR_13[VAR_15].end && VAR_13[VAR_15].flags == VAR_5) {
   VAR_18 = VAR_13[VAR_15].start;
   VAR_16 = -VAR_0;
   if (VAR_18 >= VAR_10->num_resources)
    goto fail_put_device;
   VAR_13[VAR_15].start = 0;
   VAR_13[VAR_15].end = FUNC_11(&VAR_17[VAR_18]) - 1;
  }

  if (VAR_13[VAR_15].flags & VAR_5) {
   VAR_13[VAR_15].start += VAR_17[VAR_18].start;
   VAR_13[VAR_15].end += VAR_17[VAR_18].start;

   FUNC_3(VAR_10->dev, "%s:%d @ %pR\n",
    VAR_11->name, VAR_15, &VAR_13[VAR_15]);
  } else if (VAR_13[VAR_15].flags & VAR_4) {




   if (FUNC_1(VAR_10, VAR_7) && VAR_10->irq != -1)
    VAR_13[VAR_15].start = VAR_10->irq;
  }
 }

 VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_11->nres);
 if (VAR_16) {
  FUNC_10(&VAR_12->dev);
  goto fail_put_device;
 }

 if (VAR_11->type == VAR_2) {
  if (VAR_11->mknode)
   VAR_12->dev.devt = FUNC_2(VAR_10->major, VAR_10->num_thdevs);
  VAR_12->output.type = VAR_11->otype;
  VAR_12->output.port = -1;
  VAR_12->output.scratchpad = VAR_11->scrpd;
 } else if (VAR_11->type == VAR_3) {
  VAR_12->host_mode =
   FUNC_1(VAR_10, VAR_9) ? 1 : VAR_8;
  VAR_10->hub = VAR_12;
 }

 VAR_16 = FUNC_4(&VAR_12->dev);
 if (VAR_16) {
  FUNC_10(&VAR_12->dev);
  goto fail_free_res;
 }


 if (VAR_11->type == VAR_3 && !VAR_14) {
  VAR_16 = FUNC_7(VAR_10);
  if (!VAR_16)
   VAR_14++;
 }

 return VAR_12;

fail_free_res:
 FUNC_8(VAR_12->resource);

fail_put_device:
 FUNC_10(&VAR_12->dev);

 return FUNC_0(VAR_16);
}
