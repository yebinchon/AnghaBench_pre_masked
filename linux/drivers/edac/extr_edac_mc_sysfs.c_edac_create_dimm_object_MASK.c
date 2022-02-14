
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct mem_ctl_info {int dev; scalar_t__ csbased; } ;
struct TYPE_7__ {int * parent; int * type; } ;
struct dimm_info {TYPE_1__ dev; struct mem_ctl_info* mci; } ;
typedef int location ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct dimm_info*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int,char*,int ,...) ;
 int FUNC_7 (struct dimm_info*,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct mem_ctl_info *VAR_2,
       struct dimm_info *VAR_3,
       int VAR_4)
{
 int VAR_5;
 VAR_3->mci = VAR_2;

 VAR_3->dev.type = &VAR_1;
 FUNC_5(&VAR_3->dev);

 VAR_3->dev.parent = &VAR_2->dev;
 if (VAR_2->csbased)
  FUNC_3(&VAR_3->dev, "rank%d", VAR_4);
 else
  FUNC_3(&VAR_3->dev, "dimm%d", VAR_4);
 FUNC_2(&VAR_3->dev, VAR_3);
 FUNC_8(&VAR_2->dev);

 VAR_5 = FUNC_4(&VAR_3->dev);
 if (VAR_5) {
  FUNC_6(1, "failure: create device %s\n", FUNC_1(&VAR_3->dev));
  FUNC_9(&VAR_3->dev);
  return VAR_5;
 }

 if (FUNC_0(VAR_0)) {
  char VAR_6[80];

  FUNC_7(VAR_3, VAR_6, sizeof(VAR_6));
  FUNC_6(0, "device %s created at location %s\n",
   FUNC_1(&VAR_3->dev), VAR_6);
 }

 return 0;
}
