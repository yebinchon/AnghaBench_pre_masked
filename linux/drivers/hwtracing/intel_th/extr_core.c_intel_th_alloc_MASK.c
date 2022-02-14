
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; } ;
struct intel_th_drvdata {int dummy; } ;
struct intel_th {int id; int major; int irq; int num_resources; struct resource* resource; struct intel_th_drvdata* drvdata; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct intel_th* FUNC_0 (int) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (int,int ,int ,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct intel_th*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct intel_th*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct intel_th*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct intel_th*) ;
 int FUNC_11 (struct intel_th*) ;
 struct intel_th* FUNC_12 (int,int ) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;

struct intel_th *
FUNC_16(struct device *VAR_8, struct intel_th_drvdata *VAR_9,
        struct resource *VAR_10, unsigned int VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = 0;
 struct intel_th *VAR_15;

 VAR_15 = FUNC_12(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return FUNC_0(-VAR_0);

 VAR_15->id = FUNC_7(&VAR_5, 0, 0, VAR_1);
 if (VAR_15->id < 0) {
  VAR_12 = VAR_15->id;
  goto err_alloc;
 }

 VAR_15->major = FUNC_1(0, 0, VAR_4,
          "intel_th/output", &VAR_7);
 if (VAR_15->major < 0) {
  VAR_12 = VAR_15->major;
  goto err_ida;
 }
 VAR_15->irq = -1;
 VAR_15->dev = VAR_8;
 VAR_15->drvdata = VAR_9;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  switch (VAR_10[VAR_13].flags & VAR_2) {
  case 128:
   VAR_15->resource[VAR_14++] = VAR_10[VAR_13];
   break;
  case 129:
   VAR_12 = FUNC_6(VAR_8, VAR_10[VAR_13].start,
            VAR_6, VAR_3,
            FUNC_3(VAR_8), VAR_15);
   if (VAR_12)
    goto err_chrdev;

   if (VAR_15->irq == -1)
    VAR_15->irq = VAR_10[VAR_13].start;
   break;
  default:
   FUNC_5(VAR_8, "Unknown resource type %lx\n",
     VAR_10[VAR_13].flags);
   break;
  }

 VAR_15->num_resources = VAR_14;

 FUNC_4(VAR_8, VAR_15);

 FUNC_14(VAR_8);
 FUNC_15(VAR_8);
 FUNC_13(VAR_8);

 VAR_12 = FUNC_10(VAR_15);
 if (VAR_12) {

  FUNC_9(VAR_15);
  return FUNC_0(VAR_12);
 }

 return VAR_15;

err_chrdev:
 FUNC_2(VAR_15->major, 0, VAR_4,
       "intel_th/output");

err_ida:
 FUNC_8(&VAR_5, VAR_15->id);

err_alloc:
 FUNC_11(VAR_15);

 return FUNC_0(VAR_12);
}
