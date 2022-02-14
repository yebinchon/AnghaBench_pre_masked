
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_obj_desc {char* type; int id; int ver_major; scalar_t__ irq_count; int flags; } ;
struct TYPE_2__ {unsigned int irq_count; } ;
struct fsl_mc_device {int dev; int mc_handle; int mc_io; TYPE_1__ obj_desc; } ;
struct fsl_mc_bus {int irq_resources; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_4 (int *,struct fsl_mc_obj_desc*) ;
 struct fsl_mc_obj_desc* FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (struct fsl_mc_device*,struct fsl_mc_obj_desc*,int) ;
 int FUNC_7 (int ,int ,int ,int,struct fsl_mc_obj_desc*) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (struct fsl_mc_device*,struct fsl_mc_obj_desc*,int) ;
 int FUNC_10 (struct fsl_mc_bus*,unsigned int) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 struct fsl_mc_bus* FUNC_12 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_13(struct fsl_mc_device *VAR_4,
        unsigned int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 unsigned int VAR_9 = VAR_4->obj_desc.irq_count;
 struct fsl_mc_obj_desc *VAR_10 = ((void*)0);
 struct fsl_mc_bus *VAR_11 = FUNC_12(VAR_4);

 VAR_8 = FUNC_8(VAR_4->mc_io,
       0,
       VAR_4->mc_handle,
       &VAR_6);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_4->dev, "dprc_get_obj_count() failed: %d\n",
   VAR_8);
  return VAR_8;
 }

 if (VAR_6 != 0) {
  int VAR_12;

  VAR_10 =
      FUNC_5(&VAR_4->dev, VAR_6,
           sizeof(*VAR_10),
           VAR_3);
  if (!VAR_10)
   return -VAR_0;




  VAR_7 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   struct fsl_mc_obj_desc *VAR_13 =
       &VAR_10[VAR_12];

   VAR_8 = FUNC_7(VAR_4->mc_io,
          0,
          VAR_4->mc_handle,
          VAR_12, VAR_13);
   if (VAR_8 < 0) {
    FUNC_1(&VAR_4->dev,
     "dprc_get_obj(i=%d) failed: %d\n",
     VAR_12, VAR_8);




    VAR_13->type[0] = '\0';
    VAR_13->id = VAR_8;
    VAR_7++;
    continue;
   }





   if ((FUNC_11(VAR_13->type, "dpseci") == 0) &&
       (VAR_13->ver_major < 4))
    VAR_13->flags |=
     VAR_2;

   VAR_9 += VAR_13->irq_count;
   FUNC_0(&VAR_4->dev,
    "Discovered object: type %s, id %d\n",
    VAR_13->type, VAR_13->id);
  }

  if (VAR_7 != 0) {
   FUNC_1(&VAR_4->dev,
    "%d out of %d devices could not be retrieved\n",
    VAR_7, VAR_6);
  }
 }





 if (FUNC_2(&VAR_4->dev) && !VAR_11->irq_resources) {
  if (VAR_9 > VAR_1) {
   FUNC_3(&VAR_4->dev,
     "IRQs needed (%u) exceed IRQs preallocated (%u)\n",
     VAR_9, VAR_1);
  }

  VAR_8 = FUNC_10(VAR_11,
    VAR_1);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_5)
  *VAR_5 = VAR_9;

 FUNC_9(VAR_4, VAR_10,
       VAR_6);

 FUNC_6(VAR_4, VAR_10,
        VAR_6);

 if (VAR_10)
  FUNC_4(&VAR_4->dev, VAR_10);

 return 0;
}
