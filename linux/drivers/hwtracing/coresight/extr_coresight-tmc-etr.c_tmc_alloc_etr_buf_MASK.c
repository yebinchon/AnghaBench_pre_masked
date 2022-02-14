
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {TYPE_1__* csdev; } ;
struct etr_buf {int mode; int refcount; scalar_t__ size; } ;
struct device {int parent; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 struct etr_buf* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct etr_buf*) ;
 struct etr_buf* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct tmc_drvdata*) ;
 int FUNC_7 (struct tmc_drvdata*,int ) ;
 int FUNC_8 (int ,struct tmc_drvdata*,struct etr_buf*,int,void**) ;

__attribute__((used)) static struct etr_buf *FUNC_9(struct tmc_drvdata *VAR_7,
      ssize_t VAR_8, int VAR_9,
      int VAR_10, void **VAR_11)
{
 int VAR_12 = -VAR_0;
 bool VAR_13, VAR_14;
 bool VAR_15, VAR_16;
 struct etr_buf *VAR_17;
 struct device *VAR_18 = &VAR_7->csdev->dev;

 VAR_13 = FUNC_7(VAR_7, VAR_6);
 VAR_14 = FUNC_2(VAR_18->parent);
 VAR_16 = !!FUNC_6(VAR_7);

 VAR_15 = VAR_16 || VAR_13;

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return FUNC_0(-VAR_0);

 VAR_17->size = VAR_8;
 if (!VAR_11 &&
     (!VAR_15 || VAR_14 || VAR_8 < VAR_5))
  VAR_12 = FUNC_8(VAR_3, VAR_7,
         VAR_17, VAR_10, VAR_11);
 if (VAR_12 && VAR_13)
  VAR_12 = FUNC_8(VAR_2, VAR_7,
         VAR_17, VAR_10, VAR_11);
 if (VAR_12 && VAR_16)
  VAR_12 = FUNC_8(VAR_1, VAR_7,
         VAR_17, VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_17);
  return FUNC_0(VAR_12);
 }

 FUNC_5(&VAR_17->refcount, 1);
 FUNC_1(VAR_18, "allocated buffer of size %ldKB in mode %d\n",
  (unsigned long)VAR_8 >> 10, VAR_17->mode);
 return VAR_17;
}
