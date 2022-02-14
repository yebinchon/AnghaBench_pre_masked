
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tmc_sg_table {int dev; } ;
struct etr_sg_table {struct tmc_sg_table* sg_table; } ;
struct etr_buf {long len; long offset; long size; scalar_t__ full; struct etr_sg_table* private; } ;


 int FUNC_0 (int ,char*,int ) ;
 long FUNC_1 (struct tmc_sg_table*,int ) ;
 int FUNC_2 (struct tmc_sg_table*,long,long) ;

__attribute__((used)) static void FUNC_3(struct etr_buf *VAR_0, u64 VAR_1, u64 VAR_2)
{
 long VAR_3, VAR_4;
 struct etr_sg_table *VAR_5 = VAR_0->private;
 struct tmc_sg_table *VAR_6 = VAR_5->sg_table;


 VAR_3 = FUNC_1(VAR_6, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_6->dev,
    "Unable to map RRP %llx to offset\n", VAR_1);
  VAR_0->len = 0;
  return;
 }

 VAR_4 = FUNC_1(VAR_6, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_6->dev,
    "Unable to map RWP %llx to offset\n", VAR_2);
  VAR_0->len = 0;
  return;
 }

 VAR_0->offset = VAR_3;
 if (VAR_0->full)
  VAR_0->len = VAR_0->size;
 else
  VAR_0->len = ((VAR_4 < VAR_3) ? VAR_0->size : 0) +
    VAR_4 - VAR_3;
 FUNC_2(VAR_6, VAR_3, VAR_0->len);
}
