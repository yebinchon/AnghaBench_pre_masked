
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_sg_table {int table_daddr; } ;
struct tmc_drvdata {int dummy; } ;
struct etr_buf {int hwaddr; struct catu_etr_buf* private; int mode; int size; } ;
struct coresight_device {int dev; } ;
struct catu_etr_buf {int sladdr; struct tmc_sg_table* catu_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tmc_sg_table*) ;
 int FUNC_1 (struct tmc_sg_table*) ;
 struct tmc_sg_table* FUNC_2 (int *,int,int ,void**) ;
 int FUNC_3 (struct catu_etr_buf*) ;
 struct catu_etr_buf* FUNC_4 (int,int ) ;
 struct coresight_device* FUNC_5 (struct tmc_drvdata*) ;

__attribute__((used)) static int FUNC_6(struct tmc_drvdata *VAR_5,
         struct etr_buf *VAR_6, int VAR_7, void **VAR_8)
{
 struct coresight_device *VAR_9;
 struct tmc_sg_table *VAR_10;
 struct catu_etr_buf *VAR_11;

 VAR_9 = FUNC_5(VAR_5);
 if (!VAR_9)
  return -VAR_1;
 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_10 = FUNC_2(&VAR_9->dev, VAR_7,
     VAR_6->size, VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_11);
  return FUNC_1(VAR_10);
 }

 VAR_6->mode = VAR_3;
 VAR_6->private = VAR_11;
 VAR_6->hwaddr = VAR_0;

 VAR_11->catu_table = VAR_10;

 VAR_11->sladdr = VAR_10->table_daddr;

 return 0;
}
