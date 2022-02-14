
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {struct etr_buf* sysfs_buf; struct etr_buf* etr_buf; } ;
struct etr_buf {int offset; scalar_t__ full; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct etr_buf*,int ) ;
 int FUNC_2 (struct etr_buf*) ;
 int FUNC_3 (struct tmc_drvdata*) ;

__attribute__((used)) static void FUNC_4(struct tmc_drvdata *VAR_0)
{
 struct etr_buf *VAR_1 = VAR_0->etr_buf;

 if (FUNC_0(VAR_0->sysfs_buf != VAR_1)) {
  FUNC_2(VAR_0->sysfs_buf);
  VAR_0->sysfs_buf = ((void*)0);
 } else {
  FUNC_3(VAR_0);




  if (VAR_1->full)
   FUNC_1(VAR_1,
         VAR_1->offset);
 }
}
